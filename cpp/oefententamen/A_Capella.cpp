#include "A_Capella.h"
#include <iostream>

void A_Capella::A_Capella::uitvoeren()
{
  std::cout<< "Het stuk " << GetComponist() << " van " << GetComponist() << " wordt gezongen";
}

    A_Capella::A_Capella(const char titel[], const char componist[]) : Muziekstuk(titel,componist){

    }