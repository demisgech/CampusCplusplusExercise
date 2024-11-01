#include <iostream>

#include "Array.hpp"

using namespace std;

int main() {
  cout << "Hello World" << endl;
  double arr[2] = {1, 2};
  Array<double, 2> myArray = arr;
  cout << myArray[0] << endl;
  return 0;
}