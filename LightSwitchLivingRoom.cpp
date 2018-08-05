#include "Arduino.h"
#include "LightSwitchLivingRoom.h"
#include "Light.h"


LightSwitchLivingRoom::LightSwitchLivingRoom(Light *lightLivingRoom, Light *braceLivingRoom)
{
    _lightLivingRoom = lightLivingRoom;
}

void LightSwitchLivingRoom::click0_Dn()
{
    if (_lightLivingRoom->status())
    {
        _lightLivingRoom->off();
    }
    else
    {
        _lightLivingRoom->on();
    }
}

void LightSwitchLivingRoom::click0_Db()
{
    _lightLivingRoom->nextstep();
}

void LightSwitchLivingRoom::click0_Long()
{
}

void LightSwitchLivingRoom::click1_Dn()
{
    if (_lightLivingRoom->status())
    {
        _lightLivingRoom->off();
    }
    else
    {
        _lightLivingRoom->on();
    }
}

void LightSwitchLivingRoom::click1_Db()
{
    _lightLivingRoom->nextstep();
}

void LightSwitchLivingRoom::click1_Long()
{
}