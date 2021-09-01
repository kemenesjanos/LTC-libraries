#include "Arduino.h"
#include "LedController/LedControllerLibrary.h"

LedControllerLib alma = LedControllerLib();

void setup()
{
    Serial.begin(9600);
}

void loop()
{
    alma.setColor(false, false, false);
}

