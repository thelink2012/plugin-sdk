#pragma once

#include "plbase/PluginBase_SA.h"
#include "CTaskComplex.h"

class PLUGIN_API CTaskComplexObserveTrafficLights : public CTaskComplex {
protected:
    CTaskComplexObserveTrafficLights(plugin::dummy_func_t a) : CTaskComplex(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskComplexObserveTrafficLights, 0x);