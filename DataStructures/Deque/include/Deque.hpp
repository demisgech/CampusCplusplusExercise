#ifndef DEQUE__HPP
#define DEQUE__HPP

template <typename T>
class Deque {
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
  Deque(const T& value);
  ~Deque();

  void printDeque();

  void enqueueLast(const T& value);
  void enqueueFirst(const T& value);

  Node* getFirst() const;
  Node* getLast() const;
  int getHeight() const;
  void dequeueFirst();
  void dequeueLast();
};

#include "../src/Deque.inl"
#endif