#ifndef LightSwitchWC_h
#define LightSwitchWC_h

#include "Arduino.h"
#include "LightSwitch.h"
#include "LightSwitchDb.h"
#include "Light.h"
#include "Ventilator.h"

class Light;
class Ventilator;

class LightSwitchWC : public LightSwitch
{

  public:
    LightSwitchWC(Light *lightWC, Light *braceWC, Ventilator *fanWC);

    void click0_Dn();
    void click0_Db();
    void click0_Long();

  private:
    uint8_t _pin[1];
    Light *_lightWC;
    Light *_braceWC;
    Ventilator *_fanWC;
};

#endif