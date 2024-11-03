#include <iostream>

#include "Array.hpp"
#include "LinkedList.hpp"

using namespace std;

int main() {
  Array<int, 4> numbers = {11, 2, 9, 8};
  numbers.sort();
  numbers.reverse();
  numbers.printArray();

  // LinkedList<double>* list = new LinkedList<double>(2.3);
  // list->printList();
  return 0;
}