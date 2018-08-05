#include "Arduino.h"
#include "Light.h"

Light::Light() {}

Light::Light(uint8_t pin)
{
    Serial.print("init light ");

    Serial.print(" = ");
    Serial.println(pin);
    pinMode(pin, OUTPUT);
    _pin = pin;
}

void Light::on()
{
    digitalWrite(_pin, HIGH);
    Serial.print("light=on; pin=");
    Serial.println(_pin);
}

void Light::off()
{
    digitalWrite(_pin, LOW);
    Serial.print("light=off; pin=");
    Serial.println(_pin);
}

void Light::nextstep()
{
    if (status() == HIGH)
    {
        off();
    }
    else
    {
        on();
    }
}

uint8_t Light::status()
{
    return digitalRead(_pin); // TODO нужно проверить!!!! Возможно не работает
}