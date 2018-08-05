#ifndef LightSwitchBalcony_h
#define LightSwitchBalcony_h

#include "Arduino.h"
#include "LightSwitch.h"
#include "Light.h"

class Light;


class LightSwitchBalcony : public LightSwitch
{

  public:
    LightSwitchBalcony(Light *lightBalcony);

    void click0_Dn();
    void click0_Db();
    void click0_Long();

  private:
    uint8_t _pin[1];
    Light *_lightBalcony;
};

#endif