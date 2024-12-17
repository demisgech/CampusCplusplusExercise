#ifndef QUEUE
#define QUEUE

template <typename T>
class Queue {
 private:
  class Node {
   public:
    T value;
    Node* next;
    Node(const T& value);
  };

  Node* first;
  Node* last;
  int length;

 public:
  Queue();
  Queue(const T& value);
  ~Queue();
  void printQueue();
  void enqueue(const T& value);
  Node* dequeue();

  T getFirst() const;
  T getLast() const;
  int getSize() const;
};

#include "../src/Queue.inl"
#endif
