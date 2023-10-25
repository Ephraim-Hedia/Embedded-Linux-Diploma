#include<iostream>
#include <iomanip>
#include <vector>

// 4-decide the letter is vowel or not

int main(int argc, const char **argv) {

  char ch;
  int flag = 0;
  std::cout << "Enter Any Letter Please to Decide if the letter is vowel or not"
            << std::endl;
  std::cin >> ch;

  std::vector<char> vowelchars = {'a', 'e', 'i', 'o', 'u'};
  for (char i : vowelchars) {
    if (i == ch) {
      std::cout << "The letter is Vowel" << std::endl;
      flag = 1;
    }
  }
  if (flag == 0) {
    std::cout << "The Letter is not vowel" << std::endl;
  }
  return 0;
}