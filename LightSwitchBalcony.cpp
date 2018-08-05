#include "Arduino.h"
#include "LightSwitchBalcony.h"
#include "Light.h"


LightSwitchBalcony::LightSwitchBalcony(Light *lightBalcony)
{
    _lightBalcony = lightBalcony;
}

void LightSwitchBalcony::click0_Dn()
{
    if (_lightBalcony->status())
    {
        _lightBalcony->off();
    }
    else
    {
        _lightBalcony->on();
    }
}

void LightSwitchBalcony::click0_Db()
{
    _lightBalcony->nextstep();
}

void LightSwitchBalcony::click0_Long()
{
}