#include <iostream>
#include "tentamen.h"
#include "Muziekstuk.h"
#include "A_Capella.h"



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

    Muziekstuk* muzs = new Muziekstuk("Lied","Willie");
    muzs->uitvoeren();
    delete muzs;

    A_Capella* AcS = new A_Capella("Song","Brenda");
    AcS->uitvoeren();
    delete AcS;

}
