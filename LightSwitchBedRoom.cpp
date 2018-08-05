#include "Arduino.h"
#include "LightSwitchBedRoom.h"
#include "ConstInit.h"
#include "Light.h"

LightSwitchBedRoom::LightSwitchBedRoom(Light *lightBedRoom, Light *braceBedRoom0, Light *braceBedRoom1, Light *lightHall)
{
    _lightBedRoom = lightBedRoom;
    _braceBedRoom0 = braceBedRoom0;
    _braceBedRoom1 = braceBedRoom1;
    _lightHall = lightHall;
}

void LightSwitchBedRoom::setLights(Light *lights[MY_COUNT_LIGHTS])
{
    _lightCount = MY_COUNT_LIGHTS;
    for (int i = 0; i < MY_COUNT_LIGHTS; i++)
    {
        _lights[i] = lights[i];
    }
}

void LightSwitchBedRoom::click0_Dn()
{
    _lightBedRoom->nextstep();
}

void LightSwitchBedRoom::click0_Db()
{
    _lightBedRoom->off();
    _braceBedRoom0->off();
    _braceBedRoom1->off();
}

void LightSwitchBedRoom::click0_Long()
{
}

void LightSwitchBedRoom::click1_Dn() {
    _lightHall->nextstep();
}
void LightSwitchBedRoom::click1_Db() {}
void LightSwitchBedRoom::click1_Long() {}

void LightSwitchBedRoom::click0_0_Dn() {}
void LightSwitchBedRoom::click0_0_Db() {}
void LightSwitchBedRoom::click0_0_Long() {}

void LightSwitchBedRoom::click0_1_Dn() {}
void LightSwitchBedRoom::click0_1_Db() {}
void LightSwitchBedRoom::click0_1_Long() {}

void LightSwitchBedRoom::click1_0_Dn() {}
void LightSwitchBedRoom::click1_0_Db() {}
void LightSwitchBedRoom::click1_0_Long() {}

void LightSwitchBedRoom::click1_1_Dn() {}
void LightSwitchBedRoom::click1_1_Db() {}
void LightSwitchBedRoom::click1_1_Long() {}