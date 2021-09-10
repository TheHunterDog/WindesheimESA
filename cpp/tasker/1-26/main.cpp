#include "iostream"

int getSizeArr(char[]);
int countOccur(char[],char );
bool checkEqual(char[], char[]);
bool checkContains(char[], char[]);
int getFirstNumber(char[]);
int SumAllNumbers(char[]);
bool IsSpiegelWoord(char String[]);

int main()
{
  std::cout<< "#1 "<<IsSpiegelWoord("aha") << "\n";
  std::cout <<  "#2 "<<IsSpiegelWoord("agarqewqewqe") << "\n";
  std::cout <<  "#3 "<<IsSpiegelWoord("meetsysteem") << "\n";


  return 0;
}

bool IsSpiegelWoord(char String[]){
  int sizeString = getSizeArr(String);
  for (int i = 0; i < sizeString; i++)
  {
    // Rekening houden met \0
    if(String[i] != String[sizeString-1-i]){
      return false;
    }
    
  }
  return true;
  

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

bool checkContains(char String1[], char String2[]){
  if(checkEqual(String1,String2)){
    return true;
  }
  bool DEFAULT = true;
  int counter = 0;
  int String1Size = getSizeArr(String1);
  int String2Size = getSizeArr(String2);

  int largest = String1Size;
  if(largest < String2Size){
    largest = String2Size;
    DEFAULT = false;
  }
  for (int i = 0; i < String1Size; i++)
  {
    for (int j = 0; j < String2Size; j++)
    {
      if(String1[j] == String2[i]){
        counter++;
          if(counter == String2Size || counter == String1Size){
            return true;
          }
      }    }
    

  }
  return false;
}

int getFirstNumber(char String[]){
  for (int i = 0; i < getSizeArr(String); i++)
  {
    if((int)String[i] >= 48 && (int)String[i] <= 57 ){
      // Kudos: https://www.dummies.com/programming/cpp/encoding-characters-in-c-code/
      return (int) String[i] - 48;

    }
  }
  return -1;
}

int SumAllNumbers(char String[]){
  int sum = 0;
  for (int i = 0; i < getSizeArr(String); i++)
  {
    if((int)String[i] >= 48 && (int)String[i] <= 57 ){
      // Kudos: https://www.dummies.com/programming/cpp/encoding-characters-in-c-code/
      sum += (int) String[i] - 48;

    }
  }
  return sum;
}
