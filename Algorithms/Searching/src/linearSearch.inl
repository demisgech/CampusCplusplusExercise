#include <iostream>

#include "Searching.hpp"

using namespace std;

namespace Searching {
template <typename T, typename Size>
Size linearSearch(T elements[], Size size, T target) {
  cout << "*** Linear Search ***" << endl << "Comming soon...." << endl;

  for (int i = 0; i < size; ++i)
    if (target == elements[i]) return i;
  return -1;
}
}  // namespace Searching