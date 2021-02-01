#ifndef rc
#define rc

#if (ARDUINO >= 100)
  #include "Arduino.h"
#else
  #include "WProgram.h"
#endif

class RemoteControllerLib{
  public:
    RemoteControllerLib();
    String recivedHEX();
  private:
    const uint8_t _signPin = 6;
};

#endif
