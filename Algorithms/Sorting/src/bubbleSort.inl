#include <iostream>

#include "Sorting.hpp"

using namespace std;

namespace Sorting {
template <typename T, typename Size>
void bubbleSort(T elements[], Size size) {
  // cout << "**** Bubble Sort ***" << endl << "Comming soon...." << endl;
  cout << "**** Bubble Sort ***" << endl;
  int pass = 0;
  for (int i = size - 1; i > 0; --i) {
    // cout << endl << "Pass: " << ++pass << " .... " << endl;
    print(elements, 0, i);
    print(elements, i, size);
    for (int j = 0; j < i; ++j) {
      if (elements[j] > elements[j + 1]) {
        // print(elements, size);

        // T temp = elements[j];
        // elements[j] = elements[j + 1];
        // elements[j + 1] = temp;
        swap(elements[j], elements[j + 1]);
        // cout << " => ";
        // print(elements, size);
        // cout << endl;
      }
      //  else {
      //   cout << "No Swap!" << endl;
      // }
    }
    cout << " => ";
    print(elements, 0, i);
    print(elements, i, size);
    cout << endl;
  }
}
}  // namespace Sorting