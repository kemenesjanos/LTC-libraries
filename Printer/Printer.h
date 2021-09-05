#ifndef PRINTER_LIBRARY_H
#define PRINTER_LIBRARY_H

#if (ARDUINO >= 100)
  #include <Arduino.h>
#else
  #include "WProgram.h"
#endif

class Printer{
  public:
    void printer(int szam);
};

#endif
