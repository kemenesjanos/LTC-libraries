#ifndef sc
#define sc

#if (ARDUINO >= 100)
  #include "Arduino.h"
#else
  #include "WProgram.h"
#endif

#include <ShiftRegister74HC595.h>

class MotorControllerLib{
  public:
    MotorControllerLib();
    void turnRight(int degree, int speed);
    void turnLeft(int degree, int speed);
  private:
    const uint8_t _in1_Sh = 4;
    const uint8_t _in2_Sh = 5;
    const uint8_t _in3_Sh = 6;
    const uint8_t _in4_Sh = 7;
    const uint8_t _serialDataPin = 9; // DS
    const uint8_t _clockPin = 10; // SHCP
    const uint8_t _latchPin = 8; // STCP
    ShiftRegister74HC595<2> _sr = ShiftRegister74HC595<2>(_serialDataPin, _clockPin, _latchPin);
};

#endif
