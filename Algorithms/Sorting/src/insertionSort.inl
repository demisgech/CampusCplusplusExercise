#include <iostream>

#include "Sorting.hpp"

using namespace std;

namespace Sorting {
template <typename T, typename Size>
void insertionSort(T elements[], Size size) {
  cout << "**** Insertion Sort ***" << endl << "Comming soon...." << endl;
  for (int i = 1; i < size; ++i) {
    print(elements, 0, i);
    print(elements, i, size);
    T temp = elements[i];
    int j = i - 1;

    while (j >= 0 && elements[j] > temp) {
      elements[j + 1] = elements[j];
      j = j - 1;
    }
    elements[j + 1] = temp;
    cout << " => ";
    print(elements, 0, i);
    print(elements, i, size);
    cout << endl;
  }
}
}  // namespace Sorting