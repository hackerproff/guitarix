// generated automatically
// DO NOT MODIFY!
declare id "susta";
declare name "Sustainer";
declare category "Fuzz";
declare shortname "Sustainer";
declare description "Sustainer";

import("filter.lib");
import("trany.lib");

process = pre : iir((b0/a0,b1/a0,b2/a0,b3/a0,b4/a0,b5/a0),(a1/a0,a2/a0,a3/a0,a4/a0,a5/a0)) : clip with {
    LogPot(a, x) = if(a, (exp(a * x) - 1) / (exp(a) - 1), x);
    Inverted(b, x) = if(b, 1 - x, x);
    s = 0.993;
    fs = float(SR);
    pre = _;
    clip = tranystage(TB_7199P_68k,86.0,2700.0,3.571981) : tranystage(TB_7199P_68k,86.0,2700.0,3.571981) : tranystage(TB_7199P_68k,86.0,2700.0,3.571981) ;

    
        Volume = vslider("Volume[name:Volume]", 0.5, 0, 1, 0.01) : Inverted(0) : LogPot(0) : smooth(s);
    
        Sustain = vslider("Sustain[name:Sustain]", 0.5, 0, 1, 0.01) : Inverted(0) : LogPot(0) : smooth(s);
    
    b0 = Sustain*pow(fs,3)*(fs*(4.07249439024394e-27*fs - 1.34118849842818e-20) + 1.23525177556824e-15) + Volume*(Sustain*pow(fs,3)*(fs*(-3.9514408494262e-27*fs + 1.26300907176988e-20) + 2.68904213585766e-17) + pow(fs,3)*(fs*(-3.9514408494262e-29*fs + 1.26300907176988e-22) + 2.68904213585766e-19)) + pow(fs,3)*(fs*(4.07249439024394e-29*fs - 1.34118849842818e-22) + 1.23525177556824e-17);

    b1 = Sustain*pow(fs,3)*(fs*(-2.03624719512197e-26*fs + 4.02356549528453e-20) - 1.23525177556824e-15) + Volume*(Sustain*pow(fs,3)*(fs*(1.9757204247131e-26*fs - 3.78902721530964e-20) - 2.68904213585766e-17) + pow(fs,3)*(fs*(1.9757204247131e-28*fs - 3.78902721530964e-22) - 2.68904213585766e-19)) + pow(fs,3)*(fs*(-2.03624719512197e-28*fs + 4.02356549528453e-22) - 1.23525177556824e-17);

    b2 = Sustain*pow(fs,3)*(fs*(4.07249439024394e-26*fs - 2.68237699685635e-20) - 2.47050355113649e-15) + Volume*(Sustain*pow(fs,3)*(fs*(-3.9514408494262e-26*fs + 2.52601814353976e-20) - 5.37808427171532e-17) + pow(fs,3)*(fs*(-3.9514408494262e-28*fs + 2.52601814353976e-22) - 5.37808427171532e-19)) + pow(fs,3)*(fs*(4.07249439024394e-28*fs - 2.68237699685635e-22) - 2.47050355113649e-17);

    b3 = Sustain*pow(fs,3)*(fs*(-4.07249439024394e-26*fs - 2.68237699685635e-20) + 2.47050355113649e-15) + Volume*(Sustain*pow(fs,3)*(fs*(3.9514408494262e-26*fs + 2.52601814353976e-20) + 5.37808427171532e-17) + pow(fs,3)*(fs*(3.9514408494262e-28*fs + 2.52601814353976e-22) + 5.37808427171532e-19)) + pow(fs,3)*(fs*(-4.07249439024394e-28*fs - 2.68237699685635e-22) + 2.47050355113649e-17);

    b4 = Sustain*pow(fs,3)*(fs*(2.03624719512197e-26*fs + 4.02356549528453e-20) + 1.23525177556824e-15) + Volume*(Sustain*pow(fs,3)*(fs*(-1.9757204247131e-26*fs - 3.78902721530964e-20) + 2.68904213585766e-17) + pow(fs,3)*(fs*(-1.9757204247131e-28*fs - 3.78902721530964e-22) + 2.68904213585766e-19)) + pow(fs,3)*(fs*(2.03624719512197e-28*fs + 4.02356549528453e-22) + 1.23525177556824e-17);

    b5 = Sustain*pow(fs,3)*(fs*(-4.07249439024394e-27*fs - 1.34118849842818e-20) - 1.23525177556824e-15) + Volume*(Sustain*pow(fs,3)*(fs*(3.9514408494262e-27*fs + 1.26300907176988e-20) - 2.68904213585766e-17) + pow(fs,3)*(fs*(3.9514408494262e-29*fs + 1.26300907176988e-22) - 2.68904213585766e-19)) + pow(fs,3)*(fs*(-4.07249439024394e-29*fs - 1.34118849842818e-22) - 1.23525177556824e-17);

    a0 = Sustain*(Sustain*pow(fs,2)*(fs*(fs*(-9.91377586985301e-24*fs - 9.36483991458906e-20) - 1.70486053448624e-16) - 2.12307123308889e-15) + fs*(fs*(fs*(fs*(9.84499037599778e-24*fs + 9.42766173980015e-20) + 1.78421312766784e-16) + 3.39775512445924e-15) + 1.56108178903595e-14)) + Volume*(Sustain*(Sustain*pow(fs,2)*(fs*(fs*(5.11091507074998e-24*fs + 6.98874158230498e-20) + 1.4095256819997e-16) + 1.75646845862514e-15) + fs*(fs*(fs*(fs*(-5.07545362580621e-24*fs - 7.00613593632107e-20) - 1.47460849525455e-16) - 2.81034919192636e-15) - 1.29152092545966e-14)) + fs*(fs*(fs*(fs*(-1.03973026841637e-24*fs - 5.71785438210912e-20) - 1.41224926366503e-16) - 3.77185698680303e-15) - 3.30317585349598e-14) - 9.49647739308574e-14) + fs*(fs*(fs*(fs*(1.58888527196851e-24*fs + 6.14378170525581e-20) + 1.4867852143994e-16) + 4.14135154627774e-15) + 3.80287926742832e-14) + 1.14785425664408e-13;

    a1 = Sustain*(Sustain*pow(fs,2)*(fs*(fs*(4.95688793492651e-23*fs + 2.80945197437672e-19) + 1.70486053448624e-16) - 2.12307123308889e-15) + fs*(fs*(fs*(fs*(-4.92249518799889e-23*fs - 2.82829852194005e-19) - 1.78421312766784e-16) + 3.39775512445924e-15) + 4.68324536710785e-14)) + Volume*(Sustain*(Sustain*pow(fs,2)*(fs*(fs*(-2.55545753537499e-23*fs - 2.09662247469149e-19) - 1.4095256819997e-16) + 1.75646845862514e-15) + fs*(fs*(fs*(fs*(2.53772681290311e-23*fs + 2.10184078089632e-19) + 1.47460849525455e-16) - 2.81034919192636e-15) - 3.87456277637898e-14)) + fs*(fs*(fs*(fs*(5.19865134208184e-24*fs + 1.71535631463274e-19) + 1.41224926366503e-16) - 3.77185698680303e-15) - 9.90952756048795e-14) - 4.74823869654287e-13) + fs*(fs*(fs*(fs*(-7.94442635984257e-24*fs - 1.84313451157674e-19) - 1.4867852143994e-16) + 4.14135154627774e-15) + 1.1408637802285e-13) + 5.7392712832204e-13;

    a2 = Sustain*(Sustain*pow(fs,2)*(fs*(fs*(-9.91377586985301e-23*fs - 1.87296798291781e-19) + 3.40972106897249e-16) + 4.24614246617778e-15) + fs*(fs*(fs*(fs*(9.84499037599778e-23*fs + 1.88553234796003e-19) - 3.56842625533568e-16) - 6.79551024891847e-15) + 3.1221635780719e-14)) + Volume*(Sustain*(Sustain*pow(fs,2)*(fs*(fs*(5.11091507074998e-23*fs + 1.397748316461e-19) - 2.81905136399941e-16) - 3.51293691725028e-15) + fs*(fs*(fs*(fs*(-5.07545362580621e-23*fs - 1.40122718726421e-19) + 2.94921699050911e-16) + 5.62069838385272e-15) - 2.58304185091932e-14)) + fs*(fs*(fs*(fs*(-1.03973026841637e-23*fs - 1.14357087642182e-19) + 2.82449852733007e-16) + 7.54371397360606e-15) - 6.60635170699196e-14) - 9.49647739308574e-13) + fs*(fs*(fs*(fs*(1.58888527196851e-23*fs + 1.22875634105116e-19) - 2.97357042879881e-16) - 8.28270309255548e-15) + 7.60575853485664e-14) + 1.14785425664408e-12;

    a3 = Sustain*(Sustain*pow(fs,2)*(fs*(fs*(9.91377586985301e-23*fs - 1.87296798291781e-19) - 3.40972106897249e-16) + 4.24614246617778e-15) + fs*(fs*(fs*(fs*(-9.84499037599778e-23*fs + 1.88553234796003e-19) + 3.56842625533568e-16) - 6.79551024891847e-15) - 3.1221635780719e-14)) + Volume*(Sustain*(Sustain*pow(fs,2)*(fs*(fs*(-5.11091507074998e-23*fs + 1.397748316461e-19) + 2.81905136399941e-16) - 3.51293691725028e-15) + fs*(fs*(fs*(fs*(5.07545362580621e-23*fs - 1.40122718726421e-19) - 2.94921699050911e-16) + 5.62069838385272e-15) + 2.58304185091932e-14)) + fs*(fs*(fs*(fs*(1.03973026841637e-23*fs - 1.14357087642182e-19) - 2.82449852733007e-16) + 7.54371397360606e-15) + 6.60635170699196e-14) - 9.49647739308574e-13) + fs*(fs*(fs*(fs*(-1.58888527196851e-23*fs + 1.22875634105116e-19) + 2.97357042879881e-16) - 8.28270309255548e-15) - 7.60575853485664e-14) + 1.14785425664408e-12;

    a4 = Sustain*(Sustain*pow(fs,2)*(fs*(fs*(-4.95688793492651e-23*fs + 2.80945197437672e-19) - 1.70486053448624e-16) - 2.12307123308889e-15) + fs*(fs*(fs*(fs*(4.92249518799889e-23*fs - 2.82829852194005e-19) + 1.78421312766784e-16) + 3.39775512445924e-15) - 4.68324536710785e-14)) + Volume*(Sustain*(Sustain*pow(fs,2)*(fs*(fs*(2.55545753537499e-23*fs - 2.09662247469149e-19) + 1.4095256819997e-16) + 1.75646845862514e-15) + fs*(fs*(fs*(fs*(-2.53772681290311e-23*fs + 2.10184078089632e-19) - 1.47460849525455e-16) - 2.81034919192636e-15) + 3.87456277637898e-14)) + fs*(fs*(fs*(fs*(-5.19865134208184e-24*fs + 1.71535631463274e-19) - 1.41224926366503e-16) - 3.77185698680303e-15) + 9.90952756048795e-14) - 4.74823869654287e-13) + fs*(fs*(fs*(fs*(7.94442635984257e-24*fs - 1.84313451157674e-19) + 1.4867852143994e-16) + 4.14135154627774e-15) - 1.1408637802285e-13) + 5.7392712832204e-13;

    a5 = Sustain*(Sustain*pow(fs,2)*(fs*(fs*(9.91377586985301e-24*fs - 9.36483991458906e-20) + 1.70486053448624e-16) - 2.12307123308889e-15) + fs*(fs*(fs*(fs*(-9.84499037599778e-24*fs + 9.42766173980015e-20) - 1.78421312766784e-16) + 3.39775512445924e-15) - 1.56108178903595e-14)) + Volume*(Sustain*(Sustain*pow(fs,2)*(fs*(fs*(-5.11091507074998e-24*fs + 6.98874158230498e-20) - 1.4095256819997e-16) + 1.75646845862514e-15) + fs*(fs*(fs*(fs*(5.07545362580621e-24*fs - 7.00613593632107e-20) + 1.47460849525455e-16) - 2.81034919192636e-15) + 1.29152092545966e-14)) + fs*(fs*(fs*(fs*(1.03973026841637e-24*fs - 5.71785438210912e-20) + 1.41224926366503e-16) - 3.77185698680303e-15) + 3.30317585349598e-14) - 9.49647739308574e-14) + fs*(fs*(fs*(fs*(-1.58888527196851e-24*fs + 6.14378170525581e-20) - 1.4867852143994e-16) + 4.14135154627774e-15) - 3.80287926742832e-14) + 1.14785425664408e-13;
};