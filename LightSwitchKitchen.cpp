#include "Arduino.h"
#include "LightSwitchKitchen.h"
#include "Light.h"

LightSwitchKitchen::LightSwitchKitchen(Light *lightKitchen, Light *lightKitchen1, Light *lightKitchen2, Light *lightKitchenDots, Light *lightBalcony, Light *lightHall)
{
    _lightKitchen = lightKitchen;
    _lightKitchen1 = lightKitchen1;
    _lightKitchen2 = lightKitchen2;
    _lightKitchenDots = lightKitchenDots;
    _lightBalcony = lightBalcony;
    _lightHall = lightHall;
}

void LightSwitchKitchen::click0_Dn()
{
    if (_lightKitchen->status())
    {
        _lightKitchen->off();
        _lightKitchen1->off();
        _lightKitchen2->off();
        _lightKitchenDots->off();
        _lightBalcony->off();
    }
    else
    {
        _lightKitchen->on();
    }
}

void LightSwitchKitchen::click0_Db()
{
    _lightKitchenDots->nextstep();
}

void LightSwitchKitchen::click0_Long()
{
    if (_lightKitchen->status())
    {
        _lightKitchen->off();
        _lightKitchen1->off();
        _lightKitchen2->off();
        _lightKitchenDots->off();
        _lightBalcony->off();
    }
    else{
        _lightKitchen->on();
        _lightKitchen1->on();
        _lightKitchen2->on();
        _lightKitchenDots->on();
    }
}

void LightSwitchKitchen::click1_Dn()
{
    
}

void LightSwitchKitchen::click1_Db()
{
    _lightBalcony->nextstep();
}

void LightSwitchKitchen::click1_Long()
{
}

void LightSwitchKitchen::click1_0_Dn()
{
}

void LightSwitchKitchen::click1_0_Db()
{
}

void LightSwitchKitchen::click1_0_Long()
{
}