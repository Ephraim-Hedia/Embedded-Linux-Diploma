#include "Assignment_1.hpp"
#include <iostream>
#include <string.h>

//=====================================================
// Constructor
String::String() : _str(nullptr), _Size(0) {
  std::cout << "Default Constructor is Called" << std::endl;
}
String::String(char *s, unsigned long length) : _Size(length) {
  std::cout << "Parameter Constructor is Called (char *s)" << std::endl;
  this->_str = new char(this->_Size + 1);
  strcpy(_str, s);
}
// Copy Constructor
String::String(const String &arr) {
  std::cout << "Copy Constructor is Called (const String &arr)" << std::endl;
  this->_Size = arr._Size;
  this->_str = new char(arr._Size);
  strcpy(this->_str, arr._str);
}
// Move Constructor
String::String(String &&expired) {
  std::cout << "Move Constructor is Called (String &&expired)" << std::endl;
  this->_Size = expired._Size;
  expired._Size = 0;
  this->_str = expired._str;
  expired._str = nullptr;
}
//=====================================================

//=====================================================
// Operator

// + Operator
String String::operator+(const String &arr) {
  std::cout << "operator+(const String &arr) is Called" << std::endl;
  String temp;
  temp._Size = arr._Size + this->_Size;
  temp._Size--;
  temp._str = new char(temp._Size + 1);
  strcat(temp._str, this->_str);
  strcat(temp._str, arr._str);
  return temp;
}
String String::operator+(char *s) {
  if (s != nullptr) {
    String Result;

    // Calculate Size of the arr of char *s
    while (s[Result._Size++] != '\0')
      ;
    Result._Size--;
    // Size of the Result
    Result._Size += this->_Size;
    Result._str = new char(Result._Size);

    // Concatenate Two String in Result
    strcat(Result._str, this->_str);
    strcat(Result._str, s);
    return Result;
  }
  return *this;
}

// += Operator
String String::operator+=(char *s) {
  if (this->_str != nullptr) {
    std::cout << "operator+=(char*s) is called" << std::endl;
    unsigned long length = 0;
    while (s[length++] != '\0')
      ;
    strcat(this->_str, s);
    this->_Size += length;
    this->_Size--;
    ;
  }
  return *this;
}
String String::operator+=(const String &arr) {
  std::cout << "operator+=(const String &arr) is called" << std::endl;
  if (this->_str != nullptr) {
    if (arr._str == nullptr)
      return *this;
    strcat(this->_str, arr._str);
    this->_Size += arr._Size;
    this->_Size--;
  }

  return *this;
}

// = Operator

// Copy Assignment
String &String::operator=(char *ptr) {
  std::cout << "operator=(char *ptr) is called" << std::endl;

  unsigned long length = 0;
  while (ptr[length++] != '\0')
    ;
  if (this->_str) {
    delete[] _str;
  }
  this->_Size = length;
  this->_str = new char(this->_Size);
  strcpy(this->_str, ptr);
  return *this;
}

// Copy assignment
String &String::operator=(const String &temp) {
  std::cout << "operator=(const String &temp) is called" << std::endl;
  if (&temp != this) {
    if (this->_str) {
      delete[] _str;
    }
    this->_Size = temp._Size;
    this->_str = new char(this->_Size);
    strcpy(this->_str, temp._str);
  }
  return *this;
}

// Move Assignment
String &String::operator=(String &&expired) {
  std::cout << "operator=(String &&expired) is called" << std::endl;
  if (this != &expired) {
    this->_Size = expired._Size;
    expired._Size = 0;
    if (this->_str) {
      delete[] this->_str;
    }
    this->_str = expired._str;
    expired._str = nullptr;
  }
  return *this;
}

// Functor
void String::operator()(void) const {
  std::cout << "Functor" << std::endl;
  if (_str == nullptr) {

    std::cout << "=========================" << std::endl
              << "STRING NOT FOUND" << std::endl
              << "=========================" << std::endl;
  } else {
    std::cout << "=========================" << std::endl;
    std::cout << "String :";
    for (auto i = _str; i < _str + _Size; i++)
      std::cout << *i;
    std::cout << std::endl;
    std::cout << "Length :" << _Size << std::endl;
    std::cout << "=========================" << std::endl;
  }
}

// cout
std::ostream &operator<<(std::ostream &os, const String &obj) {
  std::cout << "=========================" << std::endl;

  std::cout << "&operator<<(std::ostream &os, const String &obj) is called"
            << std::endl;

  if (obj._str != nullptr) {
    os << "The String :: " << obj._str << std::endl
       << "The Size :: " << obj._Size << std::endl;
  } else {
    os << "The String is Empty" << std::endl;
  }
  std::cout << "=========================" << std::endl;

  return os;
}
std::istream &operator>>(std::istream &os, String &obj) {
  // delete the data in the obj
  obj._Size = 0;
  delete[] obj._str;
  obj._str = nullptr;

  // Get the Data from the User
  int tempSize = 100;
  char *tempStr = new char(tempSize);
  char ch;
  int i = 0;
  std::cout << "Enter a String Please :" << std::endl;
  while ((ch = os.get()) != '\n') {
    tempStr[i++] = ch;
  }
  tempStr[i] = '\0';

  // Copy data to the obj
  obj._Size = i + 1;
  obj._str = new char(obj._Size);
  strcpy(obj._str, tempStr);
  delete tempStr;

  return os;
}
//=====================================================

//=====================================================
// Functions

void String::Func(void) const {

  if (_str != nullptr)
    std::cout << _str << std::endl;
}
void String::Set1StChar(char value) { *_str = value; }

unsigned long String::size() const { return _Size; }
bool String::is_empty(void) const {
  if (_Size) {
    return false;
  }
  return true;
}
bool String::str_cmp(const String &arr) const {
  if (strcmp(this->_str, arr._str)) {
    return false;
  }
  return true;
}
void String::clear(void) {
  if (this->_str != nullptr) {
    delete[] this->_str;
    this->_str = nullptr;
  }
  this->_Size = 0;
}

//=====================================================

//=====================================================
// Distructor
String::~String() {
  if (_str != nullptr)
    delete[] _str;
}
//=====================================================
