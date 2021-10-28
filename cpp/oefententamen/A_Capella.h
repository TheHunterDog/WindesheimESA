#ifndef MUZIEKSTUK___H
#include "Muziekstuk.h"
#endif
#ifndef A_Capella___H
#define A_Capella___H

class A_Capella : public Muziekstuk
{
  public:
    A_Capella(const char titel[], const char componist[]);
    void uitvoeren();
    // using Muziekstuk::GetComponist;
    // using Muziekstuk::GetTitel;

};

#endif