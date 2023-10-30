
#include "Assignment_2.hpp"
#include <fstream>
#include <iostream>
#include <map>
#include <tuple>
std::vector<std::tuple<LEVEL, std::string>> LOG::Buffer;

const LEVEL &operator<<(const LEVEL &l, const std::string &str) {

  LOG::Buffer.push_back(std::tuple(l, str));
  return l;
}
const LEVEL &LOG::Level(const LEVEL &l) { return l; }
void LOG::clear() {
  if (!Buffer.empty()) {
    Buffer.clear();
    std::cout << "The Buffer Clear successfully" << std::endl;
  }
}

void LOG::print() {
  if (Buffer.empty()) {
    std::cout << "=========================" << std::endl;
    std::cout << "The Buffer is Empty" << std::endl;
    std::cout << "=========================" << std::endl;
  } else {

    for (auto pair : Buffer) {
      std::string msg = std::get<1>(pair);
      switch (std::get<0>(pair)) {
      case LEVEL::WARNING:
        msg = "\033[1;33m" + msg + "\033[0m";
        break;
      case LEVEL::ERROR:
        msg = "\033[1;31m" + msg + "\033[0m";
        break;
      case LEVEL::INFO:
        break;
      default:
        break;
      }
      std::cout << msg << std::endl;
    }
  }
}

void LOG::dump() {
  std::fstream my_file;
  my_file.open(
      "/media/guirguis/New "
      "Volume/CPlusPlusWorkSpace/LEC4_OOP_Part2/Assignment_2/my_file.txt",
      std::ios::out);
  if (!my_file) {
    std::cout << "File not created!" << std::endl;
  } else {
    std::cout << "File created successfully!" << std::endl;
    for (auto i : LOG::Buffer) {
      std::string msg = std::get<1>(i);
      switch (std::get<0>(i)) {
      case LEVEL::INFO:
        my_file << "=============================================" << std::endl
                << "log level :: INFO" << std::endl
                << "message :: " << msg << std::endl
                << "=============================================" << std::endl;
        break;
      case LEVEL::WARNING:
        my_file << "=============================================" << std::endl
                << "log level :: WARN" << std::endl
                << "message :: " << msg << std::endl
                << "=============================================" << std::endl;
        break;
      case LEVEL::ERROR:
        my_file << "=============================================" << std::endl
                << "log level :: ERROR" << std::endl
                << "message :: " << msg << std::endl
                << "=============================================" << std::endl;
        break;
      }
    }
    my_file.close();
  }
}