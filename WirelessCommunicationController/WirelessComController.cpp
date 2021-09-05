#include "WirelessComController.h"

/*
WirelessComController::WirelessComController(){
  Serial.begin(9600);
  _radio.begin();
  _radio.setPALevel(RF24_PA_MIN);
  _radio.stopListening();
}*/

WirelessComController::WirelessComController(){
  
}

void WirelessComController::sendMessage(String message){
  _radio.openWritingPipe(_address);
  _radio.stopListening();
  _radio.write(&message, sizeof(message));
}

String WirelessComController::receiveMessage(){
  _radio.openReadingPipe(0, _address);
  _radio.startListening();
  char text[32] = "";
  if (_radio.available()) {
    _radio.read(&text, sizeof(text));
  }
  return text;
}