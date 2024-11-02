#include <iostream>

#include "Sorting.hpp"

using namespace std;

namespace Sorting {
template <typename T>
void selectionSort(T elements[], size_t size) {
  // cout << "**** Selection Sort ***" << endl << "Comming soon...." << endl;
  cout << "**** Selection Sort ***" << endl;
  int pass = 0;

  for (int i = 0; i < size - 1; ++i) {
    // cout << endl << "Pass: " << ++pass << " ..... " << endl;

    print(elements, 0, i);
    print(elements, i, size);

    int minIndex = i;
    for (int j = i + 1; j < size; ++j)
      if (elements[minIndex] > elements[j]) minIndex = j;

    if (minIndex != i) {
      // T temp = elements[i];
      // elements[i] = elements[minIndex];
      // elements[minIndex] = temp;
      swap(elements[i], elements[minIndex]);
    }
    //  else {
    //   cout << "No Swap!" << endl;
    // }
    cout << " => ";
    print(elements, 0, i);
    print(elements, i, size);
    cout << endl;
  }
}
}  // namespace Sorting