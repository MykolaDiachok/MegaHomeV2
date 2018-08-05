#ifndef LightSwitchChildRoom_h
#define LightSwitchChildRoom_h

#include "Arduino.h"
#include "LightSwitch.h"
#include "LightSwitchDb.h"
#include "Light.h"

class Light;

class LightSwitchChildRoom : public LightSwitch, public LightSwitchDb
{

public:
  LightSwitchChildRoom(Light *lightChildRoom, Light *braceChildRoom, Light *lightHall);

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

private:
  uint8_t _pin[3];
  Light *_lightChildRoom;
  Light *_braceChildRoom;
  Light *_lightHall;
};

#endif