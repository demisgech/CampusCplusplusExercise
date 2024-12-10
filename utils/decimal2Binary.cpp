
#include <iostream>

using std::cout;

void decimal2Binary(int decimal) {
  // Binary number == reverse element of remainderList
  int remainderList[30] = {0};
  int i = 0;
  while (decimal > 0) {
    remainderList[i] = decimal % 2;
    decimal /= 2;
    i++;
  }
  for (int j = i - 1; j >= 0; j--) cout << remainderList[j];
}
