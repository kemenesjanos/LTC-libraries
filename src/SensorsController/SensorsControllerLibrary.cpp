#include "SensorsControllerLibrary.h"
#include <ShiftRegister74HC595.h>

SensorsControllerLib::SensorsControllerLib(){
  ShiftRegister74HC595<2> sr(_serialDataPin, _clockPin, _latchPin);
}

int getSensorValue(int serialNumber){
    
}

