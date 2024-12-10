#ifndef PRIORITYQUEUE
#define PRIORITYQUEUE

template <typename T, typename U>
class PriorityQueue {
  class Node {
   public:
    T key;
    U value;
    Node* next;
    Node(const T& key, const U& value);
  };

  Node* first;
  Node* last;
  int length;

 public:
  PriorityQueue();
  ~PriorityQueue();

  void printPriorityQueue();
  void enqueue(const T& key, const U& vaule);
  Node* dequeue();
  Node* getFirst() const;
  Node* getLast() const;

  int getHeight() const;
};

#include "../src/PriorityQueue.inl"

#endif
