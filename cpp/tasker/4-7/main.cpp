#include <string>
#include <iostream>
#include <sstream>

enum studierichting
{
  ESA,
  SE,
  BIM,
  IDS,
};

struct student {
  int studentnummer;
  std::string naam;
  studierichting richting;
};

void printStudent(student Student)
{
  std::cout << "Naam :" << Student.naam << "\n"
            << "StudentNummer " << Student.studentnummer << "\n"
            << "Richting" << Student.richting;

}

int main(int argc, char const *argv[])
{
  student Mark = student{123,"mark"};
  Mark.richting = studierichting::ESA;
  printStudent(Mark);
  return 0;
}
