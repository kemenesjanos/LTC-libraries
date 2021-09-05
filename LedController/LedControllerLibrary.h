//Ha nincs definiálva az lc akkor...
#ifndef lcl
//Definiálom
#define lcl

#if (ARDUINO >= 100)
  #include <Arduino.h>
#else
  #include "WProgram.h"
#endif

#include <ShiftRegister74HC595.h>

enum colors {
  Red,
  Green,
  Blue,
  Yellow,
  Purple,
  LightBlue,
  White,
  Nothing
};

class LedControllerLib{
  public:
    LedControllerLib();
    void setColor(colors color);
    void setColor(bool red, bool green, bool blue);
  private:
    const uint8_t _serialDataPin = 9; // DS
    const uint8_t _clockPin = 10; // SHCP
    const uint8_t _latchPin = 8; // STCP
    ShiftRegister74HC595<2> _sr = ShiftRegister74HC595<2>(_serialDataPin, _clockPin, _latchPin);
    const uint8_t _redPin = 13;
    const uint8_t _greenPin = 14;
    const uint8_t _bluePin = 15;
  
};

#endif
