
#include <iostream>
#include <map>
#include <tuple>
#include <vector>

enum class LEVEL : unsigned char { INFO, WARNING, ERROR };
const LEVEL &operator<<(const LEVEL &l, const std::string &str);

class LOG {
public:
  LOG() = delete;
  friend const LEVEL &operator<<(const LEVEL &l, const std::string &str);
  static const LEVEL &Level(const LEVEL &l);
  static void clear();
  static void dump();
  static void print();

private:
  static std::vector<std::tuple<LEVEL, std::string>> Buffer;
};