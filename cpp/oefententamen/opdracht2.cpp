#include <iostream>
#include "tentamen.h"
#include <fstream>
#include <cstring>
#define TELLING 36

void controleer_roulette(const char *invoerfilenaam, const char *uitvoerfilenaam)
{
  std::ifstream input;
  input.open(invoerfilenaam);
  if(input.is_open()){
    int nummers[TELLING] = {};
    int getal;
    while(!input.eof()){
      input >> getal;
      nummers[getal]++;
    }
    input.close();

    std::ofstream output;
    output.open(uitvoerfilenaam);
    if(output.is_open()){
      for (int i = 0; i <= TELLING; i++)
      {
        output << "GETAL " << i << " Is " << nummers[i] << "keer gevallen"<<std::endl;
      }
      output.close();
    }
    else{
      output.close();
      std::cout << "Fout met openen van het output bestand"<< std::endl;
    }
    
  }
  else {
    input.close();
      std::cout << "Fout met openen van het input bestand"<< std::endl;

  }


}
void freeplay2()
{
  // Hier mag je code typen om dingen uit te proberen.
  // Deze wordt niet beoordeeld.
}

void opdracht2()
{
  std::cout << std::endl
            << "Opdracht 2" << std::endl;
  freeplay2();
  // in invoer.txt staan de getallen uit het voorbeeld:
  controleer_roulette("invoer.txt", "uitvoer.txt");
}
