#ifndef LightSwitchLivingRoom_h
#define LightSwitchLivingRoom_h

#include "Arduino.h"
#include "LightSwitch.h"
#include "LightSwitchDb.h"
#include "LightSwitch.h"

class Light;


class LightSwitchLivingRoom : public LightSwitch, public LightSwitchDb
{

  public:
    LightSwitchLivingRoom(Light *lightLivingRoom, Light *braceLivingRoom);

    void click0_Dn();
    void click0_Db();
    void click0_Long();

    void click1_Dn();
    void click1_Db();
    void click1_Long();

  private:
    uint8_t _pin[2];
    Light *_lightLivingRoom;
    Light *_braceLivingRoom;
};

#endif