#include <iostream>
#include <array>
#include <algorithm>

void CheckEven(std::array<int, 6> a) {
  if (std::all_of(a.begin(), a.end(),
                  [](int i) -> bool { return (i % 2 == 0); })) {
    std::cout << "The array is Even" << std::endl;
  } else {
    std::cout << "The array is not Even" << std::endl;
  }
}

int main(int argc, const char **argv) {
  std::array<int, 6> Test = {1, 2, 3, 4, 5};
  std::array<int, 6> Test2 = {2, 4, 6, 8, 10};
  CheckEven(Test);
  CheckEven(Test2);
}