#ifndef LightSwitchBedRoom_h
#define LightSwitchBedRoom_h

#include "Arduino.h"
#include "LightSwitch.h"
#include "LightSwitchDb.h"
#include "Light.h"

class Light;

class LightSwitchBedRoom : public LightSwitch, public LightSwitchDb
{

public:
  LightSwitchBalcony(Light *lightBalcony);

  void click0_Dn();
  void click0_Db();
  void click0_Long();

  void click1_Dn();
  void click1_Db();
  void click1_Long();

  void click0_0_Dn();
  void click0_0_Db();
  void click0_0_Long();

  void click0_1_Dn();
  void click0_1_Db();
  void click0_1_Long();

  void click1_0_Dn();
  void click1_0_Db();
  void click1_0_Long();

  void click1_1_Dn();
  void click1_1_Db();
  void click1_1_Long();

private:
  uint8_t _pin[6];
  Light *_lightBalcony;
};

#endif