#include <algorithm>
#include <array>
#include <iostream>

// 3.delete number in array

int main() {
  std::array<int, 5> arr = {1, 2, 3, 4, 5};

  int elementToDelete = 3;

  // Find the position of the element to delete
  auto it = std::find(arr.begin(), arr.end(), elementToDelete);

  // If the element is found, erase it from the array
  if (it != std::end(arr)) {
    // Shift the elements after the erased element to the left
    std::move(it + 1, std::end(arr), it);
    arr.back() = 0;
  }

  // Print the updated array
  for (auto i : arr)
    std::cout << i << std::endl;

  return 0;
}