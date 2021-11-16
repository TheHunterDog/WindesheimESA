#include "Kat.h"
#include <iostream>

Kat::Kat(const char naam[])
{
    int i = 0;
    this->naam = new char[MAX_NAAM_LENGTE];
    do
    {
        this->naam[i] = naam[i];
        i++;
    } while (naam[i] != '\0');
}


void Kat::praat()
{
    std::cout << naam << " zegt miauw." << std::endl;
}

Kat::~Kat(){
  delete this->naam;
}