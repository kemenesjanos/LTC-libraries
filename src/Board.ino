#include <Arduino.h>
#include "IrRemoteController/RemoteControllerLibrary.h"

RemoteControllerLib lib;

void setup(){
  Serial.begin(9600);
}

void loop(){
  Serial.println(lib.recivedButton());
  delay(1000);
}