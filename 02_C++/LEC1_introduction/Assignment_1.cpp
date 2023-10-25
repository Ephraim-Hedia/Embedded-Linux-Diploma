
#include <iomanip>
#include <iostream>

// 1-Create a table for AscII code

int main(int argc, const char **argv)
{

  std::cout << "ASCII Code Table :" << std::endl;
  std::cout << "+------+-------+" << std::endl;
  std::cout << "| Char | ASCII |" << std::endl;
  std::cout << "+-------+------+" << std::endl;

  for (int i = 0; i < 97; i++)
  {
    std::cout << "|" << std::setw(8) << static_cast<char>(i) << "|" << std::setw(8) << i
              << "|" << std::endl;
  }

  return 0;
}