#ifndef LightSwitchHall_h
#define LightSwitchHall_h

#include "Arduino.h"
#include "LightSwitch.h"
#include "LightSwitchDb.h"
#include "Light.h"
#include "ConstInit.h"

class Light;

#define MY_COUNT_LIGHTS 17

class LightSwitchHall : public LightSwitch, public LightSwitchDb
{

public:
  int _lightCount = MY_COUNT_LIGHTS;
  LightSwitchHall(Light *lightHall);
  // Так как данный переключатель находиться в холе, то необходимо что бы он мог выключить свет во всех комнатах.
  // Поэтому получает все лампочки для дальнейшей обработки
  void setLights(Light *lights[MY_COUNT_LIGHTS]);
  void click0_Dn();
  void click0_Db();
  void click0_Long();

  void click1_Dn();
  void click1_Db();
  void click1_Long();

private:
  uint8_t _pin[2];
  Light *_lightHall;
  Light *_lights[MY_COUNT_LIGHTS];
  bool statuses[MY_COUNT_LIGHTS];
};

#endif