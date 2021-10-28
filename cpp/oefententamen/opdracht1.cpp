#include <iostream>
#include "tentamen.h"

void print_banier(int hoogte, int breedte)
{
  int beginPunten = hoogte - (breedte / 2);
  int start = 0;
  int eind = 0;
  int ruimte = 0;
  for (int i = 0; i < hoogte; i++)
  {
        if(i >= beginPunten){
        ruimte++;
        start = (breedte - ruimte) /2;
        eind = breedte - start;
    }
    for (int j = 0; j < breedte; j++)
    {
      if(i >= beginPunten && j >= start && j < eind){
        std::cout << " ";
      }
      else{
        std::cout << "#";
      }
    }
    std::cout << std::endl;

  }
}

void freeplay1()
{
  // Hier mag je code typen om dingen uit te proberen.
  // Deze wordt niet beoordeeld.
}

void opdracht1()
{
  std::cout << std::endl
            << "Opdracht 1" << std::endl;
  freeplay1();
  std::cout << "Student versie:" << std::endl;
  print_banier(6, 5);
  std::cout << "zou er zo uit moeten zien:" << std::endl
            << "#####" << std::endl
            << "#####" << std::endl
            << "#####" << std::endl
            << "#####" << std::endl
            << "## ##" << std::endl
            << "#   #" << std::endl;
}
