#include <iostream>

#include "CircularLinkedList.hpp"

using namespace std;

int main() {
  CircularLinkedList<int>* cLinkedList = new CircularLinkedList<int>(3);
  cLinkedList->append(4);
  cLinkedList->append(5);
  cLinkedList->printList();

  return 0;
}