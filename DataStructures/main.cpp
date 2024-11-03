#include <iostream>

#include "Array.hpp"
#include "ArrayList.hpp"
#include "LinkedList.hpp"

using namespace std;

int main() {
  // Array<int, 4> numbers = {11, 2, 9, 8};
  // numbers.sort();
  // numbers.reverse();
  // numbers.printArray();

  // LinkedList<double>* list = new LinkedList<double>(2.3);
  // list->printList();

  ArrayList<int> aList = {1};
  aList.append(2);
  aList.prepend(3);
  aList.insert(3, 4);
  aList.deleteAt(2);
  aList.printArrayList();

  return 0;
}