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

  void append(const T& value);
  void deleteLast();

  void prepend(const T& value);
  void deleteFirst();

  void deleteAt(size_t index);

  Node* get(size_t index);
  void set(size_t index, const T& value);
  void insert(size_t index, const T& value);
  void reverse();
  void sort();
  size_t find(const T& value);
};

#include "../src/LinkedList.inl"
#endif  // LINKEDLIST__HPP__
