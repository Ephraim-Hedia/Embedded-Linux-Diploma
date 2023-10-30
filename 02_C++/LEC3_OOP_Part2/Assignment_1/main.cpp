#include "Assignment_1.hpp"
#include <algorithm>
#include <iostream>

// int main(int argc, char const *argv[])
// {
//     char arr[] = "Hello World";
//     char arr2[] = "Hello World2";
//     // std::all_of();
//     String s{arr};
//     std::cout << "=====Copy Constructor=====" << std::endl;
//     s.Func();
//     s.Set1StChar('h');
//     s.Func();

//     std::cout << "=====Copy Assignment=====" << std::endl;
//     s = arr2;
//     s.Func();

//     std::cout << "=====Move Constructor=====" << std::endl;
//     String s2{std::move(s)};
//     s2.Func();
//     s.Func();

//     std::cout << "=====Move Assignment=====" << std::endl;
//     String s3{arr};
//     s3 = std::move(s2);
//     s3.Func();
//     s2.Func();
//     return 0;
// }

int main(int argc, const char **argv) {

  // Constructors
  // ==============================================================================
  // Default Constructor
  String var;
  var(); // Functor

  String varr;
  std::cin >> varr;
  std::cout << varr;
  // Copy Constructor
  char arr[] = "Ephraim ";
  String var2{arr, sizeof(arr) / sizeof(arr[0])};
  var2(); // Functor
  // operator<<
  std::cout << var2;

  // Copy Constructor
  String var3{var2};
  var3(); // Functor

  // Move Constructor
  String var4{std::move(var3)};
  var3(); // No Thing will be printed
  var4();
  // ==============================================================================
  // = Operator
  // Copy Assignment
  char arr2[] = "Hedia";
  var4 = arr2;
  var4();

  // Copy Assignment
  var4 = var2;
  var4();

  // Move Assignment
  var4 = std::move(var2);
  var4();
  var2();
  // ==============================================================================
  // Operator
  // operator+(const String &arr)
  String var10{const_cast<char *>("Hello "), 7};
  String var11{const_cast<char *>("World"), 6};
  String var12;
  var12 = var10 + var11;
  var12();

  // operator+(char *s)
  char arr3[] = "World";
  var12 = var10 + arr3;
  var12();

  // += Operator
  // operator+=(char *s)
  var12 += arr3;
  var12();

  // operator+=(const String &arr)
  String var15{const_cast<char *>("Hello "), 7};
  String var16{const_cast<char *>("World"), 6};
  var15 += var16;
  var15();

  // ==============================================================================
  // Functions
  auto result = var15.is_empty();
  result == true ? (std::cout << "The String is Empty " << std::endl)
                 : (std::cout << "String is not Empty" << std::endl);
  // ===========
  char array[] = "Hello World";
  String var20{array, sizeof(array) / sizeof(array[0])};
  auto result2 = var15.str_cmp(var20);
  result2 == true ? (std::cout << "Equel String" << std::endl)
                  : (std::cout << "Not Equel String" << std::endl);
  // ===========
  var20.clear();
  var20();
  // ===========

  return 0;
}
