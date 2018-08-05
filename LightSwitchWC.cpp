#include "Arduino.h"
#include "LightSwitchWC.h"
#include "Light.h"
#include "Ventilator.h"

LightSwitchWC::LightSwitchWC(Light *lightWC, Light *braceWC, Ventilator *fanWC)
{
    _lightWC = lightWC;
    _braceWC = braceWC;
    _fanWC = fanWC;
}

void LightSwitchWC::click0_Dn()
{
    if (_lightWC->status())
    {
        _lightWC->off();
        //TODO включить когда сделают разводку
        //_braceWC->off();
        //_fanWC->off();
    }
    else
    {
        _lightWC->on();
        //TODO включить когда сделают разводку
        //_braceWC->on();
        //_fanWC->on();
    }
}

void LightSwitchWC::click0_Db()
{
    _lightWC->nextstep();
}

void LightSwitchWC::click0_Long()
{
}