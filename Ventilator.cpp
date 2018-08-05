#include "Arduino.h"
#include "Ventilator.h"

//TODO доделать время отключения
Ventilator::Ventilator(uint8_t pin)
{
    Serial.print("init ventilator = ");
    Serial.println(pin);
    pinMode(pin, OUTPUT);
    _pin = pin;
}

Ventilator::Ventilator() {}

void Ventilator::on()
{
    //TODO включить когда сделают разводку
    //digitalWrite(_pin, HIGH); 
    Serial.print("ventilator=on; pin=");
    Serial.println(_pin);
}

void Ventilator::off()
{
    ////TODO включить когда сделают разводку
    //digitalWrite(_pin, LOW);
    Serial.print("ventilator=off; pin=");
    Serial.println(_pin);
}

uint8_t Ventilator::status()
{
    return digitalRead(_pin); // TODO нужно проверить!!!! Возможно не работает
}