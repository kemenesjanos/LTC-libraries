#include <Arduino.h>
#include "LedController/LedControllerLibrary.h"
#include "SensorsController/SensorsControllerLibrary.h"

LedControllerLib alma;
SensorsControllerLib korte;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  Serial.println(korte.getSensorValue(2));
  delay(500);
}
