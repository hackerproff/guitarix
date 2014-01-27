#! /bin/bash

# use to copy the LV2 bundle gx_sceleton.lv2 to gx_${name}.lv2
# were ${name} is the first arg on comandline, usualy the dsp file.
# the dsp file needs to be stored in the faust folder.
BLUE="\033[1;34m"
RED="\033[1;31m"
NONE="\033[0m"

function usage() {
  echo "usage: make_lv2_bundle {options} <dsp-file> [<plugin class>] "
  echo "options:"
  echo "    -s:   faust use single precision"
  echo "    -d:   faust use double precision (default)"
  echo "    -V:   faust use vectorize"
  echo "    -S x: faust use vector size x"
  exit 1
}
tooldir=../../tools
faustdir=./faust
instdir="$tooldir"/.."$(dirname "$0")"
prec="--double"
faustopt=()
copy=0
while getopts sdVS:c OPT; do
  case "$OPT" in
  h) usage;;
  s) prec="--float";;
  d) prec="--double";;
  V) faustopt+=(--vectorize);;
  S) faustopt+=(--add="-vs $OPTARG");;
  c) copy=1;;
  \?) usage;;
  esac
done
shift $(expr $OPTIND - 1)
[ "$1" = "" ] && usage
if [ "$2" = "" ]; then
  bname="$(basename "$1" .dsp)"
else
  bname="$(basename "$1" .dsp)"
  effect_name="$2"
fi

if [ ! -d gx_${bname}.lv2 ]; then
  mkdir -p gx_${bname}.lv2
else
  echo -e $RED"Directory gx_${bname}.lv2 allready exist, should we remove it? Yes/No"$NONE
  select yn in "Yes" "No"; do
    case $yn in
        Yes ) rm -rf gx_${bname}.lv2; mkdir -p gx_${bname}.lv2; break;;
        No ) echo  -e $RED"exit"$NONE; exit;;
    esac
  done
fi

echo -e $BLUE"generate $bname.cc and copy to gx_$bname.lv2"$NONE
set -e
"$tooldir"/dsp2cc  --init-type=plugin-lv2  \
  $prec "${faustopt[@]}" -o gx_${bname}.lv2/"$bname.cc" ${faustdir}/"$1"


grep 'stereo_audio = 0;' gx_${bname}.lv2/$bname.cc >/dev/null && stereo="false"  || stereo="true"

if [ "$stereo" == "false" ] ; then
echo "copy gx_sceleton.lv2 to gx_$bname.lv2 and rename/replace strings to $bname"
cp -r gx_sceleton.lv2/* gx_${bname}.lv2/ 
j=2
else
echo "copy gx_sceleton_stereo.lv2 to gx_$bname.lv2 and rename/replace strings to $bname"
cp -r gx_sceleton_stereo.lv2/* gx_${bname}.lv2/ 
j=4
fi

cd ./gx_${bname}.lv2 && rename 's/sceleton/'${bname}'/g' * && sed -i 's/sceleton/'${bname}'/g' *

echo "grep ports and copy them to  gx_$bname.h"
cat "$bname.cc" | sed -n '/enum/,/PortIndex/p' |  sed '/enum/d;/PortIndex/d;/{/d;/}/d'>ports

if [ "$stereo" == "false" ] ; then
sed -i -e '/EFFECTS_INPUT/r ports' "gx_$bname.h"
else
sed -i -e '/EFFECTS_INPUT1/r ports' "gx_$bname.h"
fi
echo "grep ports values and enums and copy them to gx_$bname.ttl"
cat "$bname.cc" | sed -n '/data;/{p;g;1!p;};h' | sed 's/ , /\n/;s/.*\n//;s/case//g;s/,/ ;/g;s/://g;s/	 //g;s/  //g;s/ //g;s/$/;/' | sed '$!N;s/\n//'>ports
cat "$bname.cc" | sed -n '/value_pair/{p;n;1!p;};h' | sed 's/{/\n/;s/.*\n//;s/ , /\n/;s/.*\n//;s/case//g;s/}//g;s/{//g;s/;//g;s/,/ ;/g;s/://g;s/	 //g;s/;0//g;s/  //g;s/ //g;s/$/;/' > enums

match=0

while IFS=$';' read -r -a myPorts
do
  while IFS=$';' read -r -a myEnum
  do
    if [ -z "${myEnum[0]}" ]; then
      match=0
    else
      a=${#myEnum[@]} 
      if (($a==1))
      then
        if [ ${myPorts[4]} == ${myEnum[0]} ]
        then
          match=1
          sed -i -e "1d" enums
          sed -i -e "1d" enums
          break
        fi
      else
        match=0
        FLOAT=${myPorts[1]}
        i=${FLOAT/\.*}
        for (( c=0; c<a; c++ ))
        do 
          enum_var1+="        lv2:scalePoint [rdfs:label "${myEnum[c]}"; rdf:value "${i}"];\n"
          i=$[i+1]
        done
      fi
    fi
 # sed -i -e "1d" enums
  done < enums
  echo '      , [
        a lv2:InputPort ,
            lv2:ControlPort ;
        lv2:index' $j' ;
        lv2:symbol "'${myPorts[4]}'" ;
        lv2:name "'${myPorts[4]}'" ;'
  echo '        lv2:default '${myPorts[0]}' ;
        lv2:minimum '${myPorts[1]}' ;
        lv2:maximum '${myPorts[2]}' ;'
  if (($match==1))
  then
    echo '        lv2:portProperty lv2:integer;
        lv2:portProperty lv2:enumeration ; '
    echo -e "$enum_var1"
    enum_var1=""
    match=0
  fi
  echo -n '    ]'
  j=$[j+1]
  enum_var1=""
done < ports >> gx_$bname.ttl
echo "." >> gx_$bname.ttl
if [ ! -z "$effect_name" ]; then
  sed -i 's/EffectPlugin/'${effect_name}'/g'  gx_$bname.ttl
  echo "set plugin class to $effect_name"
fi
rm -rf ports
rm -rf enums


echo -e $BLUE"Okay, gx_${bname}.lv2 is done"$NONE
echo  -e $BLUE"Please add gx_${bname}.lv2 to the wscript in the LV2 directory
and run ./waf build in order to build the plug"$NONE