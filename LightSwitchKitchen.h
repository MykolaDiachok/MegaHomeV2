#ifndef LightSwitchKitchen_h
#define LightSwitchKitchen_h

#include "Arduino.h"
#include "LightSwitch.h"
#include "LightSwitchDb.h"
#include "Light.h"

class Light;


class LightSwitchKitchen : public LightSwitch, public LightSwitchDb
{

  public:
    LightSwitchKitchen(Light *lightKitchen, Light *lightKitchen1,Light *lightKitchen2,Light *lightKitchenDots, Light *lightBalcony, Light *lightHall);

    void click0_Dn();
    void click0_Db();
    void click0_Long();

    void click1_Dn();
    void click1_Db();
    void click1_Long();

    //TODO пока без виртульного класса, решить нужно ли его делать
    // Сделал так решил не делать через виртуальный класс
    void click1_0_Dn();
    void click1_0_Db();
    void click1_0_Long();

  private:
    uint8_t _pin[3];
    Light *_lightKitchen;
    Light *_lightKitchen1;
    Light *_lightKitchen2;
    Light *_lightKitchenDots;
    Light *_lightBalcony;
    Light *_lightHall;
};

#endif