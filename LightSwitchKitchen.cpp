#include "Arduino.h"
#include "LightSwitchKitchen.h"
#include "Light.h"

LightSwitchKitchen::LightSwitchKitchen( Light *lightKitchen, Light *lightKitchen1, Light *lightKitchen2, Light *lightKitchenDots, Light *lightBalcony, Light *lightHall)
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
    }
    else
    {
        _lightKitchen->on();
    }
}

void LightSwitchKitchen::click0_Db()
{
    _lightKitchen->nextstep();
}

void LightSwitchKitchen::click0_Long()
{
}

void LightSwitchKitchen::click1_Dn()
{

}

void LightSwitchKitchen::click1_Db()
{

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