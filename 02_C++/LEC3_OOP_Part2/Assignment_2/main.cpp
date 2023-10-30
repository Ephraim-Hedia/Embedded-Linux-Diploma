#include "Assignment_2.hpp"
#include <iostream>
#include <map>

int main() {
  LEVEL::ERROR << "Error Message"
               << "Again For Testing";
  LOG::Level(LEVEL::ERROR) << "Error Message"
                           << "Again For Testing";
  //==================================================
  LEVEL::INFO << "INFO Message"
              << "Again For Testing";
  LOG::Level(LEVEL::INFO) << "INFO Message"
                          << "Again For Testing";
  //==================================================

  LEVEL::WARNING << "WARNING Message"
                 << "Again For Testing";
  LOG::Level(LEVEL::WARNING) << "WARNING Message"
                             << "Again For Testing";
  //==================================================

  LOG::print();
  LOG::dump();
  LOG::clear();
  LOG::print();

  return 0;
}