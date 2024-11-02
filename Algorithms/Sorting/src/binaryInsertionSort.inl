#include <iostream>

#include "Searching.hpp"
#include "Sorting.hpp"

using namespace Searching;
using namespace std;

namespace Sorting {
template <typename T>
void binaryInsertionSort(T elements[], size_t size) {
  // cout << "**** BinaryInsetion Sort ***" << endl << "Comming soon...." <<
  // endl;
  cout << "**** Binary Insertion Sort ***" << endl;
  for (int i = 1; i < size; ++i) {
    print(elements, 0, i);
    print(elements, i, size);
    T temp = elements[i];
    int position = binarySearch(elements, i, temp);
    for (int j = i - 1; j >= position; --j) {
      elements[j + 1] = elements[j];
    }
    elements[position] = temp;
    cout << " => ";
    print(elements, 0, i);
    print(elements, i, size);
    cout << endl;
  }
}
}  // namespace Sorting