// generated from file '../src/LV2/faust/gx_feedback.dsp' by dsp2cc:
// Code generated with Faust 0.9.58 (http://faust.grame.fr)


namespace gx_feedback {

class Dsp: public PluginLV2 {
private:
	uint32_t fSamplingFreq;
	FAUSTFLOAT 	fslider0;
	FAUSTFLOAT	*fslider0_;
	FAUSTFLOAT 	fslider1;
	FAUSTFLOAT	*fslider1_;
	double 	fRec0[6];
	void connect(uint32_t port,void* data);
	void clear_state_f();
	void init(uint32_t samplingFreq);
	void compute(int count, float *input0, float *output0);

	static void clear_state_f_static(PluginLV2*);
	static void init_static(uint32_t samplingFreq, PluginLV2*);
	static void compute_static(int count, float *input0, float *output0, PluginLV2*);
	static void del_instance(PluginLV2 *p);
	static void connect_static(uint32_t port,void* data, PluginLV2 *p);
public:
	Dsp();
	~Dsp();
};



Dsp::Dsp()
	: PluginLV2() {
	version = PLUGINLV2_VERSION;
	id = "feedback";
	name = N_("Feedback");
	mono_audio = compute_static;
	stereo_audio = 0;
	set_samplerate = init_static;
	activate_plugin = 0;
	connect_ports = connect_static;
	clear_state = clear_state_f_static;
	delete_instance = del_instance;
}

Dsp::~Dsp() {
}

inline void Dsp::clear_state_f()
{
	for (int i=0; i<6; i++) fRec0[i] = 0;
}

void Dsp::clear_state_f_static(PluginLV2 *p)
{
	static_cast<Dsp*>(p)->clear_state_f();
}

inline void Dsp::init(uint32_t samplingFreq)
{
	fSamplingFreq = samplingFreq;
	clear_state_f();
}

void Dsp::init_static(uint32_t samplingFreq, PluginLV2 *p)
{
	static_cast<Dsp*>(p)->init(samplingFreq);
}

void always_inline Dsp::compute(int count, float *input0, float *output0)
{
#define fslider0 (*fslider0_)
#define fslider1 (*fslider1_)
	double 	fSlow0 = (0.01 * fslider0);
	double 	fSlow1 = (1 - fSlow0);
	double 	fSlow2 = fslider1;
	for (int i=0; i<count; i++) {
		double fTemp0 = (double)input0[i];
		fRec0[0] = ((fSlow0 * fTemp0) - (fSlow2 * fRec0[5]));
		output0[i] = (FAUSTFLOAT)(fRec0[0] + (fSlow1 * fTemp0));
		// post processing
		for (int i=5; i>0; i--) fRec0[i] = fRec0[i-1];
	}
#undef fslider0
#undef fslider1
}

void __rt_func Dsp::compute_static(int count, float *input0, float *output0, PluginLV2 *p)
{
	static_cast<Dsp*>(p)->compute(count, input0, output0);
}


void Dsp::connect(uint32_t port,void* data)
{
	switch ((PortIndex)port)
	{
	case FEEDBACK: 
		fslider1_ = (float*)data; // , 0.0, -1.0, 1.0, 0.01 
		break;
	case WET_DRY: 
		fslider0_ = (float*)data; // , 1e+02, 0.0, 1e+02, 1.0 
		break;
	default:
		break;
	}
}

void Dsp::connect_static(uint32_t port,void* data, PluginLV2 *p)
{
	static_cast<Dsp*>(p)->connect(port, data);
}


PluginLV2 *plugin() {
	return new Dsp();
}

void Dsp::del_instance(PluginLV2 *p)
{
	delete static_cast<Dsp*>(p);
}

/*
typedef enum
{
   FEEDBACK, 
   WET_DRY, 
} PortIndex;
*/

} // end namespace gx_feedback
