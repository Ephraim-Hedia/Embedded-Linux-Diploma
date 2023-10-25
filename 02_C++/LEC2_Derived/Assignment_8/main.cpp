#include <algorithm>
#include <iostream>
#include <map>
#include <queue>
#include <type_traits>
#include <vector>
#include "class.hpp"

// Develop a simple address book program
// that allows users to add, update, and
// search for contacts.



int main(int argc, const char **argv) {
  states Choice;
  int temp;
  std::string UserName;
  addressBook b;
  std::cout << "Welcome to Your Favorite address book!" << std::endl;

  while (1) {
    std::cout << "What do you want to do ?" << std::endl;
    std::cout << "\t1.| List        \t\t| Lists all users" << std::endl;
    std::cout << "\t2.| Add         \t\t| Add an user" << std::endl;
    std::cout << "\t3.| Delete      \t\t| Delete an user" << std::endl;
    std::cout << "\t4.| Delete all  \t\t| Remove all users" << std::endl;
    std::cout << "\t5.| Search      \t\t| Search for user" << std::endl;
    std::cout << "\t6.| Close       \t\t| Close the address book" << std::endl;

    std::cin >> temp;
    Choice = static_cast<states>(temp);
    switch (Choice) {
    case states::LIST:
      b.List();
      break;

    case states::ADD:
      std::cout << "Enter The Name of the User :" << std::endl;
      std::cin >> UserName;
      b.Add(UserName);
      break;

    case states::DELETE:
      std::cout << "Enter The Name of the User :" << std::endl;
      std::cin >> UserName;
      b.Delete(UserName);
      break;

    case states::DELETE_ALL:
      std::cout << "Deleting is Done" << std::endl;
      b.Delete_all();
      break;

    case states::SEARCH:
      std::cout << "Enter The Name of the User :" << std::endl;
      std::cin >> UserName;
      b.Search(UserName);
      break;

    case states::CLOSE:
      b.Close();
      break;

    default:
      std::cout << "You Enter Wroing Choice , Please Select Another Option"
                << std::endl;
    }
    if (b.c)
      break;
  }
  return 0;
}