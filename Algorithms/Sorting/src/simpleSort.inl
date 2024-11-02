#include <iostream>

#include "Sorting.hpp"

using namespace std;

namespace Sorting {
template <typename T>
void simpleSort(T elements[], size_t size) {
  // cout << "**** Simple Sort ***" << endl << "Comming soon...." << endl;
  cout << "**** Simple Sort ***" << endl;

  int pass = 0;

  for (int i = 0; i < size - 1; ++i) {
    // cout << "Pass: " << ++pass << " .... " << endl;
    print(elements, 0, i);
    print(elements, i, size);
    for (int j = i + 1; j < size; ++j) {
      if (elements[j] < elements[i]) {
        // Sorting::print(elements, size);

        // T temp = elements[j];
        // elements[j] = elements[i];
        // elements[i] = temp;
        swap(elements[j], elements[i]);
        // cout << " => ";
        // Sorting::print(elements, size);
        // cout << endl;
      }
      // else {
      //   cout << "No swap!" << endl;
      // }
    }
    cout << " => ";
    print(elements, 0, i);
    print(elements, i, size);
    cout << endl;
  }
}
}  // namespace Sorting