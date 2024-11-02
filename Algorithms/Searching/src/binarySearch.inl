#include <iostream>

#include "Searching.hpp"

using namespace std;

namespace Searching {
template <typename T>
size_t binarySearch(T elements[], size_t size, T target) {
  // cout << "*** Binary Search ***" << endl << "Comming soon...." << endl;

  int leftIndex = 0;
  int rightIndex = size;
  while (leftIndex <= rightIndex) {
    int midIndex = leftIndex + static_cast<int>((rightIndex - leftIndex) / 2);
    if (target == elements[midIndex])
      return midIndex;
    else if (target > elements[midIndex])
      leftIndex = midIndex + 1;
    else
      rightIndex = midIndex - 1;
  }
  // return -1;
  return leftIndex;  // I wanna return the leftIndex and provide helper function
                     // to get the correct target index
  // The reason why I'd like to return leftIndex instead of -1 is that I want to
  // use this algorithm also inside binaryInsertionSort algorithms
}

template <typename T>
bool binarySearchItem(T elements[], size_t size, T target) {
  int result = binarySearch(elements, size, target);
  return (result < size && elements[result] == target);
}
}  // namespace Searching