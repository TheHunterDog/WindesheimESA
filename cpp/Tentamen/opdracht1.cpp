#include <iostream>
#include "tentamen.h"


void print_huis(int breedte, int hoogte)
{
    // typ hier je antwoord voor vraag 1:
  int ruimteomheen = breedte / 2;
for (int y = 0; y < hoogte; y++)
{
  for (int x = 0; x < breedte; x++)
  {
    if(x >= ruimteomheen && x < (breedte - ruimteomheen)){
      std::cout<<"#";
    }
    else{
      std::cout << " ";
    }
  }
  ruimteomheen--;
  std::cout << std::endl;
}

  for (int y = 0; y < hoogte - (breedte / 2); y++)
  {
    for (int x = 0; x < breedte; x++)
    {
            std::cout << "#";
    }
    std::cout<<std::endl;
    
  }
  
}


void freeplay1()
{
    // Hier mag je code typen om dingen uit te proberen.
    // Deze wordt niet beoordeeld.

}

void opdracht1_demo() {
    std::cout << ("Opgave 1: Demo") << std::endl;
    std::cout << ("==========================================\nprint_huis(7, 5):\n");
    print_huis(7, 5);
    std::cout << ("moet zijn:\n   #\n  ###\n #####\n#######\n#######\n");
    std::cout << ("==========================================\nprint_huis(5, 6):\n");
    print_huis(5, 6);
    std::cout << ("moet zijn:\n  #\n ###\n#####\n#####\n#####\n#####\n");
    std::cout << ("==========================================\nprint_huis(3, 3):\n");
    print_huis(3, 3);
    std::cout << ("moet zijn:\n #\n###\n###\n");
    std::cout << ("==========================================\nprint_huis(3, 8):\n");
    print_huis(3, 8);
    std::cout << ("moet zijn:\n #\n###\n###\n###\n###\n###\n###\n###\n");
    std::cout << ("==========================================\nprint_huis(19, 16):\n");
    print_huis(19, 16);
    std::cout << ("moet zijn:\n         #\n        ###\n       #####\n      #######\n     #########\n    ###########\n   #############\n  ###############\n #################\n###################\n###################\n###################\n###################\n###################\n###################\n###################\n");
    std::cout << ("==========================================\nprint_huis(9, 7):\n");
    print_huis(9, 7);
    std::cout << ("moet zijn:\n    #\n   ###\n  #####\n #######\n#########\n#########\n#########\n");
    std::cout << ("==========================================\nprint_huis(11, 6):\n");
    print_huis(11, 6);
    std::cout << ("moet zijn:\n     #\n    ###\n   #####\n  #######\n #########\n###########\n");
    std::cout << ("==========================================\n\n");
}


void opdracht1()
{
    std::cout << std::endl << "Opdracht 1" << std::endl;
    // freeplay1();
    // print_huis(3,3);
    // je mag de volgende functie in en uit commentaar zetten voor een demo van alle voorbeelden:
    opdracht1_demo();
}
