#include "class.hpp"
#include <algorithm>
#include <iostream>
#include <map>
#include <queue>
#include <type_traits>
#include <vector>


//=================================================================================================
void addressBook::List(void) const {
    std::cout << "===================================" << std::endl;
  std::vector<std::string> tempDB = DB;
  // if The DB is Empty
  if (tempDB.empty()) {
    std::cout << "The List is empty" << std::endl;
  } else {
    // else Loop until Printing the all members
    std::cout << "The list contains :" << std::endl;
    while (!tempDB.empty()) {
      std::cout << tempDB.back() << std::endl;
      tempDB.erase(tempDB.end());
    }
  }
    std::cout << "===================================" << std::endl;
}
//========================~=========================================================================
void addressBook::Add(std::string userName) { DB.push_back(userName); }
//=================================================================================================

void addressBook::Delete(std::string userName) {
  auto position = std::find(DB.begin(), DB.end(), userName);
  if (position == DB.end()) {
    std::cout << "The Name Not Found" << std::endl;
  } else {
    DB.erase(position);
    std::cout << "The Name is Deleted " << std::endl;
  }
}

//=================================================================================================

void addressBook::Delete_all(void) { DB.clear(); }
//=================================================================================================
void addressBook::Search(std::string userName) {
  auto position = std::find(DB.begin(), DB.end(), userName);
  if (position == DB.end()) {
    std::cout << "The User not Found" << std::endl;
  } else {
    std::cout << "The User is Found" << std::endl;
  }
}
//=================================================================================================
void addressBook::Close(void) { c = 1; }
