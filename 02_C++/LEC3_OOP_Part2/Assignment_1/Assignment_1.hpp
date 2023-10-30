#include <iostream>
class String {
public:
  // Constructor
  String();
  String(char *s, unsigned long length);
  String(const String &arr); // Copy Constructor
  String(String &&expired);  // Move Constructor

  // Functions
  unsigned long size() const;
  bool is_empty(void) const;
  bool str_cmp(const String &arr) const;
  void clear(void);
  void Set1StChar(char value);
  void Func(void) const;

  // Operator
  // Functors
  void operator()(void) const;

  friend std::ostream &operator<<(std::ostream &os, const String &obj);
  friend std::istream &operator>>(std::istream &os, String &obj);
  // + Operator
  String operator+(const String &arr);
  String operator+(char *s);

  // += Operator
  String operator+=(char *s);
  String operator+=(const String &arr);

  // = Operator
  String &operator=(char *ptr);          // Copy Assignment
  String &operator=(const String &temp); // Copy Assignment
  String &operator=(String &&expired);   // Move Assignment

  // Distructor
  ~String();

private:
  char *_str;
  int _Size;
};
