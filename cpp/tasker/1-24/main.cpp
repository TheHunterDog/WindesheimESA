#include "iostream"

int getSizeArr(char[]);
int countOccur(char[],char );
bool checkEqual(char[], char[]);
bool checkContains(char[], char[]);


int main()
{
  std::cout<< "#1 "<<checkContains("ABCDEFGHJKLMNOP","ABCDEFGHJKLMNOP") << "\n";
  std::cout <<  "#2 "<<checkContains("abc","b") << "\n";
    std::cout<<  "#3 "<<checkContains("JKHJKHHIUHASJDSAHFKAJJHBDSAKJDNSAKJNDKJSNAKDJNSAK","JDNSAKJNDKJSNAKDJ") << "\n";
    std::cout<<  "#4 "<<checkContains("JKHJKHHIUHASJDSAHFKAJJHBDSAKJDNSAKJNDKJSNAKDJNSAK","q") << "\n";
    std::cout<<  "#5 "<<checkContains("JKHJKHHIUHASJDSAHFKAJJHBDSAKJDNSAKJNDKJSNAKDJNSAK","78352473y284hr8defiwonsfdjnkjhbfuauy4wg3t5478q945p3nrweolkjsdfhbgyrt3254879465ouiytruegwtq435627859iuytjrhgdfstrw352674586iutyjkghnvbgfhdsrtew35647586uiyjkhgndfertw4356758iuyjkhgfdertw543678iuyjkghfdter34567uyt") << "\n";
    std::cout<<  "#6 "<<checkContains("ASJDSAHFKAJJ","JKHJKHHIUHHBDSAKJDNSAKJNDKJSNAKDJNSAK") << "\n";

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