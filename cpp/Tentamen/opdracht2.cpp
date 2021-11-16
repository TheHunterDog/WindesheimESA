#include <iostream>
#include <fstream>

#include "tentamen.h"
#define SENSOREN 15

int opg2a_regels_tellen(const char filenaam[])
{
  // typ hier je antwoord voor vraag 2a:
  int dag = 0;
  int sensorID = 0;
  double sensorValue = 0;
  int regel = 0;

  std::ifstream file;
  file.open(filenaam);

  if (file.is_open())
  {
    while (!file.eof())
    {
      file >> dag;
      file >> sensorID;
      file >> sensorValue;
      regel++;
    }
    regel--;
    // empty line
  }
  file.close();
  return regel;
}

void opg2b_sensorwaardes_tellen(const char filenaam[])
{
  // typ hier je antwoord voor vraag 2b:
  int dag = 0;
  int sensorID = 0;
  double sensorValue = 0;
  int sensorentelling[SENSOREN] = {};

  std::ifstream file;
  file.open(filenaam);

  if (file.is_open())
  {
    while (!file.eof())
    {
      file >> dag;
      file >> sensorID;
      file >> sensorValue;
      if (sensorID <= SENSOREN)
      {
        sensorentelling[sensorID]++;
      }
    }
  }
  file.close();
  for (int i = 0; i < SENSOREN; i++)
  {
    std::cout << i << ":" << sensorentelling[i] << std::endl;
  }
}

void opg2c_gemiddeldes(const char in_naam[], const char uit_naam[])
{
  // typ hier je antwoord voor vraag 2c:

  // typ hier je antwoord voor vraag 2b:
  int dag = 0;
  int sensorID = 0;
  double sensorValue = 0;
  int sensorentelling[SENSOREN] = {};
  double sensorenTotaalWaarde[SENSOREN] = {};
  double gemiddelde[SENSOREN] = {};

  std::ifstream file;
  file.open(in_naam);

  if (file.is_open())
  {
    while (!file.eof())
    {
      file >> dag;
      file >> sensorID;
      file >> sensorValue;
      if (sensorID <= SENSOREN)
      {
        sensorentelling[sensorID]++;
        sensorenTotaalWaarde[sensorID] += sensorValue;
      }
    }
  }
  file.close();

  std::ofstream ofile;
  ofile.open(uit_naam);
  if (ofile.is_open())
  {
    for (int i = 0; i < SENSOREN; i++)
    {
      ofile << i << " ";
      if (sensorenTotaalWaarde[i] == 0)
      {
        ofile << "---";
      }
      else
      {
        ofile << sensorenTotaalWaarde[i]/ sensorentelling[i];
      }
      ofile<<std::endl;
    }
  }
}

void freeplay2()
{
  // Hier mag je code typen om dingen uit te proberen.
  // Deze wordt niet beoordeeld.
}

void opdracht2_demo()
{
  std::cout << "Opgave 2a: Demo" << std::endl;
  std::cout << "#regels geteld in \'invoer1.txt\': "
            << opg2a_regels_tellen("opg2_invoer1.txt")
            << " (moet zijn 9)" << std::endl;
  std::cout << "#regels geteld in \'invoer2.txt\': "
            << opg2a_regels_tellen("opg2_invoer2.txt")
            << " (moet zijn 405)" << std::endl;

  std::cout << "Opgave 2b: Demo" << std::endl;
  std::cout << "Aantallen sensor waardes in \'invoer1.txt\':" << std::endl;
  opg2b_sensorwaardes_tellen("opg2_invoer1.txt");
  std::cout << "Dit zou er zo uit moeten zien:\n0:2\n1:3\n2:2\n3:2\nDe rest is 0.\n";
  std::cout << "Aantallen sensor waardes in \'invoer2.txt\':" << std::endl;
  opg2b_sensorwaardes_tellen("opg2_invoer2.txt");
  std::cout << "Dit zou er zo uit moeten zien:\n0:26\n1:26\n2:23\n3:25\n4:25\n5:26\n6:29\n7:23\n8:27\n9:25\n10:26\n11:27\n12:26\n13:27\n14:22\n15:22\n";

  std::cout << "Opgave 2c: Demo" << std::endl;
  opg2c_gemiddeldes("opg2_invoer1.txt", "uitvoer1.txt");
  opg2c_gemiddeldes("opg2_invoer2.txt", "uitvoer2.txt");
  std::cout << "'uitvoer1.txt' zou er zo uit moeten zien: (er kunnen afrondingsverschillen zijn)\n0 127.05\n1 120.89\n2 51.07\n3 136.79\n4 ---\n5 ---\n6 ---\n7 ---\n8 ---\n9 ---\n10 ---\n11 ---\n12 ---\n13 ---\n14 ---\n15 ---\n\n";
  std::cout << "'uitvoer2.txt' zou er zo uit moeten zien: (er kunnen afrondingsverschillen zijn)\n0 130.12\n1 104.67\n2 48.90\n3 141.33\n4 480.65\n5 13.68\n6 289.51\n7 125.31\n8 41.16\n9 14.17\n10 617.38\n11 917.45\n12 505.06\n13 170.05\n14 551.67\n15 43.21\n";
}

void opdracht2()
{
  std::cout << std::endl
            << "Opdracht 2" << std::endl;
  freeplay2();

  // std::cout<< opg2a_regels_tellen("opg2_invoer1.txt") << std::endl;
  // std::cout<< opg2a_regels_tellen("opg2_invoer2.txt") << std::endl;
  //   opg2b_sensorwaardes_tellen("opg2_invoer1.txt");
  // opg2b_sensorwaardes_tellen("opg2_invoer2.txt");
opg2c_gemiddeldes("opg2_invoer1.txt","abc.txt");
  // je mag de volgende functie in en uit commentaar zetten voor een demo van alle voorbeelden:
  //opdracht2_demo();
}
