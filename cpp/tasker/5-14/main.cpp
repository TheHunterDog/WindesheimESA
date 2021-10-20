#include <iostream>

int main(int argc, char const *argv[])
{
  int n = 2;

  int *arr = new int[n];
  for (size_t i = 0; i < n; i++)
  {
    arr[i] = i;
    std::cout<< i<< std::endl;
  }
  delete arr;
  

  return 0;
}

