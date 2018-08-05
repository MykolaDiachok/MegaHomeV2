#ifndef ConstInit_h
#define ConstInit_h

#include "Arduino.h"
#include "Light.h"
#include "Ventilator.h"


// #define COUNT_LIGHTS 17

class ConstInit
{
public:
  static const int COUNT_LIGHTS = 17;

  static const uint8_t HALL_SW0 = 1;   // выключатель в холе кнопка 0
  static const uint8_t HALL_SW1 = 2;   // выключатель в холе кнопка 1
  static const uint8_t HALL_LIGHT = 3; // коридор свет

  static const uint8_t BATH_ROOM_SW0 = 4;   // ванная выключатель
  static const uint8_t BATH_ROOM_LIGHT = 5; // ванная свет
  static const uint8_t BATH_ROOM_FAN = 6;   // ванная вентилятор
  static const uint8_t BATH_ROOM_BRACE = 7; // ванная бра

  static const uint8_t WC_SW0 = 8;    // туалет выключатель
  static const uint8_t WC_LIGHT = 9;  // теалет свет
  static const uint8_t WC_FAN = 10;   // туалет выключатель
  static const uint8_t WC_BRACE = 11; // туалет бра

  static const uint8_t KITCHEN_SW0_0 = 12; // кухня выключатель кнопка 0
  static const uint8_t KITCHEN_SW0_1 = 13; // кухня выключатель кнопка 1
  static const uint8_t KITCHEN_SW1_0 = 14; // кухня выключатель кнопка возле поверхности кнопка 0
  static const uint8_t KITCHEN_LIGHT = 15;
  static const uint8_t KITCHEN_LIGHT1 = 16;
  static const uint8_t KITCHEN_LIGHT2 = 17;
  static const uint8_t KITCHEN_LIGHT_DOTS = 18;

  static const uint8_t BALCONY_SW0 = 19;
  static const uint8_t BALCONY_LIGHT = 20;

  static const uint8_t LIVING_ROOM_SW0 = 21;
  static const uint8_t LIVING_ROOM_SW1 = 22;
  static const uint8_t LIVING_ROOM_LIGHT = 23;
  static const uint8_t LIVING_ROOM_BRACE = 24;

  static const uint8_t BED_ROOM_SW0_0 = 25;
  static const uint8_t BED_ROOM_SW0_1 = 26;
  static const uint8_t BED_ROOM_SW1_0 = 27;
  static const uint8_t BED_ROOM_SW1_1 = 28;
  static const uint8_t BED_ROOM_SW2_0 = 29;
  static const uint8_t BED_ROOM_SW2_1 = 30;
  static const uint8_t BED_ROOM_LIGHT = 31;
  static const uint8_t BED_ROOM_BRACE0 = 32;
  static const uint8_t BED_ROOM_BRACE1 = 33;

  static const uint8_t CHILD_ROOM_SW0_0 = 34;
  static const uint8_t CHILD_ROOM_SW0_1 = 35;
  static const uint8_t CHILD_ROOM_SW1_0 = 36;
  static const uint8_t CHILD_ROOM_SW1_1 = 37;
  static const uint8_t CHILD_ROOM_LIGHT = 38;
  static const uint8_t CHILD_ROOM_BRACE = 39;

  static const uint8_t IN_OUT_DOOR_SENSOR = 40; // TODO не забуть установить сенсор дверей




  ConstInit();
};

#endif