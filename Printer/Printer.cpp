//Mivel ugyanabban a mappában van, ezért ", ha pl. a library mappába tesszük, akkor <>.
#include "Printer.h"

void Printer::printer(int szam){
  //Serial.begin(9600);
  Serial.println(szam);
}