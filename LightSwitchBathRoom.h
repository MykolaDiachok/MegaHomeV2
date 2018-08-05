#ifndef LightSwitchBathRoom_h
#define LightSwitchBathRoom_h

#include "Arduino.h"
#include "LightSwitch.h"
#include "LightSwitchDb.h"
#include "Light.h"
#include "Ventilator.h"

class Light;
class Ventilator;

class LightSwitchBathRoom : public LightSwitch
{

  public:
    LightSwitchBathRoom(Light *lightBathRoom, Light *braceBathRoom, Ventilator *fanBathRoom);

    void click0_Dn();
    void click0_Db();
    void click0_Long();

  private:
    uint8_t _pin[1];
    Light *_lightBathRoom;
    Light *_braceBathRoom;
    Ventilator *_fanBathRoom;
};

#endif