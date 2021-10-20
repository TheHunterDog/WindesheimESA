#include <iostream>

int* genArr(int n){
  int* a = new int[n];
  for (int i = 0; i < n; i++)
  {
    a[i] = i+1;
  }
  return a;
}

int main(int argc, char const *argv[])
{
  int* abc = genArr(13);
  for (int i = 0; i < 13; i++)
  {
    std::cout<<abc[i]<<std::endl;
  }
  delete[] abc;
  return 0;
}
