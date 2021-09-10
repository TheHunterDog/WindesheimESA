#include "iostream"

int getSizeArr(char[]);

int main()
{
  std::cout<< getSizeArr("ABCDEFGHJKLMNOP") << "\n";
  std::cout << getSizeArr("abc") << "\n";
    std::cout<< getSizeArr("JKHJKHHIUHASJDSAHFKAJJHBDSAKJDNSAKJNDKJSNAKDJNSAK") << "\n";
  std::cout << getSizeArr("jnsadfkjsdnfojiurewpmfksnofmsdpkmqwounjndajdnakjdn       ") << "\n";
    std::cout<< getSizeArr("jksdnfkjskjndsfjknsfjnkskjnfkjnsfdkjfsdjknjkfdskjsdfknjsdjnfksfnkdjsfksdjknfdskjnjknfdjknnjksdfkjnsdfjkndsfknjsdjknfdjnsfkjnsdknfdskjnfjk") << "\n";
  std::cout << getSizeArr("aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa") << "\n";
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