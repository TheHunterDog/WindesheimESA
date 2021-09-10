#include "iostream"

int getSizeArr(char[]);
int countOccur(char[],char );
bool checkEqual(char[], char[]);


int main()
{
  std::cout<< "#1 "<<checkEqual("ABCDEFGHJKLMNOP","ABCDEFGHJKLMNOP") << "\n";
  std::cout <<  "#2 "<<checkEqual("abc","b") << "\n";
    std::cout<<  "#3 "<<checkEqual("JKHJKHHIUHASJDSAHFKAJJHBDSAKJDNSAKJNDKJSNAKDJNSAK","JDNSAKJNDKJSNAKDJ") << "\n";
  return 0;
}

int getSizeArr(char String[]){
  int count = 0;
  while (true)
  {
    if(String[count] == 0){
      return count;
    }else{
    count++;
    }
  }
}

int countOccur(char String[],char seeking){
  int size = getSizeArr(String);
  int count = 0;
  
  for (int i = 0; i < size; i++)
  {
    if(String[i] == seeking){
      count++;
    }
  }
  return count;
  
}

bool checkEqual(char String1[], char String2[]){
  if(getSizeArr(String1) == getSizeArr(String2)){
    int size = getSizeArr(String1);
    for (int i = 0; i < size; i++)
    {
      if(String1[i] != String2[i]){
        return false;
      }
    }
    return true;
    
  }
  return false;
}