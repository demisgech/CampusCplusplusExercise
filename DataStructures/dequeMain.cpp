#include <iostream>

#include "Deque.hpp"

using namespace std;

int main() {
  Deque<int>* deque = new Deque<int>(2);
  deque->enqueueFirst(1);
  deque->enqueueLast(3);
  deque->printDeque();

  auto length = deque->getHeight();
  cout << "Height: " << length << endl;

  deque->dequeueFirst();
  deque->dequeueLast();
  deque->printDeque();

  length = deque->getHeight();
  cout << "Height: " << length << endl;
  return 0;
}