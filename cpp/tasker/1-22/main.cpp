#include "iostream"

int getSizeArr(char[]);
int countOccur(char[],char );

int main()
{
  std::cout<< "#1 "<<countOccur("ABCDEFGHJKLMNOP",'q') << "\n";
  std::cout <<  "#2 "<<countOccur("abc",'b') << "\n";
    std::cout<<  "#3 "<<countOccur("JKHJKHHIUHASJDSAHFKAJJHBDSAKJDNSAKJNDKJSNAKDJNSAK",'C') << "\n";
  std::cout <<  "#4 "<<countOccur("jnsadfkjsdnfojiurewpmfksnofmsdpkmqwounjndajdnakjdn       ",'j') << "\n";
    std::cout<< "#5 "<< countOccur("jksdnfkjskjndsfjknsfjnkskjnfkjnsfdkjfsdjknjkfdskjsdfknjsdjnfksfnkdjsfksdjknfdskjnjknfdjknnjksdfkjnsdfjkndsfknjsdjknfdjnsfkjnsdknfdskjnfjk",'j') << "\n";
  std::cout << "#6 "<< countOccur("aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa",'a') << "\n";
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