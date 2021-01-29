#include <Arduino.h>
#include "LedController/LedControllerLibrary.h"
#include "SensorsController/SensorsControllerLibrary.h"
#include "JoystickController/JoystickControllerLibrary.h"

JoystickControllerLib banan;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  Serial.println( banan.getJoystickYCoord());
  delay(500);
}
