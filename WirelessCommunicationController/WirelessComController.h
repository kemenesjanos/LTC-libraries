#ifndef wc
#define wc

#if (ARDUINO >= 100)
  #include "Arduino.h"
#else
  #include "WProgram.h"
#endif

#include <SPI.h>
#include <nRF24L01.h>
#include <RF24.h>

class WirelessComController{
  public:
    WirelessComController();
    void sendMessage(String message);
    String receiveMessage();
  private:
    RF24 _radio = RF24(7, 8);
    const byte _address[6] = "00001";
};

#endif
