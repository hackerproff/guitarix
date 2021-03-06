#include <cstdlib>
#include <cmath>
#include "gx_plugin.h"

#define PLUGIN_ID  "dsp"
#define PLUGIN_NAME "DSP"

#define PARAM(p) (PLUGIN_ID "." p)

class Dsp: public PluginDef {
private:
    static void init(unsigned int samplingFreq, PluginDef *plugin);
    static void process(int count, float *input, float *output, PluginDef *plugin);
    static int registerparam(const ParamReg& reg);
    static int uiloader(const UiBuilder& builder, int format);
    static void del_instance(PluginDef *plugin);
    //
    float level;
public:
    Dsp();
};

Dsp::Dsp()
    : PluginDef() {
    version = PLUGINDEF_VERSION;
    id = PLUGIN_ID;
    name = PLUGIN_NAME;
    mono_audio = process;
    set_samplerate = init;
    register_params = registerparam;
    load_ui = uiloader;
    delete_instance = del_instance;
}

void Dsp::init(unsigned int samplingFreq, PluginDef *plugin) {
    //Dsp& self = *static_cast<Dsp*>(plugin);
}

void Dsp::process(int count, float *input, float *output, PluginDef *plugin) {
    Dsp& self = *static_cast<Dsp*>(plugin);
    for (int i = 0; i < count; ++i) {
        output[i] = input[i] * self.level;
    }
}

int Dsp::registerparam(const ParamReg& reg) {
    Dsp& self = *static_cast<Dsp*>(reg.plugin);
    // the numbers are: default, lower, upper, step
    // (step is not used by the python module)
    reg.registerFloatVar(PARAM("level"),"Level","S","Output Level",&self.level,5.0,0.1,10.0,0.1,nullptr);
    return 0;
}

int Dsp::uiloader(const UiBuilder& b, int format) {
    //Dsp& self = *static_cast<Dsp*>(b.plugin);
    if (format & UI_FORM_STACK) {
        b.openHorizontalhideBox("");
        b.closeBox();
        b.create_small_rackknob(PARAM("level"),0);
        return 0;
    }
    return -1;
}

void Dsp::del_instance(PluginDef *plugin) {
    delete static_cast<Dsp*>(plugin);
}

extern "C" __attribute__ ((visibility ("default"))) int
get_gx_plugin(unsigned int idx, PluginDef **pplugin)
{
    const int count = 1;
    if (!pplugin) {
        return count;
    }
    switch (idx) {
    case 0: *pplugin = new Dsp(); return count;
    default: *pplugin = 0; return -1;
    }
}
