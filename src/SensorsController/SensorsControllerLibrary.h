#ifndef lc
#define lc

#if (ARDUINO >= 100)
  #include "Arduino.h"
#else
  #include "WProgram.h"
#endif

class SensorsControllerLib{
  public:
    SensorsControllerLib();
    int getSensorValue(int serialNumber);
  private:
    const uint8_t _inputPin = A3;
    const uint8_t _serialDataPin = 9; // DS
    const uint8_t _clockPin = 10; // SHCP
    const uint8_t _latchPin = 8; // STCP
};

#endif
