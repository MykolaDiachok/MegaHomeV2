#ifndef LightSwitchDb_h
#define LightSwitchDb_h

#include "Arduino.h"

class LightSwitchDb
{
  public:
    virtual void click1_Dn();
    virtual void click1_Db();
    virtual void click1_Long();  
};

#endif