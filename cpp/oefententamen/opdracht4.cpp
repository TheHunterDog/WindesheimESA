#include <iostream>
#include <cstring>
#include "tentamen.h"


// typ hier je antwoord voor vraag 4a:
char* concat(const char tekst1[], const char tekst2[])
{
  char* res = new char[std::strlen(tekst1)+std::strlen(tekst2)];

  for (int i = 0; i < std::strlen(tekst1); i++)
  {
    res[i] = tekst1[i];
  }
  for (int i = 0; i < std::strlen(tekst2); i++)
  {
    res[i + std::strlen(tekst1)] = tekst2[i];
  }
  return res;
  
  
}


void freeplay4()
{
    // Hier mag je code typen om dingen uit te proberen.
    // Deze wordt niet beoordeeld.
    
}


void opdracht4()
{
    std::cout << std::endl << "Opdracht 4" << std::endl;
    freeplay4();
    std::cout << "ABC + OIP = " << concat("ABC","OIP");

}
