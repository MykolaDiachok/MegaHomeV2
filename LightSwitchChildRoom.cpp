#include "Arduino.h"
#include "LightSwitchChildRoom.h"
#include "ConstInit.h"
#include "Light.h"

LightSwitchChildRoom::LightSwitchChildRoom(Light *lightChildRoom, Light *braceChildRoom, Light *lightHall)
{
    _lightChildRoom = lightChildRoom;
    _braceChildRoom = braceChildRoom;
    _lightHall = lightHall;
}

void LightSwitchChildRoom::click0_Dn()
{
    _lightChildRoom->nextstep();
}

void LightSwitchChildRoom::click0_Db()
{
    if (_lightChildRoom->status())
    {
        _lightChildRoom->off();
        _braceChildRoom->off();
    }
    else
    {
        _lightChildRoom->on();
        _braceChildRoom->on();
    }
}

void LightSwitchChildRoom::click0_Long()
{
}

void LightSwitchChildRoom::click1_Dn()
{
    _lightHall->nextstep();
}

void LightSwitchChildRoom::click1_Db()
{
    if (_lightChildRoom->status())
    {
        _lightChildRoom->off();
        _braceChildRoom->off();
        _lightHall->on();
    }
    else
    {
        _lightChildRoom->on();
        _braceChildRoom->on();
        _lightHall->off();
    }
}
void LightSwitchChildRoom::click1_Long() {}

void LightSwitchChildRoom::click0_0_Dn()
{
    _braceChildRoom->nextstep();
}
void LightSwitchChildRoom::click0_0_Db()
{
}
void LightSwitchChildRoom::click0_0_Long() {}

void LightSwitchChildRoom::click0_1_Dn()
{
    if (_braceChildRoom->status())
    {
        _lightChildRoom->off();
    }
}
void LightSwitchChildRoom::click0_1_Db()
{
    _lightChildRoom->nextstep();
}
void LightSwitchChildRoom::click0_1_Long()
{
}
