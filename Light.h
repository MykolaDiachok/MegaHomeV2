#ifndef Light_h
#define Light_h

#include "Arduino.h"

class Light
{
  public:
    Light(uint8_t pin);
    Light();
    void on();
    void off();
    void nextstep();
    uint8_t status();
  private:
    uint8_t _pin;
};

#endif