// generated from file '../src/plugins/rolandwah.dsp' by dsp2cc:
// Code generated with Faust (https://faust.grame.fr)

#include "gx_faust_support.h"
#include "gx_plugin.h"
#include "trany.h"

namespace pluginlib {
namespace rolandwah {

class Dsp: public PluginDef {
private:
	int fSampleRate;
	double fConst0;
	double fConst1;
	double fConst2;
	double fConst3;
	int iVec0[2];
	double fConst4;
	double fConst5;
	double fConst6;
	FAUSTFLOAT fVslider0;
	double fConst7;
	double fConst8;
	double fConst9;
	double fConst10;
	FAUSTFLOAT fVslider1;
	double fRec10[2];
	double fConst11;
	double fConst12;
	double fConst13;
	double fConst14;
	double fConst15;
	double fConst16;
	double fConst17;
	double fConst18;
	double fConst19;
	double fConst20;
	double fConst21;
	double fConst22;
	double fConst23;
	double fConst24;
	double fConst25;
	double fConst26;
	double fConst27;
	double fConst28;
	double fConst29;
	double fConst30;
	double fConst31;
	double fConst32;
	double fRec9[9];
	double fConst33;
	double fConst34;
	double fConst35;
	double fConst36;
	double fConst37;
	double fConst38;
	double fConst39;
	double fConst40;
	double fConst41;
	double fConst42;
	double fConst43;
	double fConst44;
	double fConst45;
	double fConst46;
	double fConst47;
	double fConst48;
	double fConst49;
	double fConst50;
	double fConst51;
	double fConst52;
	double fConst53;
	double fConst54;
	double fConst55;
	double fConst56;
	double fConst57;
	double fConst58;
	double fConst59;
	double fConst60;
	double fConst61;
	double fConst62;
	FAUSTFLOAT fCheckbox0;
	double fConst63;
	FAUSTFLOAT fVslider2;
	double fRec13[2];
	double fRec12[2];
	double fRec11[2];
	double fConst64;
	double fConst65;
	double fConst66;
	double fConst67;
	double fRec15[2];
	double fRec14[2];
	FAUSTFLOAT fVslider3;
	double fRec16[2];
	double fConst68;
	double fConst69;
	double fConst70;
	double fConst71;
	double fConst72;
	double fConst73;
	double fConst74;
	double fConst75;
	double fConst76;
	double fConst77;
	double fConst78;
	double fConst79;
	double fConst80;
	double fConst81;
	double fConst82;
	double fConst83;
	double fConst84;
	double fConst85;
	double fConst86;
	double fConst87;
	double fConst88;
	double fConst89;
	double fConst90;
	double fConst91;
	double fConst92;
	double fConst93;
	double fConst94;
	double fConst95;
	double fRec8[7];
	double fConst96;
	double fConst97;
	double fConst98;
	double fConst99;
	double fConst100;
	double fConst101;
	double fConst102;
	double fConst103;
	double fConst104;
	double fConst105;
	double fConst106;
	double fConst107;
	double fConst108;
	double fConst109;
	double fConst110;
	double fConst111;
	double fConst112;
	double fConst113;
	double fConst114;
	double fConst115;
	double fConst116;
	double fConst117;
	double fConst118;
	double fConst119;
	double fConst120;
	double fConst121;
	double fConst122;
	double fConst123;
	double fConst124;
	double fConst125;
	double fVec1[2];
	double fRec7[2];
	double fRec6[3];
	double fRec5[2];
	double fRec4[2];
	double fRec3[2];
	double fRec2[3];
	double fRec1[2];
	double fRec0[2];

	void clear_state_f();
	int load_ui_f(const UiBuilder& b, int form);
	static const char *glade_def;
	void init(unsigned int sample_rate);
	void compute(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0);
	int register_par(const ParamReg& reg);

	static void clear_state_f_static(PluginDef*);
	static int load_ui_f_static(const UiBuilder& b, int form);
	static void init_static(unsigned int sample_rate, PluginDef*);
	static void compute_static(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0, PluginDef*);
	static int register_params_static(const ParamReg& reg);
	static void del_instance(PluginDef *p);
public:
	Dsp();
	~Dsp();
};



Dsp::Dsp()
	: PluginDef() {
	version = PLUGINDEF_VERSION;
	flags = 0;
	id = "rolandwah";
	name = N_("Roland Double Beat");
	groups = 0;
	description = N_("Roland Double Beat"); // description (tooltip)
	category = N_("Guitar Effects");       // category
	shortname = N_("Double Beat");     // shortname
	mono_audio = compute_static;
	stereo_audio = 0;
	set_samplerate = init_static;
	activate_plugin = 0;
	register_params = register_params_static;
	load_ui = load_ui_f_static;
	clear_state = clear_state_f_static;
	delete_instance = del_instance;
}

Dsp::~Dsp() {
}

inline void Dsp::clear_state_f()
{
	for (int l0 = 0; (l0 < 2); l0 = (l0 + 1)) iVec0[l0] = 0;
	for (int l1 = 0; (l1 < 2); l1 = (l1 + 1)) fRec10[l1] = 0.0;
	for (int l2 = 0; (l2 < 9); l2 = (l2 + 1)) fRec9[l2] = 0.0;
	for (int l3 = 0; (l3 < 2); l3 = (l3 + 1)) fRec13[l3] = 0.0;
	for (int l4 = 0; (l4 < 2); l4 = (l4 + 1)) fRec12[l4] = 0.0;
	for (int l5 = 0; (l5 < 2); l5 = (l5 + 1)) fRec11[l5] = 0.0;
	for (int l6 = 0; (l6 < 2); l6 = (l6 + 1)) fRec15[l6] = 0.0;
	for (int l7 = 0; (l7 < 2); l7 = (l7 + 1)) fRec14[l7] = 0.0;
	for (int l8 = 0; (l8 < 2); l8 = (l8 + 1)) fRec16[l8] = 0.0;
	for (int l9 = 0; (l9 < 7); l9 = (l9 + 1)) fRec8[l9] = 0.0;
	for (int l10 = 0; (l10 < 2); l10 = (l10 + 1)) fVec1[l10] = 0.0;
	for (int l11 = 0; (l11 < 2); l11 = (l11 + 1)) fRec7[l11] = 0.0;
	for (int l12 = 0; (l12 < 3); l12 = (l12 + 1)) fRec6[l12] = 0.0;
	for (int l13 = 0; (l13 < 2); l13 = (l13 + 1)) fRec5[l13] = 0.0;
	for (int l14 = 0; (l14 < 2); l14 = (l14 + 1)) fRec4[l14] = 0.0;
	for (int l15 = 0; (l15 < 2); l15 = (l15 + 1)) fRec3[l15] = 0.0;
	for (int l16 = 0; (l16 < 3); l16 = (l16 + 1)) fRec2[l16] = 0.0;
	for (int l17 = 0; (l17 < 2); l17 = (l17 + 1)) fRec1[l17] = 0.0;
	for (int l18 = 0; (l18 < 2); l18 = (l18 + 1)) fRec0[l18] = 0.0;
}

void Dsp::clear_state_f_static(PluginDef *p)
{
	static_cast<Dsp*>(p)->clear_state_f();
}

inline void Dsp::init(unsigned int sample_rate)
{
	fSampleRate = sample_rate;
	fConst0 = std::min<double>(192000.0, std::max<double>(1.0, double(fSampleRate)));
	fConst1 = (3.1415926535897931 / fConst0);
	fConst2 = (1.0 / (fConst1 + 1.0));
	fConst3 = (1.0 - fConst1);
	fConst4 = mydsp_faustpower2_f(fConst0);
	fConst5 = (0.93028479253239138 * fConst4);
	fConst6 = mydsp_faustpower3_f(fConst0);
	fConst7 = (8.6453768554099601e-54 * fConst0);
	fConst8 = ((fConst0 * ((fConst0 * ((fConst4 * ((fConst0 * ((fConst0 * (fConst7 + -1.01507284191684e-32)) + -9.1925129482745801e-29)) + -1.14668174326105e-25)) + 1.7131119450777e-20)) + 2.0004598723027898e-18)) + 5.17754054952568e-17);
	fConst9 = (7.7135875124018505e-54 * fConst0);
	fConst10 = ((fConst0 * ((fConst0 * ((fConst4 * ((fConst0 * ((fConst0 * (3.4617148379147101e-33 - fConst9)) + 7.3851826335984701e-29)) + 1.0562321161133599e-25)) + -1.35506989727438e-20)) + -6.4187190694828203e-19)) + -3.6184466339169999e-18);
	fConst11 = (3.02588189939348e-53 * fConst0);
	fConst12 = ((fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * (2.3685032978059599e-32 - fConst11)) + 9.1925129482745801e-29)) + -1.14668174326105e-25)) + -1.52318075159202e-22)) + -1.7131119450777e-20)) + 2.0004598723027898e-18)) + 1.20809279488933e-16);
	fConst13 = (2.6997556293406501e-53 * fConst0);
	fConst14 = ((fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * (fConst13 + -8.0773346218009802e-33)) + -7.3851826335984701e-29)) + 1.0562321161133599e-25)) + 1.3795366937074801e-22)) + 1.35506989727438e-20)) + -6.4187190694828203e-19)) + -8.4430421458063305e-18);
	fConst15 = (6.0517637987869703e-53 * fConst0);
	fConst16 = ((fConst0 * ((fConst0 * ((fConst4 * ((fConst0 * ((fConst0 * (fConst15 + -2.3685032978059599e-32)) + 9.1925129482745801e-29)) + 3.44004522978315e-25)) + -5.13933583523309e-20)) + -2.0004598723027898e-18)) + 1.20809279488933e-16);
	fConst17 = (5.3995112586813002e-53 * fConst0);
	fConst18 = ((fConst0 * ((fConst0 * ((fConst4 * ((fConst0 * ((fConst0 * (8.0773346218009802e-33 - fConst17)) + -7.3851826335984701e-29)) + -3.1686963483400899e-25)) + 4.0652096918231401e-20)) + 6.4187190694828203e-19)) + -8.4430421458063305e-18);
	fConst19 = ((fConst4 * ((fConst4 * (-2.29812823706864e-28 - (7.5647047484837103e-53 * fConst4))) + 2.2847711273880299e-22)) + -5.0011496807569701e-18);
	fConst20 = ((fConst4 * ((fConst4 * ((6.7493890733516199e-53 * fConst4) + 1.8462956583996199e-28)) + -2.0693050405612199e-22)) + 1.6046797673707001e-18);
	fConst21 = ((fConst0 * ((fConst0 * ((fConst4 * ((fConst0 * ((fConst0 * (fConst15 + 2.3685032978059599e-32)) + 9.1925129482745801e-29)) + -3.44004522978315e-25)) + 5.13933583523309e-20)) + -2.0004598723027898e-18)) + -1.20809279488933e-16);
	fConst22 = ((fConst0 * ((fConst0 * ((fConst4 * ((fConst0 * ((fConst0 * (-8.0773346218009802e-33 - fConst17)) + -7.3851826335984701e-29)) + 3.1686963483400899e-25)) + -4.0652096918231401e-20)) + 6.4187190694828203e-19)) + 8.4430421458063305e-18);
	fConst23 = ((fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * (-2.3685032978059599e-32 - fConst11)) + 9.1925129482745801e-29)) + 1.14668174326105e-25)) + -1.52318075159202e-22)) + 1.7131119450777e-20)) + 2.0004598723027898e-18)) + -1.20809279488933e-16);
	fConst24 = ((fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * (fConst13 + 8.0773346218009802e-33)) + -7.3851826335984701e-29)) + -1.0562321161133599e-25)) + 1.3795366937074801e-22)) + -1.35506989727438e-20)) + -6.4187190694828203e-19)) + 8.4430421458063305e-18);
	fConst25 = ((fConst0 * ((fConst0 * ((fConst4 * ((fConst0 * ((fConst0 * (fConst7 + 1.01507284191684e-32)) + -9.1925129482745801e-29)) + 1.14668174326105e-25)) + -1.7131119450777e-20)) + 2.0004598723027898e-18)) + -5.17754054952568e-17);
	fConst26 = ((fConst0 * ((fConst0 * ((fConst4 * ((fConst0 * ((fConst0 * (-3.4617148379147101e-33 - fConst9)) + 7.3851826335984701e-29)) + -1.0562321161133599e-25)) + 1.35506989727438e-20)) + -6.4187190694828203e-19)) + 3.6184466339169999e-18);
	fConst27 = (1.0806721069262399e-54 * fConst0);
	fConst28 = ((fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * (-1.6917880698614e-33 - fConst27)) + 2.29812823706864e-29)) + -5.7334087163052396e-26)) + 3.8079518789800499e-23)) + -8.5655597253884803e-21)) + 5.0011496807569601e-19)) + -8.6292342492094698e-18);
	fConst29 = (9.6419843905023102e-55 * fConst0);
	fConst30 = ((fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * (fConst29 + 5.7695247298578402e-34)) + -1.8462956583996201e-29)) + 5.2811605805668203e-26)) + -3.4488417342687002e-23)) + 6.7753494863719001e-21)) + -1.6046797673707e-19)) + 6.0307443898616604e-19);
	fConst31 = ((fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * (1.6917880698614e-33 - fConst27)) + 2.29812823706864e-29)) + 5.7334087163052396e-26)) + 3.8079518789800499e-23)) + 8.5655597253884803e-21)) + 5.0011496807569601e-19)) + 8.6292342492094698e-18);
	fConst32 = ((fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * (fConst29 + -5.7695247298578402e-34)) + -1.8462956583996201e-29)) + -5.2811605805668203e-26)) + -3.4488417342687002e-23)) + -6.7753494863719001e-21)) + -1.6046797673707e-19)) + -6.0307443898616604e-19);
	fConst33 = (2.6226779359819302e-32 * fConst0);
	fConst34 = ((fConst0 * ((fConst0 * ((fConst0 * (-2.30252524666021e-25 - fConst33)) + -1.21809214941527e-22)) + -4.4700687878866801e-21)) + -4.1404252109699403e-20);
	fConst35 = (8.60349117319693e-33 * fConst0);
	fConst36 = (fConst0 * ((fConst0 * ((fConst0 * (fConst35 + 7.4247065053322598e-26)) + 3.8082846258472101e-23)) + 8.2808504219398703e-22));
	fConst37 = (1.5736067615891601e-31 * fConst0);
	fConst38 = ((fConst4 * ((fConst0 * (fConst37 + 9.2101009866408307e-25)) + 2.4361842988305401e-22)) + -8.2808504219398697e-20);
	fConst39 = (5.1620947039181596e-32 * fConst0);
	fConst40 = (fConst4 * ((fConst0 * (-2.9698826021328998e-25 - fConst39)) + -7.6165692516944296e-23));
	fConst41 = (3.6717491103746999e-31 * fConst0);
	fConst42 = (fConst0 * (-9.2101009866408307e-25 - fConst41));
	fConst43 = ((fConst0 * ((fConst0 * (fConst42 + 2.4361842988305401e-22)) + 1.7880275151546699e-20)) + 8.2808504219398697e-20);
	fConst44 = (1.20448876424757e-31 * fConst0);
	fConst45 = (fConst0 * (fConst44 + 2.9698826021328998e-25));
	fConst46 = (fConst0 * ((fConst0 * (fConst45 + -7.6165692516944296e-23)) + -3.31234016877595e-21));
	fConst47 = (fConst0 * (fConst41 + -9.2101009866408307e-25));
	fConst48 = ((fConst4 * (fConst47 + -7.3085528964916198e-22)) + 2.4842551265819602e-19);
	fConst49 = (fConst0 * (2.9698826021328998e-25 - fConst44));
	fConst50 = (fConst4 * (fConst49 + 2.2849707755083301e-22));
	fConst51 = ((2.3025252466602099e-24 * fConst4) + -2.6820412727320099e-20);
	fConst52 = (4.9685102531639197e-21 - (7.4247065053322603e-25 * fConst4));
	fConst53 = ((fConst4 * (fConst42 + 7.3085528964916198e-22)) + -2.4842551265819602e-19);
	fConst54 = (fConst4 * (fConst45 + -2.2849707755083301e-22));
	fConst55 = ((fConst0 * ((fConst0 * (fConst47 + -2.4361842988305401e-22)) + 1.7880275151546699e-20)) + -8.2808504219398697e-20);
	fConst56 = (fConst0 * ((fConst0 * (fConst49 + 7.6165692516944296e-23)) + -3.31234016877595e-21));
	fConst57 = ((fConst4 * ((fConst0 * (9.2101009866408307e-25 - fConst37)) + -2.4361842988305401e-22)) + 8.2808504219398697e-20);
	fConst58 = (fConst4 * ((fConst0 * (fConst39 + -2.9698826021328998e-25)) + 7.6165692516944296e-23));
	fConst59 = ((fConst0 * ((fConst0 * ((fConst0 * (fConst33 + -2.30252524666021e-25)) + 1.21809214941527e-22)) + -4.4700687878866801e-21)) + 4.1404252109699403e-20);
	fConst60 = (fConst0 * ((fConst0 * ((fConst0 * (7.4247065053322598e-26 - fConst35)) + -3.8082846258472101e-23)) + 8.2808504219398703e-22));
	fConst61 = (3.0207049650607199e-29 * fConst0);
	fConst62 = ((fConst0 * ((fConst4 * ((fConst0 * (-4.2224699126538501e-26 - fConst61)) + -5.1028451720445405e-22)) + 7.5236423320258805e-18)) + 1.2367938041498899e-16);
	fConst63 = (0.10471975511965977 / fConst0);
	fConst64 = std::exp((0.0 - (100.0 / fConst0)));
	fConst65 = (1.0 - fConst64);
	fConst66 = std::exp((0.0 - (10.0 / fConst0)));
	fConst67 = (1.0 - fConst66);
	fConst68 = (1.0332413167573e-27 * fConst0);
	fConst69 = ((fConst0 * ((fConst4 * ((fConst0 * (-4.5813559411368004e-25 - fConst68)) + -1.9536713520122399e-22)) + 2.1593959722292799e-18)) + 2.1255337677114601e-17);
	fConst70 = (2.5790740534914202e-28 * fConst0);
	fConst71 = (fConst0 * ((fConst4 * ((fConst0 * (fConst70 + 1.2774942666629701e-25)) + 1.7800778559222001e-22)) + -7.0142614334478301e-19));
	fConst72 = (7.5517624126518095e-29 * fConst0);
	fConst73 = ((fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * (fConst72 + 5.27808739081731e-26)) + -2.5514225860222702e-22)) + -4.4594494030519004e-19)) + -3.7618211660129403e-18)) + 1.54599225518736e-16);
	fConst74 = (2.5831032918932499e-27 * fConst0);
	fConst75 = ((fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * (fConst74 + 5.7266949264210002e-25)) + -9.7683567600611997e-23)) + -1.5643246402074301e-19)) + -1.07969798611464e-18)) + 2.6569172096393299e-17);
	fConst76 = (6.4476851337285599e-28 * fConst0);
	fConst77 = (fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * (-1.59686783332872e-25 - fConst76)) + 8.9003892796110098e-23)) + 1.46112676135974e-19)) + 3.5071307167239199e-19));
	fConst78 = ((fConst4 * (1.02056903440891e-21 - (1.00690165502024e-28 * fConst4))) + -1.5047284664051801e-17);
	fConst79 = ((fConst4 * (3.9073427040244799e-22 - (3.4441377225243296e-27 * fConst4))) + -4.3187919444585699e-18);
	fConst80 = ((fConst4 * ((8.5969135116380804e-28 * fConst4) + -3.5601557118444002e-22)) + 1.4028522866895701e-18);
	fConst81 = ((fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * (fConst72 + -5.27808739081731e-26)) + -2.5514225860222702e-22)) + 4.4594494030519004e-19)) + -3.7618211660129403e-18)) + -1.54599225518736e-16);
	fConst82 = ((fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * (fConst74 + -5.7266949264210002e-25)) + -9.7683567600611997e-23)) + 1.5643246402074301e-19)) + -1.07969798611464e-18)) + -2.6569172096393299e-17);
	fConst83 = (fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * (1.59686783332872e-25 - fConst76)) + 8.9003892796110098e-23)) + -1.46112676135974e-19)) + 3.5071307167239199e-19));
	fConst84 = ((fConst0 * ((fConst4 * ((fConst0 * (4.2224699126538501e-26 - fConst61)) + -5.1028451720445405e-22)) + 7.5236423320258805e-18)) + -1.2367938041498899e-16);
	fConst85 = ((fConst0 * ((fConst4 * ((fConst0 * (4.5813559411368004e-25 - fConst68)) + -1.9536713520122399e-22)) + 2.1593959722292799e-18)) + -2.1255337677114601e-17);
	fConst86 = (fConst0 * ((fConst4 * ((fConst0 * (fConst70 + -1.2774942666629701e-25)) + 1.7800778559222001e-22)) + -7.0142614334478301e-19));
	fConst87 = (5.0345082751012003e-30 * fConst0);
	fConst88 = ((fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * (fConst87 + -1.0556174781634599e-26)) + 2.5514225860222702e-22)) + -1.4864831343506299e-19)) + 3.7618211660129403e-18)) + -3.0919845103747099e-17);
	fConst89 = (1.72206886126217e-28 * fConst0);
	fConst90 = ((fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * (fConst89 + -1.1453389852842001e-25)) + 9.7683567600611997e-23)) + -5.2144154673581001e-20)) + 1.07969798611464e-18)) + -5.3138344192786603e-18);
	fConst91 = (4.29845675581904e-29 * fConst0);
	fConst92 = (fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * (3.1937356666574297e-26 - fConst91)) + -8.9003892796110098e-23)) + 4.8704225378657897e-20)) + -3.5071307167239199e-19));
	fConst93 = ((fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * (fConst87 + 1.0556174781634599e-26)) + 2.5514225860222702e-22)) + 1.4864831343506299e-19)) + 3.7618211660129403e-18)) + 3.0919845103747099e-17);
	fConst94 = ((fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * (fConst89 + 1.1453389852842001e-25)) + 9.7683567600611997e-23)) + 5.2144154673581001e-20)) + 1.07969798611464e-18)) + 5.3138344192786603e-18);
	fConst95 = (fConst0 * ((fConst0 * ((fConst0 * ((fConst0 * (-3.1937356666574297e-26 - fConst91)) + -8.9003892796110098e-23)) + -4.8704225378657897e-20)) + -3.5071307167239199e-19));
	fConst96 = (9.6574497270343303e-31 * fConst0);
	fConst97 = ((fConst0 * ((fConst0 * ((fConst0 * (-3.0882218864428199e-26 - fConst96)) + -4.8262471952169603e-23)) + -2.8826460531036599e-21)) + -1.4900785581079499e-20);
	fConst98 = (7.1663335121242097e-31 * fConst0);
	fConst99 = ((fConst0 * ((fConst0 * ((fConst0 * (-1.2201212507437399e-26 - fConst98)) + -1.8312671176616301e-23)) + -1.2159222901252701e-21)) + -1.2608516331659e-20);
	fConst100 = (7.1808255629623197e-31 * fConst0);
	fConst101 = (fConst0 * ((fConst0 * ((fConst0 * (fConst100 + 1.2196809675606999e-26)) + 1.8163521797294801e-23)) + 9.8345184835124996e-22));
	fConst102 = (5.7944698362206003e-30 * fConst0);
	fConst103 = ((fConst4 * ((fConst0 * (fConst102 + 1.23528875457713e-25)) + 9.6524943904339299e-23)) + -2.9801571162159101e-20);
	fConst104 = (4.2998001072745197e-30 * fConst0);
	fConst105 = ((fConst4 * ((fConst0 * (fConst104 + 4.8804850029749597e-26)) + 3.6625342353232602e-23)) + -2.5217032663318e-20);
	fConst106 = (4.3084953377773899e-30 * fConst0);
	fConst107 = (fConst4 * ((fConst0 * (-4.8787238702428101e-26 - fConst106)) + -3.6327043594589501e-23));
	fConst108 = (1.44861745905515e-29 * fConst0);
	fConst109 = ((fConst0 * ((fConst0 * ((fConst0 * (-1.54411094322141e-25 - fConst108)) + 4.8262471952169603e-23)) + 8.6479381593109902e-21)) + 1.4900785581079499e-20);
	fConst110 = (1.07495002681863e-29 * fConst0);
	fConst111 = ((fConst0 * ((fConst0 * ((fConst0 * (-6.1006062537187001e-26 - fConst110)) + 1.8312671176616301e-23)) + 3.6477668703758198e-21)) + 1.2608516331659e-20);
	fConst112 = (1.07712383444435e-29 * fConst0);
	fConst113 = (fConst0 * ((fConst0 * ((fConst0 * (fConst112 + 6.0984048378035096e-26)) + -1.8163521797294801e-23)) + -2.9503555450537499e-21));
	fConst114 = ((fConst4 * ((1.93148994540687e-29 * fConst4) + -1.93049887808679e-22)) + 5.9603142324318202e-20);
	fConst115 = ((fConst4 * ((1.4332667024248399e-29 * fConst4) + -7.3250684706465204e-23)) + 5.0434065326635999e-20);
	fConst116 = (fConst4 * (7.2654087189179003e-23 - (1.43616511259246e-29 * fConst4)));
	fConst117 = ((fConst0 * ((fConst0 * ((fConst0 * (1.54411094322141e-25 - fConst108)) + 4.8262471952169603e-23)) + -8.6479381593109902e-21)) + 1.4900785581079499e-20);
	fConst118 = ((fConst0 * ((fConst0 * ((fConst0 * (6.1006062537187001e-26 - fConst110)) + 1.8312671176616301e-23)) + -3.6477668703758198e-21)) + 1.2608516331659e-20);
	fConst119 = (fConst0 * ((fConst0 * ((fConst0 * (fConst112 + -6.0984048378035096e-26)) + -1.8163521797294801e-23)) + 2.9503555450537499e-21));
	fConst120 = ((fConst4 * ((fConst0 * (fConst102 + -1.23528875457713e-25)) + 9.6524943904339299e-23)) + -2.9801571162159101e-20);
	fConst121 = ((fConst4 * ((fConst0 * (fConst104 + -4.8804850029749597e-26)) + 3.6625342353232602e-23)) + -2.5217032663318e-20);
	fConst122 = (fConst4 * ((fConst0 * (4.8787238702428101e-26 - fConst106)) + -3.6327043594589501e-23));
	fConst123 = ((fConst0 * ((fConst0 * ((fConst0 * (3.0882218864428199e-26 - fConst96)) + -4.8262471952169603e-23)) + 2.8826460531036599e-21)) + -1.4900785581079499e-20);
	fConst124 = ((fConst0 * ((fConst0 * ((fConst0 * (1.2201212507437399e-26 - fConst98)) + -1.8312671176616301e-23)) + 1.2159222901252701e-21)) + -1.2608516331659e-20);
	fConst125 = (fConst0 * ((fConst0 * ((fConst0 * (fConst100 + -1.2196809675606999e-26)) + 1.8163521797294801e-23)) + -9.8345184835124996e-22));
	clear_state_f();
}

void Dsp::init_static(unsigned int sample_rate, PluginDef *p)
{
	static_cast<Dsp*>(p)->init(sample_rate);
}

void always_inline Dsp::compute(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0)
{
	double fSlow0 = (0.01 * double(fVslider0));
	double fSlow1 = (0.0070000000000000062 * double(fVslider1));
	int iSlow2 = int(double(fCheckbox0));
	int iSlow3 = (iSlow2 == 0);
	int iSlow4 = (iSlow2 == 1);
	double fSlow5 = (fConst63 * double(fVslider2));
	double fSlow6 = (0.004073836948085289 * (std::exp((1.0 - double(fVslider3))) + -1.0));
	double fSlow7 = (1.0 - fSlow0);
	for (int i = 0; (i < count); i = (i + 1)) {
		iVec0[0] = 1;
		double fTemp0 = double(input0[i]);
		fRec10[0] = (fSlow1 + (0.99299999999999999 * fRec10[1]));
		double fTemp1 = ((fConst0 * (fConst31 + (fConst32 * fRec10[0]))) + 3.0153721949308302e-17);
		fRec9[0] = ((fSlow0 * fTemp0) - (((((((((fRec9[1] * ((fConst0 * (fConst8 + (fConst10 * fRec10[0]))) + 2.4122977559446701e-16)) + (fRec9[2] * ((fConst0 * (fConst12 + (fConst14 * fRec10[0]))) + 8.4430421458063303e-16))) + (fRec9[3] * ((fConst0 * (fConst16 + (fConst18 * fRec10[0]))) + 1.68860842916127e-15))) + (fRec9[4] * ((fConst4 * (fConst19 + (fConst20 * fRec10[0]))) + 2.1107605364515801e-15))) + (fRec9[5] * ((fConst0 * (fConst21 + (fConst22 * fRec10[0]))) + 1.68860842916127e-15))) + (fRec9[6] * ((fConst0 * (fConst23 + (fConst24 * fRec10[0]))) + 8.4430421458063303e-16))) + (fRec9[7] * ((fConst0 * (fConst25 + (fConst26 * fRec10[0]))) + 2.4122977559446701e-16))) + (fRec9[8] * ((fConst0 * (fConst28 + (fConst30 * fRec10[0]))) + 3.0153721949308302e-17))) / fTemp1));
		double fTemp2 = (fConst6 * ((((((((((fRec9[0] * (fConst34 + (fConst36 * fRec10[0]))) + (fRec9[1] * (fConst38 + (fConst40 * fRec10[0])))) + (fRec9[2] * (fConst43 + (fConst46 * fRec10[0])))) + (fRec9[3] * (fConst48 + (fConst50 * fRec10[0])))) + (fConst0 * (fRec9[4] * (fConst51 + (fConst52 * fRec10[0]))))) + (fRec9[5] * (fConst53 + (fConst54 * fRec10[0])))) + (fRec9[6] * (fConst55 + (fConst56 * fRec10[0])))) + (fRec9[7] * (fConst57 + (fConst58 * fRec10[0])))) + (fRec9[8] * (fConst59 + (fConst60 * fRec10[0])))) / fTemp1));
		fRec13[0] = (fRec13[1] + (fSlow5 * (0.0 - fRec11[1])));
		fRec12[0] = ((fSlow5 * fRec13[0]) + (double((1 - iVec0[1])) + fRec12[1]));
		fRec11[0] = fRec12[0];
		double fTemp3 = std::fabs(fTemp2);
		fRec15[0] = std::max<double>(fTemp3, ((fConst66 * fRec15[1]) + (fConst67 * fTemp3)));
		fRec14[0] = ((fConst64 * fRec14[1]) + (fConst65 * fRec15[0]));
		fRec16[0] = (fSlow6 + (0.99299999999999999 * fRec16[1]));
		double fTemp4 = (iSlow3 ? fRec16[0] : (iSlow4 ? std::max<double>(0.089999999999999997, std::min<double>(0.90000000000000002, fRec14[0])) : (1.0 - std::max<double>(0.089999999999999997, std::min<double>(0.90000000000000002, (0.5 * (fRec11[0] + 1.0)))))));
		double fTemp5 = ((fConst0 * (fConst93 + (fTemp4 * (fConst94 + (fConst95 * fTemp4))))) + 8.0512642716343297e-17);
		fRec8[0] = (fTemp2 - (((((((fRec8[1] * ((fConst0 * (fConst62 + (fTemp4 * (fConst69 + (fConst71 * fTemp4))))) + 4.8307585629805998e-16)) + (fRec8[2] * ((fConst0 * (fConst73 + (fTemp4 * (fConst75 + (fConst77 * fTemp4))))) + 1.2076896407451501e-15))) + (fRec8[3] * ((fConst4 * (fConst78 + (fTemp4 * (fConst79 + (fConst80 * fTemp4))))) + 1.6102528543268701e-15))) + (fRec8[4] * ((fConst0 * (fConst81 + (fTemp4 * (fConst82 + (fConst83 * fTemp4))))) + 1.2076896407451501e-15))) + (fRec8[5] * ((fConst0 * (fConst84 + (fTemp4 * (fConst85 + (fConst86 * fTemp4))))) + 4.8307585629805998e-16))) + (fRec8[6] * ((fConst0 * (fConst88 + (fTemp4 * (fConst90 + (fConst92 * fTemp4))))) + 8.0512642716343297e-17))) / fTemp5));
		double fTemp6 = ((((((((fRec8[0] * (fConst97 + (fTemp4 * (fConst99 + (fConst101 * fTemp4))))) + (fRec8[1] * (fConst103 + (fTemp4 * (fConst105 + (fConst107 * fTemp4)))))) + (fRec8[2] * (fConst109 + (fTemp4 * (fConst111 + (fConst113 * fTemp4)))))) + (fRec8[3] * (fConst114 + (fTemp4 * (fConst115 + (fConst116 * fTemp4)))))) + (fRec8[4] * (fConst117 + (fTemp4 * (fConst118 + (fConst119 * fTemp4)))))) + (fRec8[5] * (fConst120 + (fTemp4 * (fConst121 + (fConst122 * fTemp4)))))) + (fRec8[6] * (fConst123 + (fTemp4 * (fConst124 + (fConst125 * fTemp4)))))) / fTemp5);
		fVec1[0] = fTemp6;
		fRec7[0] = ((fConst5 * (fTemp6 + fVec1[1])) - (0.86056958506478287 * fRec7[1]));
		fRec6[0] = (fRec7[0] - ((1.8405051250752198 * fRec6[1]) + (0.86129424393186271 * fRec6[2])));
		double fTemp7 = ((1.8508996845035413 * fRec6[1]) + (0.92544984225177063 * (fRec6[0] + fRec6[2])));
		double fTemp8 = double(Ftrany(int(TRANY_TABLE_KT88_68k), double(((fTemp7 + (2700.0 * (fTemp7 / (double(Rtrany(int(TRANY_TABLE_KT88_68k), double(fRec5[1]))) + 100000.0)))) + -5.5628950000000001))));
		fRec5[0] = ((fTemp8 + (0.0020603314814814817 * (double(Rtrany(int(TRANY_TABLE_KT88_68k), double(fTemp8))) + 100000.0))) + -250.0);
		fRec4[0] = (fConst2 * ((fConst3 * fRec4[1]) + (0.025000000000000001 * (fRec5[0] - fRec5[1]))));
		fRec3[0] = ((0.93028479253239138 * (fRec4[0] + fRec4[1])) - (0.86056958506478287 * fRec3[1]));
		fRec2[0] = (fRec3[0] - ((1.8405051250752198 * fRec2[1]) + (0.86129424393186271 * fRec2[2])));
		double fTemp9 = ((1.8508996845035413 * fRec2[1]) + (0.92544984225177063 * (fRec2[0] + fRec2[2])));
		double fTemp10 = double(Ftrany(int(TRANY_TABLE_KT88_68k), double(((fTemp9 + (2700.0 * (fTemp9 / (double(Rtrany(int(TRANY_TABLE_KT88_68k), double(fRec1[1]))) + 100000.0)))) + -5.5628950000000001))));
		fRec1[0] = ((fTemp10 + (0.0020603314814814817 * (double(Rtrany(int(TRANY_TABLE_KT88_68k), double(fTemp10))) + 100000.0))) + -250.0);
		fRec0[0] = (fConst2 * ((fConst3 * fRec0[1]) + (0.025000000000000001 * (fRec1[0] - fRec1[1]))));
		output0[i] = FAUSTFLOAT((fRec0[0] + (fSlow7 * fTemp0)));
		iVec0[1] = iVec0[0];
		fRec10[1] = fRec10[0];
		for (int j0 = 8; (j0 > 0); j0 = (j0 - 1)) {
			fRec9[j0] = fRec9[(j0 - 1)];
		}
		fRec13[1] = fRec13[0];
		fRec12[1] = fRec12[0];
		fRec11[1] = fRec11[0];
		fRec15[1] = fRec15[0];
		fRec14[1] = fRec14[0];
		fRec16[1] = fRec16[0];
		for (int j1 = 6; (j1 > 0); j1 = (j1 - 1)) {
			fRec8[j1] = fRec8[(j1 - 1)];
		}
		fVec1[1] = fVec1[0];
		fRec7[1] = fRec7[0];
		fRec6[2] = fRec6[1];
		fRec6[1] = fRec6[0];
		fRec5[1] = fRec5[0];
		fRec4[1] = fRec4[0];
		fRec3[1] = fRec3[0];
		fRec2[2] = fRec2[1];
		fRec2[1] = fRec2[0];
		fRec1[1] = fRec1[0];
		fRec0[1] = fRec0[0];
	}
}

void __rt_func Dsp::compute_static(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0, PluginDef *p)
{
	static_cast<Dsp*>(p)->compute(count, input0, output0);
}

int Dsp::register_par(const ParamReg& reg)
{
	reg.registerFloatVar("rolandwah.Fuzz",N_("Fuzz"),"S","",&fVslider1, 0.5, 0.0, 1.0, 0.01, 0);
	reg.registerFloatVar("rolandwah.Wah",N_("Wah"),"S","",&fVslider3, 0.5, 0.02, 1.0, 0.01, 0);
	reg.registerFloatVar("rolandwah.lfobpm",N_("Alien Freq"),"S",N_("LFO in Beats per Minute"),&fVslider2, 24.0, 24.0, 360.0, 1.0, 0);
	static const value_pair fCheckbox0_values[] = {{"manual"},{"auto"},{"alien"},{0}};
	reg.registerFloatVar("rolandwah.mode","","B","",&fCheckbox0, 0.0, 0.0, 1.0, 1.0, fCheckbox0_values);
	reg.registerFloatVar("rolandwah.wet_dry",N_("Dry/Wet"),"S",N_("percentage of processed signal in output signal"),&fVslider0, 100.0, 0.0, 100.0, 1.0, 0);
	return 0;
}

int Dsp::register_params_static(const ParamReg& reg)
{
	return static_cast<Dsp*>(reg.plugin)->register_par(reg);
}

const char *Dsp::glade_def = "\
<?xml version=\"1.0\" encoding=\"UTF-8\"?>\n\
<!-- Generated with glade 3.22.1 -->\n\
<interface>\n\
  <requires lib=\"gtk+\" version=\"3.20\"/>\n\
  <requires lib=\"gxwidgets\" version=\"0.0\"/>\n\
  <object class=\"GtkWindow\" id=\"window1\">\n\
    <property name=\"can_focus\">False</property>\n\
    <child>\n\
      <placeholder/>\n\
    </child>\n\
    <child>\n\
      <object class=\"GtkBox\" id=\"vbox1\">\n\
        <property name=\"visible\">True</property>\n\
        <property name=\"can_focus\">False</property>\n\
        <property name=\"orientation\">vertical</property>\n\
        <child>\n\
          <object class=\"GtkBox\" id=\"rackbox\">\n\
            <property name=\"visible\">True</property>\n\
            <property name=\"can_focus\">False</property>\n\
            <property name=\"spacing\">4</property>\n\
            <child>\n\
              <object class=\"GtkBox\" id=\"hbox1\">\n\
                <property name=\"visible\">True</property>\n\
                <property name=\"can_focus\">False</property>\n\
                <property name=\"spacing\">10</property>\n\
                <child>\n\
                  <object class=\"GtkBox\" id=\"vbox6\">\n\
                    <property name=\"visible\">True</property>\n\
                    <property name=\"can_focus\">False</property>\n\
                    <property name=\"orientation\">vertical</property>\n\
                    <property name=\"spacing\">23</property>\n\
                    <child>\n\
                      <object class=\"GtkLabel\" id=\"label01:rack_label\">\n\
                        <property name=\"visible\">True</property>\n\
                        <property name=\"can_focus\">False</property>\n\
                        <property name=\"label\" translatable=\"yes\">Mode</property>\n\
                      </object>\n\
                      <packing>\n\
                        <property name=\"expand\">False</property>\n\
                        <property name=\"fill\">False</property>\n\
                        <property name=\"position\">0</property>\n\
                      </packing>\n\
                    </child>\n\
                    <child>\n\
                      <object class=\"GxSelector\" id=\"gxselector1\">\n\
                        <property name=\"visible\">True</property>\n\
                        <property name=\"can_focus\">True</property>\n\
                        <property name=\"receives_default\">True</property>\n\
                        <property name=\"var_id\">rolandwah.mode</property>\n\
                      </object>\n\
                      <packing>\n\
                        <property name=\"expand\">False</property>\n\
                        <property name=\"fill\">False</property>\n\
                        <property name=\"position\">1</property>\n\
                      </packing>\n\
                    </child>\n\
                  </object>\n\
                  <packing>\n\
                    <property name=\"expand\">False</property>\n\
                    <property name=\"fill\">False</property>\n\
                    <property name=\"position\">0</property>\n\
                  </packing>\n\
                </child>\n\
                <child>\n\
                  <object class=\"GtkBox\" id=\"vbox2\">\n\
                    <property name=\"visible\">True</property>\n\
                    <property name=\"can_focus\">False</property>\n\
                    <property name=\"orientation\">vertical</property>\n\
                    <child>\n\
                      <object class=\"GtkLabel\" id=\"label1:rack_label\">\n\
                        <property name=\"visible\">True</property>\n\
                        <property name=\"can_focus\">False</property>\n\
                        <property name=\"label\" translatable=\"yes\">label</property>\n\
                      </object>\n\
                      <packing>\n\
                        <property name=\"expand\">False</property>\n\
                        <property name=\"fill\">False</property>\n\
                        <property name=\"position\">0</property>\n\
                      </packing>\n\
                    </child>\n\
                    <child>\n\
                      <object class=\"GxSmallKnobR\" id=\"gxbigknob1\">\n\
                        <property name=\"visible\">True</property>\n\
                        <property name=\"can_focus\">True</property>\n\
                        <property name=\"receives_default\">True</property>\n\
                        <property name=\"var_id\">rolandwah.lfobpm</property>\n\
                        <property name=\"label_ref\">label1:rack_label</property>\n\
                      </object>\n\
                      <packing>\n\
                        <property name=\"expand\">False</property>\n\
                        <property name=\"fill\">False</property>\n\
                        <property name=\"position\">1</property>\n\
                      </packing>\n\
                    </child>\n\
                  </object>\n\
                  <packing>\n\
                    <property name=\"expand\">False</property>\n\
                    <property name=\"fill\">False</property>\n\
                    <property name=\"position\">1</property>\n\
                  </packing>\n\
                </child>\n\
                <child>\n\
                  <object class=\"GtkBox\" id=\"vbox3\">\n\
                    <property name=\"visible\">True</property>\n\
                    <property name=\"can_focus\">False</property>\n\
                    <property name=\"orientation\">vertical</property>\n\
                    <child>\n\
                      <object class=\"GtkLabel\" id=\"label2:rack_label\">\n\
                        <property name=\"visible\">True</property>\n\
                        <property name=\"can_focus\">False</property>\n\
                        <property name=\"label\" translatable=\"yes\">label</property>\n\
                      </object>\n\
                      <packing>\n\
                        <property name=\"expand\">False</property>\n\
                        <property name=\"fill\">False</property>\n\
                        <property name=\"position\">0</property>\n\
                      </packing>\n\
                    </child>\n\
                    <child>\n\
                      <object class=\"GxSmallKnobR\" id=\"gxbigknob2\">\n\
                        <property name=\"visible\">True</property>\n\
                        <property name=\"can_focus\">True</property>\n\
                        <property name=\"receives_default\">True</property>\n\
                        <property name=\"var_id\">rolandwah.Fuzz</property>\n\
                        <property name=\"label_ref\">label2:rack_label</property>\n\
                      </object>\n\
                      <packing>\n\
                        <property name=\"expand\">False</property>\n\
                        <property name=\"fill\">False</property>\n\
                        <property name=\"position\">1</property>\n\
                      </packing>\n\
                    </child>\n\
                  </object>\n\
                  <packing>\n\
                    <property name=\"expand\">False</property>\n\
                    <property name=\"fill\">False</property>\n\
                    <property name=\"position\">2</property>\n\
                  </packing>\n\
                </child>\n\
                <child>\n\
                  <object class=\"GtkBox\" id=\"vbox4\">\n\
                    <property name=\"visible\">True</property>\n\
                    <property name=\"can_focus\">False</property>\n\
                    <property name=\"orientation\">vertical</property>\n\
                    <child>\n\
                      <object class=\"GtkLabel\" id=\"label3:rack_label\">\n\
                        <property name=\"visible\">True</property>\n\
                        <property name=\"can_focus\">False</property>\n\
                        <property name=\"label\" translatable=\"yes\">label</property>\n\
                      </object>\n\
                      <packing>\n\
                        <property name=\"expand\">False</property>\n\
                        <property name=\"fill\">False</property>\n\
                        <property name=\"position\">0</property>\n\
                      </packing>\n\
                    </child>\n\
                    <child>\n\
                      <object class=\"GxMidKnob\" id=\"gxbigknob3\">\n\
                        <property name=\"visible\">True</property>\n\
                        <property name=\"can_focus\">True</property>\n\
                        <property name=\"receives_default\">True</property>\n\
                        <property name=\"var_id\">rolandwah.Wah</property>\n\
                        <property name=\"label_ref\">label3:rack_label</property>\n\
                      </object>\n\
                      <packing>\n\
                        <property name=\"expand\">False</property>\n\
                        <property name=\"fill\">False</property>\n\
                        <property name=\"position\">1</property>\n\
                      </packing>\n\
                    </child>\n\
                  </object>\n\
                  <packing>\n\
                    <property name=\"expand\">False</property>\n\
                    <property name=\"fill\">False</property>\n\
                    <property name=\"position\">3</property>\n\
                  </packing>\n\
                </child>\n\
                <child>\n\
                  <object class=\"GtkBox\" id=\"vbox5\">\n\
                    <property name=\"visible\">True</property>\n\
                    <property name=\"can_focus\">False</property>\n\
                    <property name=\"orientation\">vertical</property>\n\
                    <child>\n\
                      <object class=\"GtkLabel\" id=\"label4:rack_label\">\n\
                        <property name=\"visible\">True</property>\n\
                        <property name=\"can_focus\">False</property>\n\
                        <property name=\"label\" translatable=\"yes\">label</property>\n\
                      </object>\n\
                      <packing>\n\
                        <property name=\"expand\">False</property>\n\
                        <property name=\"fill\">False</property>\n\
                        <property name=\"position\">0</property>\n\
                      </packing>\n\
                    </child>\n\
                    <child>\n\
                      <object class=\"GxSmallKnobR\" id=\"gxbigknob4\">\n\
                        <property name=\"visible\">True</property>\n\
                        <property name=\"can_focus\">True</property>\n\
                        <property name=\"receives_default\">True</property>\n\
                        <property name=\"var_id\">rolandwah.wet_dry</property>\n\
                        <property name=\"label_ref\">label4:rack_label</property>\n\
                      </object>\n\
                      <packing>\n\
                        <property name=\"expand\">False</property>\n\
                        <property name=\"fill\">False</property>\n\
                        <property name=\"position\">1</property>\n\
                      </packing>\n\
                    </child>\n\
                  </object>\n\
                  <packing>\n\
                    <property name=\"expand\">False</property>\n\
                    <property name=\"fill\">False</property>\n\
                    <property name=\"position\">4</property>\n\
                  </packing>\n\
                </child>\n\
              </object>\n\
              <packing>\n\
                <property name=\"expand\">True</property>\n\
                <property name=\"fill\">False</property>\n\
                <property name=\"pack_type\">end</property>\n\
                <property name=\"position\">0</property>\n\
              </packing>\n\
            </child>\n\
          </object>\n\
          <packing>\n\
            <property name=\"expand\">True</property>\n\
            <property name=\"fill\">False</property>\n\
            <property name=\"position\">0</property>\n\
          </packing>\n\
        </child>\n\
        <child>\n\
          <object class=\"GtkBox\" id=\"minibox\">\n\
            <property name=\"visible\">True</property>\n\
            <property name=\"can_focus\">False</property>\n\
            <property name=\"spacing\">4</property>\n\
            <child>\n\
              <object class=\"GxHSlider\" id=\"gxhslider1\">\n\
                <property name=\"visible\">True</property>\n\
                <property name=\"can_focus\">True</property>\n\
                <property name=\"receives_default\">True</property>\n\
                <property name=\"round_digits\">0</property>\n\
                <property name=\"var_id\">rolandwah.Wah</property>\n\
                <property name=\"show_value\">False</property>\n\
                <property name=\"value_position\">right</property>\n\
                <property name=\"value_xalign\">0.52000000000000002</property>\n\
                <property name=\"label_ref\">label0:rack_label</property>\n\
              </object>\n\
              <packing>\n\
                <property name=\"expand\">False</property>\n\
                <property name=\"fill\">False</property>\n\
                <property name=\"position\">0</property>\n\
              </packing>\n\
            </child>\n\
            <child>\n\
              <object class=\"GtkLabel\" id=\"label0:rack_label\">\n\
                <property name=\"visible\">True</property>\n\
                <property name=\"can_focus\">False</property>\n\
                <property name=\"label\" translatable=\"yes\">Wah</property>\n\
                <property name=\"xalign\">0</property>\n\
              </object>\n\
              <packing>\n\
                <property name=\"expand\">False</property>\n\
                <property name=\"fill\">False</property>\n\
                <property name=\"position\">1</property>\n\
              </packing>\n\
            </child>\n\
          </object>\n\
          <packing>\n\
            <property name=\"expand\">True</property>\n\
            <property name=\"fill\">True</property>\n\
            <property name=\"position\">1</property>\n\
          </packing>\n\
        </child>\n\
      </object>\n\
    </child>\n\
  </object>\n\
</interface>\n\
";

inline int Dsp::load_ui_f(const UiBuilder& b, int form)
{
    if (form & UI_FORM_GLADE) {
        b.load_glade(glade_def);
        return 0;
    }
    if (form & UI_FORM_STACK) {
#define PARAM(p) ("rolandwah" "." p)

b.openHorizontalhideBox("");
    b.create_master_slider(PARAM("Wah"), "Wah");
b.closeBox();
b.openHorizontalBox("");

    b.create_selector(PARAM("mode"), "Mode");
    b.create_small_rackknobr(PARAM("lfobpm"), "Alien Freq");
    b.create_small_rackknobr(PARAM("Fuzz"), "Fuzz");
   // b.create_small_rackknobr(PARAM("Gain"), "Gain");
    b.create_small_rackknobr(PARAM("Wah"), "Wah");
    b.create_small_rackknobr(PARAM("wet_dry"), "dry/wet");
b.closeBox();

#undef PARAM
        return 0;
    }
	return -1;
}

int Dsp::load_ui_f_static(const UiBuilder& b, int form)
{
	return static_cast<Dsp*>(b.plugin)->load_ui_f(b, form);
}
PluginDef *plugin() {
	return new Dsp();
}

void Dsp::del_instance(PluginDef *p)
{
	delete static_cast<Dsp*>(p);
}

} // end namespace rolandwah
} // end namespace pluginlib
