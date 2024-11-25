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
  Stack(const T& value);
  void printStack();
  void push(const T& value);
  T pop();

  void getTop() const;
  void getHeight() const;
};

#include "../src/LinkedListStack.inl"
#endif  // STACK__HPP