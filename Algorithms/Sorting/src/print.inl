#include <iostream>

#include "Sorting.hpp"

using namespace std;

namespace Sorting {
template <typename T>
void print(const T elements[], size_t size) {
  cout << "{";
  for (int i = 0; i < size; ++i) {
    cout << elements[i];
    if (i < size - 1) cout << ",";
  }
  cout << "}";
}

template <typename T>
void print(const T elements[], size_t minIndex, size_t maxIndex) {
  cout << "{";
  for (int i = minIndex; i < maxIndex; ++i) {
    cout << elements[i];
    if (i < maxIndex - 1) cout << ",";
  }
  cout << "}  ";
}
}  // namespace Sorting