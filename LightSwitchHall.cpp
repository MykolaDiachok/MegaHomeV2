#include "Arduino.h"
#include "LightSwitchHall.h"
#include "ConstInit.h"
#include "Light.h"



LightSwitchHall::LightSwitchHall(Light *lightHall)
{
    _lightHall = lightHall;
}


void LightSwitchHall::setLights(Light *lights[MY_COUNT_LIGHTS])
{
    _lightCount = MY_COUNT_LIGHTS;
    for (int i = 0; i < MY_COUNT_LIGHTS; i++)
    {
        _lights[i] = lights[i];
    }
}

void LightSwitchHall::click0_Dn()
{
    _lightHall->nextstep();
}
void LightSwitchHall::click0_Db()
{
}

void LightSwitchHall::click0_Long()
{
}

void LightSwitchHall::click1_Db()
{
}

void LightSwitchHall::click1_Dn()
{
    Serial.println("click1_Dn-start");
    // тушим все лампочки
    for (int i = 0; i < MY_COUNT_LIGHTS; i++)
    {
        statuses[i] = _lights[i]->status();
        _lights[i]->off();
        Serial.println(i);
    }
}

void LightSwitchHall::click1_Long()
{
    Serial.println("click1_Long-start");
    for (int i = 0; i < MY_COUNT_LIGHTS; i++)
    {
        if (statuses[i])
        {
            Serial.print("set on");
            _lights[i]->on();
        }
        else
        {
            Serial.print("set off");
            _lights[i]->off();
        }
        Serial.println(i);
    }
}