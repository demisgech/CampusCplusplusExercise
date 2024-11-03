#ifndef LINKEDLIST__HPP__
#define LINKEDLIST__HPP__

#include <cstdlib>

using namespace std;

template <typename T>
class LinkedList {
 private:
  class Node {
   public:
    T value;
    Node* next;
    Node(const T& value);
  };

  Node* head;
  Node* tail;
  size_t length;

 public:
  LinkedList(const T& value);
  ~LinkedList();

  void printList();
  void getHead() const;
  void getTail() const;
  void getLength() const;
};

#include "../src/LinkedList.inl"
#endif  // LINKEDLIST__HPP__
