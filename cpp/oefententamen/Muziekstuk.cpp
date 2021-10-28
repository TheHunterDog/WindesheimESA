#include "Muziekstuk.h"
#include <iostream>

Muziekstuk::Muziekstuk(const char titel[], const char componist[])
{
    int i = 0;
    this->titel = new char[MAX_NAAM_LENGTE];
    do
    {
        this->titel[i] = titel[i];
        i++;
    } while (titel[i] != '\0');
    i = 0;
    this->componist = new char[MAX_NAAM_LENGTE];
    do
    {
        this->componist[i] = componist[i];
        i++;
    } while (componist[i] != '\0');   
}

void Muziekstuk::uitvoeren()
{
    std::cout << "Het stuk " << titel << " van " 
            << componist << " wordt gespeeld." << std::endl;
}

Muziekstuk::~Muziekstuk(){
  delete[] this->titel;
  delete[] this->componist;
}

char* Muziekstuk::GetComponist(){
  return componist;
}

char* Muziekstuk::GetTitel(){
  return titel;
}