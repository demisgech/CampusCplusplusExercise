#include <iostream>

#include "Sorting.hpp"

using namespace std;

namespace Sorting {

template <typename T>
void swap(T& a, T& b) {
  T temp = a;
  a = b;
  b = temp;
}

}  // namespace Sorting