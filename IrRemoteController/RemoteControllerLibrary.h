#ifndef rc
#define rc

#if (ARDUINO >= 100)
  #include "Arduino.h"
#else
  #include "WProgram.h"
#endif

#include <IRremote.h>

enum buttons{
  None,
  CHm,
  CH,
  CHp,
  Prev,
  Next,
  Play,
  VolDown,
  VolUp,
  EQ,
  Zero,
  Hundred,
  TwoHundred,
  One,
  Two,
  Three,
  Four,
  Five,
  Six,
  Seven,
  Eight,
  Nine
};

class RemoteControllerLib{
  public:
    RemoteControllerLib();
    uint32_t recivedHEX();
    buttons recivedButton();
  private:
    const int _recvPin = 6;
    buttons _key_value = None;
    IRrecv irrecv = IRrecv(_recvPin);
    decode_results results;
};

#endif
