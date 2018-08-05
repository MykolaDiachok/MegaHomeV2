#include "Arduino.h"
#include "LightSwitchBathRoom.h"
#include "Light.h"
#include "Ventilator.h"

LightSwitchBathRoom::LightSwitchBathRoom(Light *lightBathRoom, Light *braceBathRoom, Ventilator *fanBathRoom)
{
    _lightBathRoom = lightBathRoom;
    _braceBathRoom = braceBathRoom;
    _fanBathRoom = fanBathRoom;
}

void LightSwitchBathRoom::click0_Dn()
{
    if (_lightBathRoom->status())
    {
        _lightBathRoom->off();
        //TODO включить когда сделают разводку
        //_braceBathRoom->off();
        //_fanBathRoom->off();
    }
    else
    {
        _lightBathRoom->on();
        //TODO включить когда сделают разводку
        //_braceBathRoom->on();
        //_fanBathRoom->on();
    }
}

void LightSwitchBathRoom::click0_Db()
{
    _lightBathRoom->nextstep();
}

void LightSwitchBathRoom::click0_Long()
{
}