#include <iostream>
#include <iomanip>

// 5-multiplication table


int main(int argc, const char** argv) {
  std::cout << "Multiplication Table" << std::endl;

  for (int i = 1; i <= 10; i++) {
    std::cout << "Multiplication Table for Number " << i << ":" << std::endl;
    for (int j = 0; j < 10; j++) {
      std::cout << std::setw(2) << i << "*" << std::setw(2) << j << "=" << i * j
                << std::endl;
    }
  }

    return 0;
}