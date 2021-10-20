#include <iostream>

void compab(int &a, int &b){
  if(a>b){
    a = 1;
    b =0;
  }
  else if(a<b){
    a=0;
    b=1;
  }
  else{
    a = 0;
    b = 0;
  }

}

int main(int argc, char const *argv[])
{
  int a = 5;
  int b = 5;
  compab(a,b);
  std::cout<< "A: " << a <<std::endl;
  std::cout<< "B: " << b <<std::endl;

  return 0;
}
