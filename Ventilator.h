#ifndef Ventilator_h
#define Ventilator_h

#include "Arduino.h"

class Ventilator
{
  public:
    Ventilator(uint8_t pin);
    Ventilator();
    void on();
    void off();
    uint8_t status();
  private:
    uint8_t _pin;
};

#endif