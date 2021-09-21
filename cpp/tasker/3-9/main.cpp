#include <iostream>
#include <fstream>
void read_menu_item(std::ifstream &);
void read_whole_menu(std::ifstream &file);


int main(int argc, char const *argv[])
{
  std::ifstream file;
  file.open("menu.txt");
  read_whole_menu(file);
  return 0;
}

void read_menu_item(std::ifstream &file)
{
  if (file.is_open())
  {
    int id;
    std::string naam;
    float prijs;

    file >> id;
    file >> naam;
    file >> prijs;
    std::cout << " item:" << id << ' ' << naam << ' ' << prijs << "\n";
  }

}

void read_whole_menu(std::ifstream &file){
  while(1){
    read_menu_item(file);
    if(file.eof()){
      break;
    }
  }
}