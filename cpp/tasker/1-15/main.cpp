#include "iostream"
#include "cstdlib"

bool test();
int random(int);

int main()
{
try{
  bool res = test();
    if(!res){
  std::cout << "all tests executed Sucessfully";
  }
  else{
  std::cout << "Not all test were correct";
  }
  return 0;

}
catch(char err[] ){
  std::cout << err;
}
return 1;
}

bool test(){
  bool res = true;
  for (int i = 1; i <= 100; i++)
  {
    int rn = random(i);
    if(rn > i){
      std::cout << rn << " Should be lower than " << i << "\n";
      if(res == false){
        throw "Abort too many errors";
      }
      res = false;
    }
  }
  return res;
}

int random(int max){
  return rand() % max;

}
