// Trying Or and And
#include <iostream>

// try and / or 

int main(int argc, const char **argv) {
  int a = 20;

  // Tring and
  if (a > 15 and a > 25)
    ;
  else
    std::cout << "Will Print False, 'and' Working" << std::endl;

  // Trying or
  if (a > 15 or a > 25)
    std::cout << "Will Print True , 'or' Working" << std::endl;
  return 0;
}