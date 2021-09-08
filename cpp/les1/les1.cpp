#include <iostream>

double divde(int,int);

int main(){

  std::cout << "Helloworld\n";
  double num = divde(3,2);
  std::cout << num;
  return 0;
}

double divde(int num1, int num2){
  if(num2 == 0){
    std::cout << "Dit mag niet";
  }
  return (double) num1/num2 ;
}

