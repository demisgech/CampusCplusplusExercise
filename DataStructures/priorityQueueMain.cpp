#include <iostream>

#include "PriorityQueue.hpp"

using namespace std;

int main() {
  PriorityQueue<int, string> pq;
  pq.enqueue(1, "Demis");
  pq.enqueue(2, "Dejen");

  pq.enqueue(0, "Degefaw");
  pq.enqueue(3, "Daniel");

  pq.printPriorityQueue();
  return 0;
}