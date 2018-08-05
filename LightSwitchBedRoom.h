#ifndef LightSwitchBedRoom_h
#define LightSwitchBedRoom_h

#include "Arduino.h"
#include "LightSwitch.h"
#include "LightSwitchDb.h"
#include "Light.h"

class Light;
#define MY_COUNT_LIGHTS 17

class LightSwitchBedRoom : public LightSwitch, public LightSwitchDb
{

public:
  int _lightCount = MY_COUNT_LIGHTS;
  LightSwitchBedRoom(Light *lightBedRoom, Light *braceBedRoom0, Light *braceBedRoom1, Light *lightHall);

  void setLights(Light *lights[MY_COUNT_LIGHTS]);
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
  Light *_lightBedRoom;
  Light *_braceBedRoom0;
  Light *_braceBedRoom1;
  Light *_lightHall;

  Light *_lights[MY_COUNT_LIGHTS];
  bool statuses[MY_COUNT_LIGHTS];
};

#endif