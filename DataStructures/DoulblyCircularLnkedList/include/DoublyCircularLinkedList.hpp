#ifndef CIRCULARLINKEDLIST__HPP
#define CIRCULARLINKEDLIST__HPP

#include <cstdlib>

using std::size_t;

template <typename T>
class DoublyCircularLinkedList {
 private:
  class Node {
   public:
    T value;
    Node* next;
    Node* prev;
    Node(const T& value);
  };

 public:
  Node* head;
  Node* tail;
  size_t length;
  DoublyCircularLinkedList(const T& value);
  ~DoublyCircularLinkedList();

  void printList();
  void getHead() const;
  void getTail() const;
  void getLength() const;

  void append(const T& value);
  void deleteLast();

  void prepend(const T& value);
  void deleteFirst();

  void deleteAt(size_t index);

  Node* get(size_t index);
  void set(size_t index, const T& value);
  void insert(size_t index, const T& value);
  void reverse();
};

#include "../src/DoublyCircularLinkedList.inl"

#endif  // CIRCULARLINKEDLIST__HPP
