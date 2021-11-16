#include <iostream>
#include "tentamen.h"
#include "Kat.h"
#include "Siamees.h"



void freeplay5()
{
    // Hier mag je code typen om dingen uit te proberen.
    // Deze wordt niet beoordeeld.
    
}


void opdracht5()
{
    std::cout << std::endl << "Opdracht 5" << std::endl;
    freeplay5();
    // typ hier je antwoord voor vraag 5c:
    Kat *ka = new Kat("ABC");
    ka->praat();
    Siamees *sia =  new Siamees("DEF");
    sia->praat();
    
}
