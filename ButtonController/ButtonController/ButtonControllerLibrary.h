#ifndef bc
#define bc

  #include "Arduino.h"

class ButtonControllerLib{
  public:
    ButtonControllerLib();
    bool isButtonPushed(int serial_number);
  private:
    const uint8_t _inputPin = A0;
};

#endif
