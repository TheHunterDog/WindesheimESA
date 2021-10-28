#include <iostream>
#include "tentamen.h"
#define BITS 8

int controlegetal(unsigned char invoer)
{
    // typ hier je antwoord voor vraag 3:
    int waarde = 0;
    for (int i = 0; i < BITS; i++)
    {
      if(invoer & (1 << i)){
        if(i % 2 == 0){
        waarde++;
        }
        else{
        waarde--;
        }
      }
    }
    return waarde;
}


void freeplay3()
{
    // Hier mag je code typen om dingen uit te proberen.
    // Deze wordt niet beoordeeld.
    
}


void opdracht3()
{
    std::cout << std::endl << "Opdracht 3" << std::endl;
    freeplay3();
    
    std::cout << controlegetal(0x2A) << " moet zijn -3" << std::endl;
    std::cout << controlegetal(0x56) << " moet zijn  2" << std::endl;
    std::cout << controlegetal(0x55) << " moet zijn  4" << std::endl;
    std::cout << controlegetal(0xFF) << " moet zijn  0" << std::endl;
    std::cout << controlegetal(0x96) << " moet zijn  0" << std::endl;
    std::cout << controlegetal(0xE2) << " moet zijn -2" << std::endl;
    std::cout << controlegetal(0x80) << " moet zijn -1" << std::endl;
    std::cout << controlegetal(0x5D) << " moet zijn  3" << std::endl;
}
