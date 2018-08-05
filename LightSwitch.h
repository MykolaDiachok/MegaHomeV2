#ifndef LightSwitch_h
#define LightSwitch_h

#include "Arduino.h"

class LightSwitch
{
  public:
    virtual void click0_Dn();
    virtual void click0_Db();
    virtual void click0_Long();
  private:
    uint8_t _pin;
};

#endif