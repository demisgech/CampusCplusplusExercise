#ifndef DOUBLYLINKEDLIST__HPP
#define DOUBLYLINKEDLIST__HPP

template <typename T>
class DoublyLinkedList {
 private:
  class Node {
   public:
    T value;
    Node* prev;
    Node* next;
    Node(const T& value);
  };

 public:
  Node* head;
  Node* tail;
  size_t length;
  DoublyLinkedList(const T& value);
  ~DoublyLinkedList();

  void printList();
  void getHead() const;
  void getTail() const;
  void getLength() const;

  void append(const T& value);
  void prepend(const T& value);

  void deleteLast();
  void deleteFirst();

  /// @brief
  /// @param index
  /// @return
  Node* get(size_t index);

  /// @brief
  /// @param index
  /// @param value
  void set(size_t index, const T& value);

  void insert(size_t index, const T& value);
  void remove(size_t index);

  void reverse();
};

#include "../src/DoublyLinkedList.inl"
#endif  // DOUBLYLINKEDLIST__HPP
