#include <iostream>

#include "Queue.hpp"

using namespace std;

int main() {
  Queue<int>* queue = new Queue<int>(1);
  queue->enqueue(2);
  queue->enqueue(4);
  queue->enqueue(5);

  auto dequeuedValue = queue->dequeue()->value;
  cout << "Dequeued Value: " << dequeuedValue << endl;

  queue->printQueue();

  auto first = queue->getFirst();
  cout << "First: " << first << endl;

  auto last = queue->getLast();
  cout << "Last: " << last << endl;
  return 0;
}