#include <Arduino.h>
#include "SwichesController/SwichesControllerLibrary.h"

SwitchesControllerLib banan;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  
}

void loop() {
  banan.setSwitch(4,LOW);
  delay(1000);
  banan.setSwitch(4,HIGH);
  delay(1000);
}
