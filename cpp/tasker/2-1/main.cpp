#include <string>
#include <iostream>
#include <sstream>

int main()
{
  std::string s1;
  std::string s2;
  std::string s3;
  std::string s4;
  std::string s5;
  std::string s6;

  s1 = "String 1";
  s3 = "String 3";
  s5 = "String 5";

  std::istringstream copys1;
  copys1.str(s1);
  s2 = copys1.str();

  std::ostringstream copy3;
  copy3.str(s3);
  s4 = copy3.str();

std::stringstream copys5;
copys5.str(s5);
s6 = copys5.str();

std::cout << "String 1 : " << s1 << "\n";
std::cout << "String 2 : " << s2 << "\n";
std::cout << "String 3 : " << s3 << "\n";
std::cout << "String 4 : " << s4 << "\n";
std::cout << "String 5 : " << s5 << "\n";
std::cout << "String 6 : " << s6 << "\n";




  return 0;
}


// A Nee
// B Nee
// C Nee ze zijn niet met memory addressen gelinked het is een kopie
// D Ja Dan komt de nieuwe of veranderderde char erbij
// E Nee
// F Nee 
// G Nee
// H Ja de string
// I Ja OstringStream is voor output