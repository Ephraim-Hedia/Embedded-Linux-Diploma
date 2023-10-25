#include <iostream>
#include <vector>
enum class states : unsigned char {
  LIST = 1,
  ADD = 2,
  DELETE = 3,
  DELETE_ALL = 4,
  SEARCH = 5,
  CLOSE = 6
};

class addressBook {
private:
  std::vector<std::string> DB;

public:
  int c = 0;
  addressBook() = default;
  ~addressBook() = default;
  void List(void) const;
  void Add(std::string userName);
  void Delete(std::string userName);
  void Delete_all(void);
  void Search(std::string userName);
  void Close(void);
};