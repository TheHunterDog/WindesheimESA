#include "iostream"
#include "cstdlib"
int random(int);
int main()
{
  std::cout << random(15);
  
  return 0;
}

int random(int max){
  return rand() % max;

}