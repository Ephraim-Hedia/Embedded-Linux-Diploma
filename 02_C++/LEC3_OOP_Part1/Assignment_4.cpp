#include <cstddef>
#include <cstring>
#include <iostream>

// Write string class which has Members {length , string }

class String {
public:
  String();
  String(char *str);
  ~String();
  void operator()(void);

private:
  char *_str;
  int _length;
};

String::String() : _str(nullptr), _length(0) {
  std::cout << "Default Constructor is Called " << std::endl;
}
String::String(char *str) : _str(str), _length(0) {
  std::cout << "Parameter Constructor is Called" << std::endl;
  _length = strlen(_str);
}
String::~String() { std::cout << "Constructor is Called" << std::endl; }
void String::operator()(void) {
  for (int i = 0; i < _length; i++)
    std::cout << *_str++;
  std::cout << std::endl;
  std::cout << "Length " << _length << std::endl;
}
int main(int argc, const char **argv) {
  char arr[] = "Ephraim Hedia";
  String s{arr};
  s();

  return 0;
}