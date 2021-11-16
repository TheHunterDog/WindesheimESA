#include <iostream>
#include "tentamen.h"


// typ hier je antwoord voor vraag 4a:
int* maak_array(const int n, const int startwaarde)
{
  int *arr = new int[n];
  for (int i = 0; i < n; i++)
  {
    arr[i] = startwaarde+i;
  }
  return arr;
  
}

// typ hier je antwoord voor vraag 4b:
void print_array(int *arr, const int n)
{
  for (int i = 0; i < n; i++)
  {
    // TODO: Verbeter
    std::cout << i + 1 << ":"<< arr[i] << std::endl;
  }
  
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
    // typ hier je antwoord voor vraag 4c:
  print_array(maak_array(3,15),3);
}
