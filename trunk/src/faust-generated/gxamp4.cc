// generated from file '../src/faust/gxamp4.dsp' by dsp2cc:
// Code generated with Faust (https://faust.grame.fr)

#include "valve.h"

namespace gxamp4 {

class Dsp: public PluginDef {
private:
	gx_resample::FixedRateResampler smp;
	int sample_rate;
	int fSampleRate;
	double fConst0;
	double fConst1;
	double fConst2;
	double fConst3;
	double fConst4;
	double fConst5;
	double fConst6;
	double fConst7;
	double fConst8;
	double fConst9;
	double fConst10;
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
	FAUSTFLOAT fVslider0;
	FAUSTFLOAT	*fVslider0_;
	double fRec26[2];
	double fVec0[2];
	double fRec25[2];
	double fRec24[3];
	double fConst27;
	double fConst28;
	double fVec1[2];
	double fConst29;
	double fRec27[2];
	double fRec23[2];
	double fRec22[2];
	double fRec21[2];
	double fRec20[2];
	double fRec19[3];
	double fConst30;
	double fConst31;
	double fVec2[2];
	double fConst32;
	double fRec28[2];
	double fRec18[2];
	double fRec17[2];
	double fRec16[2];
	double fRec15[3];
	double fConst33;
	double fConst34;
	double fVec3[2];
	double fConst35;
	double fRec29[2];
	double fRec14[2];
	double fRec13[2];
	FAUSTFLOAT fVslider1;
	FAUSTFLOAT	*fVslider1_;
	double fRec30[2];
	double fConst36;
	double fConst37;
	double fRec12[3];
	double fVec4[2];
	double fConst38;
	double fConst39;
	double fRec11[2];
	double fRec10[2];
	double fConst40;
	double fConst41;
	double fConst42;
	double fConst43;
	double fRec9[3];
	double fVec5[2];
	double fConst44;
	double fConst45;
	double fConst46;
	double fRec8[2];
	double fConst47;
	double fConst48;
	double fRec7[3];
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
	double fRec6[3];
	FAUSTFLOAT fVslider2;
	FAUSTFLOAT	*fVslider2_;
	double fRec31[2];
	double fConst59;
	double fRec35[2];
	double fRec34[3];
	double fConst60;
	double fConst61;
	double fConst62;
	double fRec33[3];
	double fRec32[3];
	double fConst63;
	double fConst64;
	double fConst65;
	double fRec39[2];
	double fRec38[3];
	double fVec6[2];
	double fConst66;
	double fConst67;
	double fRec37[2];
	double fConst68;
	double fRec36[3];
	double fConst69;
	double fConst70;
	double fRec41[2];
	double fRec40[3];
	double fVec7[2];
	double fRec5[2];
	double fVec8[2];
	double fRec4[2];
	FAUSTFLOAT fVslider3;
	FAUSTFLOAT	*fVslider3_;
	double fRec42[2];
	double fVec9[2];
	double fRec3[2];
	double fRec2[3];
	double fVec10[2];
	double fRec43[2];
	double fRec1[2];
	double fRec0[2];
	double fVec11[2];
	double fRec46[2];
	double fRec45[2];
	double fRec44[2];

	void clear_state_f();
	void init(unsigned int sample_rate);
	void compute(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0);
	int register_par(const ParamReg& reg);

	static void clear_state_f_static(PluginDef*);
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
	id = "pre 12AU7/ master 6V6";
	name = N_("pre 12AU7/ master 6V6");
	groups = 0;
	description = ""; // description (tooltip)
	category = "";       // category
	shortname = "";     // shortname
	mono_audio = compute_static;
	stereo_audio = 0;
	set_samplerate = init_static;
	activate_plugin = 0;
	register_params = register_params_static;
	load_ui = 0;
	clear_state = clear_state_f_static;
	delete_instance = del_instance;
}

Dsp::~Dsp() {
}

inline void Dsp::clear_state_f()
{
	for (int l0 = 0; (l0 < 2); l0 = (l0 + 1)) fRec26[l0] = 0.0;
	for (int l1 = 0; (l1 < 2); l1 = (l1 + 1)) fVec0[l1] = 0.0;
	for (int l2 = 0; (l2 < 2); l2 = (l2 + 1)) fRec25[l2] = 0.0;
	for (int l3 = 0; (l3 < 3); l3 = (l3 + 1)) fRec24[l3] = 0.0;
	for (int l4 = 0; (l4 < 2); l4 = (l4 + 1)) fVec1[l4] = 0.0;
	for (int l5 = 0; (l5 < 2); l5 = (l5 + 1)) fRec27[l5] = 0.0;
	for (int l6 = 0; (l6 < 2); l6 = (l6 + 1)) fRec23[l6] = 0.0;
	for (int l7 = 0; (l7 < 2); l7 = (l7 + 1)) fRec22[l7] = 0.0;
	for (int l8 = 0; (l8 < 2); l8 = (l8 + 1)) fRec21[l8] = 0.0;
	for (int l9 = 0; (l9 < 2); l9 = (l9 + 1)) fRec20[l9] = 0.0;
	for (int l10 = 0; (l10 < 3); l10 = (l10 + 1)) fRec19[l10] = 0.0;
	for (int l11 = 0; (l11 < 2); l11 = (l11 + 1)) fVec2[l11] = 0.0;
	for (int l12 = 0; (l12 < 2); l12 = (l12 + 1)) fRec28[l12] = 0.0;
	for (int l13 = 0; (l13 < 2); l13 = (l13 + 1)) fRec18[l13] = 0.0;
	for (int l14 = 0; (l14 < 2); l14 = (l14 + 1)) fRec17[l14] = 0.0;
	for (int l15 = 0; (l15 < 2); l15 = (l15 + 1)) fRec16[l15] = 0.0;
	for (int l16 = 0; (l16 < 3); l16 = (l16 + 1)) fRec15[l16] = 0.0;
	for (int l17 = 0; (l17 < 2); l17 = (l17 + 1)) fVec3[l17] = 0.0;
	for (int l18 = 0; (l18 < 2); l18 = (l18 + 1)) fRec29[l18] = 0.0;
	for (int l19 = 0; (l19 < 2); l19 = (l19 + 1)) fRec14[l19] = 0.0;
	for (int l20 = 0; (l20 < 2); l20 = (l20 + 1)) fRec13[l20] = 0.0;
	for (int l21 = 0; (l21 < 2); l21 = (l21 + 1)) fRec30[l21] = 0.0;
	for (int l22 = 0; (l22 < 3); l22 = (l22 + 1)) fRec12[l22] = 0.0;
	for (int l23 = 0; (l23 < 2); l23 = (l23 + 1)) fVec4[l23] = 0.0;
	for (int l24 = 0; (l24 < 2); l24 = (l24 + 1)) fRec11[l24] = 0.0;
	for (int l25 = 0; (l25 < 2); l25 = (l25 + 1)) fRec10[l25] = 0.0;
	for (int l26 = 0; (l26 < 3); l26 = (l26 + 1)) fRec9[l26] = 0.0;
	for (int l27 = 0; (l27 < 2); l27 = (l27 + 1)) fVec5[l27] = 0.0;
	for (int l28 = 0; (l28 < 2); l28 = (l28 + 1)) fRec8[l28] = 0.0;
	for (int l29 = 0; (l29 < 3); l29 = (l29 + 1)) fRec7[l29] = 0.0;
	for (int l30 = 0; (l30 < 3); l30 = (l30 + 1)) fRec6[l30] = 0.0;
	for (int l31 = 0; (l31 < 2); l31 = (l31 + 1)) fRec31[l31] = 0.0;
	for (int l32 = 0; (l32 < 2); l32 = (l32 + 1)) fRec35[l32] = 0.0;
	for (int l33 = 0; (l33 < 3); l33 = (l33 + 1)) fRec34[l33] = 0.0;
	for (int l34 = 0; (l34 < 3); l34 = (l34 + 1)) fRec33[l34] = 0.0;
	for (int l35 = 0; (l35 < 3); l35 = (l35 + 1)) fRec32[l35] = 0.0;
	for (int l36 = 0; (l36 < 2); l36 = (l36 + 1)) fRec39[l36] = 0.0;
	for (int l37 = 0; (l37 < 3); l37 = (l37 + 1)) fRec38[l37] = 0.0;
	for (int l38 = 0; (l38 < 2); l38 = (l38 + 1)) fVec6[l38] = 0.0;
	for (int l39 = 0; (l39 < 2); l39 = (l39 + 1)) fRec37[l39] = 0.0;
	for (int l40 = 0; (l40 < 3); l40 = (l40 + 1)) fRec36[l40] = 0.0;
	for (int l41 = 0; (l41 < 2); l41 = (l41 + 1)) fRec41[l41] = 0.0;
	for (int l42 = 0; (l42 < 3); l42 = (l42 + 1)) fRec40[l42] = 0.0;
	for (int l43 = 0; (l43 < 2); l43 = (l43 + 1)) fVec7[l43] = 0.0;
	for (int l44 = 0; (l44 < 2); l44 = (l44 + 1)) fRec5[l44] = 0.0;
	for (int l45 = 0; (l45 < 2); l45 = (l45 + 1)) fVec8[l45] = 0.0;
	for (int l46 = 0; (l46 < 2); l46 = (l46 + 1)) fRec4[l46] = 0.0;
	for (int l47 = 0; (l47 < 2); l47 = (l47 + 1)) fRec42[l47] = 0.0;
	for (int l48 = 0; (l48 < 2); l48 = (l48 + 1)) fVec9[l48] = 0.0;
	for (int l49 = 0; (l49 < 2); l49 = (l49 + 1)) fRec3[l49] = 0.0;
	for (int l50 = 0; (l50 < 3); l50 = (l50 + 1)) fRec2[l50] = 0.0;
	for (int l51 = 0; (l51 < 2); l51 = (l51 + 1)) fVec10[l51] = 0.0;
	for (int l52 = 0; (l52 < 2); l52 = (l52 + 1)) fRec43[l52] = 0.0;
	for (int l53 = 0; (l53 < 2); l53 = (l53 + 1)) fRec1[l53] = 0.0;
	for (int l54 = 0; (l54 < 2); l54 = (l54 + 1)) fRec0[l54] = 0.0;
	for (int l55 = 0; (l55 < 2); l55 = (l55 + 1)) fVec11[l55] = 0.0;
	for (int l56 = 0; (l56 < 2); l56 = (l56 + 1)) fRec46[l56] = 0.0;
	for (int l57 = 0; (l57 < 2); l57 = (l57 + 1)) fRec45[l57] = 0.0;
	for (int l58 = 0; (l58 < 2); l58 = (l58 + 1)) fRec44[l58] = 0.0;
}

void Dsp::clear_state_f_static(PluginDef *p)
{
	static_cast<Dsp*>(p)->clear_state_f();
}

inline void Dsp::init(unsigned int RsamplingFreq)
{
	sample_rate = 96000;
	smp.setup(RsamplingFreq, sample_rate);
	fSampleRate = sample_rate;
	fConst0 = std::min<double>(192000.0, std::max<double>(1.0, double(fSampleRate)));
	fConst1 = (3.1415926535897931 / fConst0);
	fConst2 = (1.0 / (fConst1 + 1.0));
	fConst3 = (1.0 - fConst1);
	fConst4 = (1.0 / std::tan((20517.741620594938 / fConst0)));
	fConst5 = (1.0 / (fConst4 + 1.0));
	fConst6 = (1.0 - fConst4);
	fConst7 = std::tan((3769.9111843077517 / fConst0));
	fConst8 = (1.0 / fConst7);
	fConst9 = (1.0 / (((fConst8 + 1.0000000000000004) / fConst7) + 1.0));
	fConst10 = mydsp_faustpower2_f(fConst7);
	fConst11 = (1.0 / fConst10);
	fConst12 = std::tan((10053.096491487338 / fConst0));
	fConst13 = (1.0 / fConst12);
	fConst14 = (1.0 / (((fConst13 + 1.0000000000000004) / fConst12) + 1.0));
	fConst15 = (fConst8 + 1.0);
	fConst16 = (1.0 / (fConst7 * fConst15));
	fConst17 = (fConst13 + 1.0);
	fConst18 = (1.0 / fConst17);
	fConst19 = (1.0 - fConst13);
	fConst20 = std::tan((47123.889803846898 / fConst0));
	fConst21 = (1.0 / fConst20);
	fConst22 = (1.0 / (((fConst21 + 1.4142135623730949) / fConst20) + 1.0));
	fConst23 = std::tan((97.389372261283583 / fConst0));
	fConst24 = (1.0 / fConst23);
	fConst25 = (fConst24 + 1.0);
	fConst26 = (1.0 / (fConst23 * fConst25));
	fConst27 = (1.0 / std::tan((270.1769682087222 / fConst0)));
	fConst28 = (1.0 / (fConst27 + 1.0));
	fConst29 = (1.0 - fConst27);
	fConst30 = (1.0 / std::tan((414.69023027385271 / fConst0)));
	fConst31 = (1.0 / (fConst30 + 1.0));
	fConst32 = (1.0 - fConst30);
	fConst33 = (1.0 / std::tan((609.46897479641984 / fConst0)));
	fConst34 = (1.0 / (fConst33 + 1.0));
	fConst35 = (1.0 - fConst33);
	fConst36 = (((fConst21 + -1.4142135623730949) / fConst20) + 1.0);
	fConst37 = (2.0 * (1.0 - (1.0 / mydsp_faustpower2_f(fConst20))));
	fConst38 = (0.0 - fConst26);
	fConst39 = ((1.0 - fConst24) / fConst25);
	fConst40 = (((fConst13 + -1.0000000000000004) / fConst12) + 1.0);
	fConst41 = mydsp_faustpower2_f(fConst12);
	fConst42 = (1.0 / fConst41);
	fConst43 = (2.0 * (1.0 - fConst42));
	fConst44 = (0.0 - fConst16);
	fConst45 = (1.0 - fConst8);
	fConst46 = (fConst45 / fConst15);
	fConst47 = (((fConst8 + -1.0000000000000004) / fConst7) + 1.0);
	fConst48 = (2.0 * (1.0 - fConst11));
	fConst49 = (0.0 - (2.0 / fConst10));
	fConst50 = std::tan((942.47779607693792 / fConst0));
	fConst51 = (1.0 / fConst50);
	fConst52 = (fConst51 + 1.0);
	fConst53 = (1.0 / ((fConst52 / fConst50) + 1.0));
	fConst54 = (1.0 - fConst51);
	fConst55 = (1.0 - (fConst54 / fConst50));
	fConst56 = mydsp_faustpower2_f(fConst50);
	fConst57 = (1.0 / fConst56);
	fConst58 = (2.0 * (1.0 - fConst57));
	fConst59 = (0.0 - (1.0 / (fConst12 * fConst17)));
	fConst60 = (0.0 - (2.0 / fConst41));
	fConst61 = (1.0 / ((fConst15 / fConst7) + 1.0));
	fConst62 = (1.0 - (fConst45 / fConst7));
	fConst63 = (1.0 / (((fConst51 + 1.0000000000000004) / fConst50) + 1.0));
	fConst64 = (1.0 / (fConst50 * fConst52));
	fConst65 = (1.0 / fConst15);
	fConst66 = (0.0 - fConst64);
	fConst67 = (fConst54 / fConst52);
	fConst68 = (((fConst51 + -1.0000000000000004) / fConst50) + 1.0);
	fConst69 = (0.0 - (2.0 / fConst56));
	fConst70 = (1.0 / fConst52);
	clear_state_f();
}

void Dsp::init_static(unsigned int sample_rate, PluginDef *p)
{
	static_cast<Dsp*>(p)->init(sample_rate);
}

void always_inline Dsp::compute(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0)
{
#define fVslider0 (*fVslider0_)
#define fVslider1 (*fVslider1_)
#define fVslider2 (*fVslider2_)
#define fVslider3 (*fVslider3_)
	FAUSTFLOAT buf[smp.max_out_count(count)];
	int ReCount = smp.up(count, input0, buf);
	double fSlow0 = (0.0010000000000000009 * std::pow(10.0, (0.050000000000000003 * double(fVslider0))));
	double fSlow1 = (1.0000000000000009e-05 * double(fVslider1));
	double fSlow2 = (0.0010000000000000009 * double(fVslider2));
	double fSlow3 = (0.0010000000000000009 * std::pow(10.0, (0.050000000000000003 * double(fVslider3))));
	for (int i = 0; (i < ReCount); i = (i + 1)) {
		fRec26[0] = (fSlow0 + (0.999 * fRec26[1]));
		double fTemp0 = (double(buf[i]) * fRec26[0]);
		fVec0[0] = fTemp0;
		fRec25[0] = ((0.93028479253239138 * (fTemp0 + fVec0[1])) - (0.86056958506478287 * fRec25[1]));
		fRec24[0] = (fRec25[0] - ((1.8405051250752198 * fRec24[1]) + (0.86129424393186271 * fRec24[2])));
		double fTemp1 = (0.92544984225177063 * (fRec24[0] + fRec24[2]));
		double fTemp2 = (1.8508996845035413 * fRec24[1]);
		double fTemp3 = ((fTemp2 + fTemp1) / (double(Ranode(int(TUBE_TABLE_12AU7_68k), double(fRec23[1]))) + 100000.0));
		fVec1[0] = fTemp3;
		fRec27[0] = (fConst28 * ((2700.0 * (fTemp3 + fVec1[1])) - (fConst29 * fRec27[1])));
		fRec23[0] = (double(Ftube(int(TUBE_TABLE_12AU7_68k), double(((fTemp1 + (fRec27[0] + fTemp2)) + -1.2572399999999999)))) + -83.435555555555567);
		fRec22[0] = (fConst2 * ((fConst3 * fRec22[1]) + (0.10000000000000001 * (fRec23[0] - fRec23[1]))));
		fRec21[0] = (0.0 - (fConst5 * ((fConst6 * fRec21[1]) - (fRec22[0] + fRec22[1]))));
		fRec20[0] = ((0.93028479253239138 * (fRec21[0] + fRec21[1])) - (0.86056958506478287 * fRec20[1]));
		fRec19[0] = (fRec20[0] - ((1.8405051250752198 * fRec19[1]) + (0.86129424393186271 * fRec19[2])));
		double fTemp4 = (0.92544984225177063 * (fRec19[0] + fRec19[2]));
		double fTemp5 = (1.8508996845035413 * fRec19[1]);
		double fTemp6 = ((fTemp5 + fTemp4) / (double(Ranode(int(TUBE_TABLE_12AU7_250k), double(fRec18[1]))) + 100000.0));
		fVec2[0] = fTemp6;
		fRec28[0] = (fConst31 * ((1500.0 * (fTemp6 + fVec2[1])) - (fConst32 * fRec28[1])));
		fRec18[0] = (double(Ftube(int(TUBE_TABLE_12AU7_250k), double(((fTemp4 + (fRec28[0] + fTemp5)) + -0.77616200000000002)))) + -78.255866666666662);
		fRec17[0] = (fConst2 * ((fConst3 * fRec17[1]) + (0.10000000000000001 * (fRec18[0] - fRec18[1]))));
		fRec16[0] = ((0.93028479253239138 * (fRec17[0] + fRec17[1])) - (0.86056958506478287 * fRec16[1]));
		fRec15[0] = (fRec16[0] - ((1.8405051250752198 * fRec15[1]) + (0.86129424393186271 * fRec15[2])));
		double fTemp7 = (0.92544984225177063 * (fRec15[0] + fRec15[2]));
		double fTemp8 = (1.8508996845035413 * fRec15[1]);
		double fTemp9 = ((fTemp8 + fTemp7) / (double(Ranode(int(TUBE_TABLE_12AU7_250k), double(fRec14[1]))) + 100000.0));
		fVec3[0] = fTemp9;
		fRec29[0] = (fConst34 * ((820.0 * (fTemp9 + fVec3[1])) - (fConst35 * fRec29[1])));
		fRec14[0] = (double(Ftube(int(TUBE_TABLE_12AU7_250k), double(((fTemp7 + (fRec29[0] + fTemp8)) + -0.44548700000000002)))) + -75.672317073170731);
		fRec13[0] = (fConst2 * ((fConst3 * fRec13[1]) + (0.10000000000000001 * (fRec14[0] - fRec14[1]))));
		fRec30[0] = (fSlow1 + (0.999 * fRec30[1]));
		fRec12[0] = ((fRec13[0] * fRec30[0]) - (fConst22 * ((fConst36 * fRec12[2]) + (fConst37 * fRec12[1]))));
		double fTemp10 = (fRec12[2] + (fRec12[0] + (2.0 * fRec12[1])));
		fVec4[0] = fTemp10;
		fRec11[0] = ((fConst22 * ((fConst26 * fTemp10) + (fConst38 * fVec4[1]))) - (fConst39 * fRec11[1]));
		fRec10[0] = (0.0 - (fConst18 * ((fConst19 * fRec10[1]) - (fRec11[0] + fRec11[1]))));
		fRec9[0] = (fRec10[0] - (fConst14 * ((fConst40 * fRec9[2]) + (fConst43 * fRec9[1]))));
		double fTemp11 = (fRec9[2] + (fRec9[0] + (2.0 * fRec9[1])));
		fVec5[0] = fTemp11;
		fRec8[0] = ((fConst14 * ((fConst16 * fTemp11) + (fConst44 * fVec5[1]))) - (fConst46 * fRec8[1]));
		fRec7[0] = (fRec8[0] - (fConst9 * ((fConst47 * fRec7[2]) + (fConst48 * fRec7[1]))));
		double fTemp12 = (fConst58 * fRec6[1]);
		fRec6[0] = ((fConst9 * (((fConst11 * fRec7[0]) + (fConst49 * fRec7[1])) + (fConst11 * fRec7[2]))) - (fConst53 * ((fConst55 * fRec6[2]) + fTemp12)));
		fRec31[0] = (fSlow2 + (0.999 * fRec31[1]));
		double fTemp13 = std::max<double>(-1.0, std::min<double>(1.0, ((fRec6[2] + (fConst53 * (fTemp12 + (fConst55 * fRec6[0])))) * std::pow(10.0, (1.2 * fRec31[0])))));
		fRec35[0] = ((fConst59 * fRec11[1]) - (fConst18 * ((fConst19 * fRec35[1]) - (fConst13 * fRec11[0]))));
		fRec34[0] = (fRec35[0] - (fConst14 * ((fConst40 * fRec34[2]) + (fConst43 * fRec34[1]))));
		double fTemp14 = (fConst48 * fRec33[1]);
		fRec33[0] = ((fConst14 * (((fConst42 * fRec34[0]) + (fConst60 * fRec34[1])) + (fConst42 * fRec34[2]))) - (fConst61 * ((fConst62 * fRec33[2]) + fTemp14)));
		double fTemp15 = (fConst58 * fRec32[1]);
		fRec32[0] = ((fRec33[2] + (fConst61 * (fTemp14 + (fConst62 * fRec33[0])))) - (fConst53 * ((fConst55 * fRec32[2]) + fTemp15)));
		double fTemp16 = std::max<double>(-1.0, std::min<double>(1.0, ((fRec32[2] + (fConst53 * (fTemp15 + (fConst55 * fRec32[0])))) * std::pow(10.0, (0.80000000000000004 * fRec31[0])))));
		fRec39[0] = (0.0 - (fConst65 * ((fConst45 * fRec39[1]) - (fConst14 * (fTemp11 + fVec5[1])))));
		fRec38[0] = (fRec39[0] - (fConst9 * ((fConst47 * fRec38[2]) + (fConst48 * fRec38[1]))));
		double fTemp17 = (fRec38[2] + (fRec38[0] + (2.0 * fRec38[1])));
		fVec6[0] = fTemp17;
		fRec37[0] = ((fConst9 * ((fConst64 * fTemp17) + (fConst66 * fVec6[1]))) - (fConst67 * fRec37[1]));
		fRec36[0] = (fRec37[0] - (fConst63 * ((fConst68 * fRec36[2]) + (fConst58 * fRec36[1]))));
		double fTemp18 = std::max<double>(-1.0, std::min<double>(1.0, (fConst63 * ((((fConst57 * fRec36[0]) + (fConst69 * fRec36[1])) + (fConst57 * fRec36[2])) * std::pow(10.0, (2.0 * fRec31[0]))))));
		fRec41[0] = (0.0 - (fConst70 * ((fConst54 * fRec41[1]) - (fConst9 * (fTemp17 + fVec6[1])))));
		fRec40[0] = (fRec41[0] - (fConst63 * ((fConst68 * fRec40[2]) + (fConst58 * fRec40[1]))));
		double fTemp19 = std::max<double>(-1.0, std::min<double>(1.0, (fConst63 * ((fRec40[2] + (fRec40[0] + (2.0 * fRec40[1]))) * std::pow(10.0, (0.90000000000000002 * fRec31[0]))))));
		double fTemp20 = (((1.333521432 * (fTemp13 * (1.0 - (0.33333333333333331 * mydsp_faustpower2_f(fTemp13))))) + (1.584893192 * ((fTemp16 * (1.0 - (0.33333333333333331 * mydsp_faustpower2_f(fTemp16)))) + (fTemp18 * (1.0 - (0.33333333333333331 * mydsp_faustpower2_f(fTemp18))))))) + (1.2589412 * (fTemp19 * (1.0 - (0.33333333333333331 * mydsp_faustpower2_f(fTemp19))))));
		fVec7[0] = fTemp20;
		fRec5[0] = (0.0 - (fConst5 * ((fConst6 * fRec5[1]) - (fTemp20 + fVec7[1]))));
		double fTemp21 = (2.0 * (fRec31[0] + -0.5));
		double fTemp22 = (1.0 - fRec30[0]);
		double fTemp23 = ((fRec5[0] * (1.0 - std::max<double>(0.0, (-1.0 * fTemp21)))) + (fRec13[0] * ((fTemp22 * ((1.25 * (fRec31[0] * ((4.0 * (1.0 - std::fabs((fRec13[0] * fTemp22)))) + -1.0))) + 1.0)) + (fRec30[0] * (1.0 - std::max<double>(0.0, fTemp21))))));
		fVec8[0] = fTemp23;
		fRec4[0] = (0.0 - (fConst5 * ((fConst6 * fRec4[1]) - (fTemp23 + fVec8[1]))));
		fRec42[0] = (fSlow3 + (0.999 * fRec42[1]));
		double fTemp24 = (fRec4[0] * fRec42[0]);
		fVec9[0] = fTemp24;
		fRec3[0] = ((0.93028479253239138 * (fTemp24 + fVec9[1])) - (0.86056958506478287 * fRec3[1]));
		fRec2[0] = (fRec3[0] - ((1.8405051250752198 * fRec2[1]) + (0.86129424393186271 * fRec2[2])));
		double fTemp25 = (0.92544984225177063 * (fRec2[0] + fRec2[2]));
		double fTemp26 = (1.8508996845035413 * fRec2[1]);
		double fTemp27 = (fTemp26 + fTemp25);
		double fTemp28 = (fTemp27 / (double(Ranode(int(TUBE_TABLE_6V6_250k), double(fRec1[1]))) + 100000.0));
		fVec10[0] = fTemp28;
		fRec43[0] = (fConst5 * ((820.0 * (fTemp28 + fVec10[1])) - (fConst6 * fRec43[1])));
		fRec1[0] = (double(Ftube(int(TUBE_TABLE_6V6_250k), double(((fTemp25 + (fRec43[0] + fTemp26)) + -1.1304620000000001)))) + -112.13878048780487);
		fRec0[0] = (fConst2 * ((fConst3 * fRec0[1]) + (0.025000000000000001 * (fRec1[0] - fRec1[1]))));
		double fTemp29 = (fTemp27 / (double(Ranode(int(TUBE_TABLE_6V6_68k), double(fRec45[1]))) + 100000.0));
		fVec11[0] = fTemp29;
		fRec46[0] = (fConst5 * ((820.0 * (fTemp29 + fVec11[1])) - (fConst6 * fRec46[1])));
		fRec45[0] = (double(Ftube(int(TUBE_TABLE_6V6_68k), double(((fTemp25 + (fRec46[0] + fTemp26)) + -1.1307400000000001)))) + -112.10487804878048);
		fRec44[0] = (fConst2 * ((fConst3 * fRec44[1]) + (0.025000000000000001 * (fRec45[0] - fRec45[1]))));
		buf[i] = FAUSTFLOAT((fRec0[0] + fRec44[0]));
		fRec26[1] = fRec26[0];
		fVec0[1] = fVec0[0];
		fRec25[1] = fRec25[0];
		fRec24[2] = fRec24[1];
		fRec24[1] = fRec24[0];
		fVec1[1] = fVec1[0];
		fRec27[1] = fRec27[0];
		fRec23[1] = fRec23[0];
		fRec22[1] = fRec22[0];
		fRec21[1] = fRec21[0];
		fRec20[1] = fRec20[0];
		fRec19[2] = fRec19[1];
		fRec19[1] = fRec19[0];
		fVec2[1] = fVec2[0];
		fRec28[1] = fRec28[0];
		fRec18[1] = fRec18[0];
		fRec17[1] = fRec17[0];
		fRec16[1] = fRec16[0];
		fRec15[2] = fRec15[1];
		fRec15[1] = fRec15[0];
		fVec3[1] = fVec3[0];
		fRec29[1] = fRec29[0];
		fRec14[1] = fRec14[0];
		fRec13[1] = fRec13[0];
		fRec30[1] = fRec30[0];
		fRec12[2] = fRec12[1];
		fRec12[1] = fRec12[0];
		fVec4[1] = fVec4[0];
		fRec11[1] = fRec11[0];
		fRec10[1] = fRec10[0];
		fRec9[2] = fRec9[1];
		fRec9[1] = fRec9[0];
		fVec5[1] = fVec5[0];
		fRec8[1] = fRec8[0];
		fRec7[2] = fRec7[1];
		fRec7[1] = fRec7[0];
		fRec6[2] = fRec6[1];
		fRec6[1] = fRec6[0];
		fRec31[1] = fRec31[0];
		fRec35[1] = fRec35[0];
		fRec34[2] = fRec34[1];
		fRec34[1] = fRec34[0];
		fRec33[2] = fRec33[1];
		fRec33[1] = fRec33[0];
		fRec32[2] = fRec32[1];
		fRec32[1] = fRec32[0];
		fRec39[1] = fRec39[0];
		fRec38[2] = fRec38[1];
		fRec38[1] = fRec38[0];
		fVec6[1] = fVec6[0];
		fRec37[1] = fRec37[0];
		fRec36[2] = fRec36[1];
		fRec36[1] = fRec36[0];
		fRec41[1] = fRec41[0];
		fRec40[2] = fRec40[1];
		fRec40[1] = fRec40[0];
		fVec7[1] = fVec7[0];
		fRec5[1] = fRec5[0];
		fVec8[1] = fVec8[0];
		fRec4[1] = fRec4[0];
		fRec42[1] = fRec42[0];
		fVec9[1] = fVec9[0];
		fRec3[1] = fRec3[0];
		fRec2[2] = fRec2[1];
		fRec2[1] = fRec2[0];
		fVec10[1] = fVec10[0];
		fRec43[1] = fRec43[0];
		fRec1[1] = fRec1[0];
		fRec0[1] = fRec0[0];
		fVec11[1] = fVec11[0];
		fRec46[1] = fRec46[0];
		fRec45[1] = fRec45[0];
		fRec44[1] = fRec44[0];
	}
	smp.down(buf, output0);
#undef fVslider0
#undef fVslider1
#undef fVslider2
#undef fVslider3
}

void __rt_func Dsp::compute_static(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0, PluginDef *p)
{
	static_cast<Dsp*>(p)->compute(count, input0, output0);
}

int Dsp::register_par(const ParamReg& reg)
{
	fVslider2_ = reg.registerFloatVar("gxdistortion.drive","","SA","",&fVslider2, 0.34999999999999998, 0.0, 1.0, 0.01, 0);
	fVslider1_ = reg.registerFloatVar("gxdistortion.wet_dry","","SA","",&fVslider1, 100.0, 0.0, 100.0, 1.0, 0);
	fVslider0_ = reg.registerFloatVar("amp2.stage1.Pregain","","SA","",&fVslider0, -6.0, -20.0, 20.0, 0.10000000000000001, 0);
	fVslider3_ = reg.registerFloatVar("amp2.stage2.gain1","","SA","",&fVslider3, -6.0, -20.0, 20.0, 0.10000000000000001, 0);
	return 0;
}

int Dsp::register_params_static(const ParamReg& reg)
{
	return static_cast<Dsp*>(reg.plugin)->register_par(reg);
}

PluginDef *plugin() {
	return new Dsp();
}

void Dsp::del_instance(PluginDef *p)
{
	delete static_cast<Dsp*>(p);
}

} // end namespace gxamp4
