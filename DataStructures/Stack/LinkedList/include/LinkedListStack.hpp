#ifndef STACK__HPP
#define STACK__HPP

#include <cstdlib>

using std::size_t;

template <typename T>
class Stack {
 private:
  class Node {
   public:
    T value;
    Node* next;
    Node(const T& value);
  };

 public:
  Node* top;
  size_t size;
  Stack();
  Stack(const T& value);
  void printStack();
  void push(const T& value);
  T pop();

  T getTop() const;
  int getHeight() const;
  bool isEmpty();
};

#include "../src/LinkedListStack.inl"
#endif  // STACK__HPP