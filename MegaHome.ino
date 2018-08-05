#include <Button.h>
#include "ConstInit.h"
#include "Light.h"
#include "Ventilator.h"
#include "LightSwitchHall.h"
#include "LightSwitchBathRoom.h"
#include "LightSwitchWC.h"
#include "LightSwitchBalcony.h"
#include "LightSwitchKitchen.h"
#include "LightSwitchLivingRoom.h"

Button hButton;

ConstInit constinit;

Light hallLight(constinit.HALL_LIGHT);

Light bathRoomLight(constinit.BATH_ROOM_LIGHT);
Light bathRoomBrace(constinit.BATH_ROOM_BRACE);
Ventilator bathRoomFan(constinit.BATH_ROOM_FAN);

Light wcLight(constinit.WC_LIGHT);
Light wcBrace(constinit.WC_BRACE);
Ventilator wcFan(constinit.WC_FAN);

Light kitchenLight(constinit.KITCHEN_LIGHT);
Light kitchenLight1(constinit.KITCHEN_LIGHT1);
Light kitchenLight2(constinit.KITCHEN_LIGHT2);
Light kitchenLightDots(constinit.KITCHEN_LIGHT_DOTS);

Light balconyLight(constinit.BALCONY_LIGHT);

Light livingRoomLight(constinit.LIVING_ROOM_LIGHT);
Light livingRoomBrace(constinit.LIVING_ROOM_BRACE);

Light bedRoomLight(constinit.BED_ROOM_LIGHT);
Light bedRoomBrace0(constinit.BED_ROOM_BRACE0);
Light bedRoomBrace1(constinit.BED_ROOM_BRACE1);

Light childRoomLight(constinit.CHILD_ROOM_LIGHT);
Light childRoomBrace(constinit.CHILD_ROOM_BRACE);

//2 кнопки
LightSwitchHall switchHall(&hallLight); // делаю последним так как выключатели отвечают за весь свет
// 1 кнопка
LightSwitchBathRoom switchBathRoom(&bathRoomLight, &bathRoomBrace, &bathRoomFan);
// 1 кнопка
LightSwitchWC switchWC(&wcLight, &wcBrace, &wcFan);

// 3 кнопки (1 двойная, 1 одинарная)
LightSwitchKitchen switchKitchen(&kitchenLight, &kitchenLight1, &kitchenLight2, &kitchenLightDots, &balconyLight, &hallLight);

// 1 кнопка
LightSwitchBalcony switchBalcony(&balconyLight);

// 2 buttons
LightSwitchLivingRoom switchLivingRoom(&livingRoomLight, &livingRoomBrace);

void setup()
{
    Serial.begin(9600);

#pragma region ArrayOfLights
    Light *lights[switchHall._lightCount];
    lights[0] = &hallLight;
    lights[1] = &bathRoomLight;
    lights[2] = &bathRoomBrace;
    lights[3] = &wcLight;
    lights[4] = &wcBrace;
    lights[5] = &kitchenLight;
    lights[6] = &kitchenLight1;
    lights[7] = &kitchenLight2;
    lights[8] = &kitchenLightDots;
    lights[9] = &balconyLight;
    lights[10] = &livingRoomLight;
    lights[11] = &livingRoomBrace;
    lights[12] = &bedRoomLight;
    lights[13] = &bedRoomBrace0;
    lights[14] = &bedRoomBrace1;
    lights[15] = &childRoomLight;
    lights[16] = &childRoomBrace;

    switchHall.setLights(lights);
#pragma endregion

    hButton.NO(); // N.O. Normal Open
    // hButton.NC(); // N.C. Normal Closed
    //hButton.pullUp();
    hButton.pullDn(); // - подтяжка пинов кнопок к GND
    hButton.duration_bounce(50);
    hButton.duration_click_Db(250);
    hButton.duration_inactivity_Up(5000);
    hButton.duration_inactivity_Dn(1000);
    hButton.duration_press(500);
}

void loop()
{
    // delay(1000);
    // switchHall.click0_Dn();
    // delay(1000);
    // switchHall.click0_Dn();
    // delay(1000);
    // Serial.print("size=");
    // Serial.println(constinit.COUNT_LIGHTS);
    // Serial.println("click1_Long");
    // switchHall.click1_Long();
    // delay(5000);
    Serial.println("click0_Dn");
    switchWC.click0_Dn();
    delay(2000);
    Serial.println("click0_Dn");
    switchWC.click0_Dn();
    delay(2000);
    Serial.println("click0_Db");
    switchWC.click0_Db();
    delay(2000);
    Serial.println("click0_Long");
    switchWC.click0_Long();
    delay(15000);
}
