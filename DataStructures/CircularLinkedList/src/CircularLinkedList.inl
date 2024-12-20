#include <iostream>

#include "CircularLinkedList.hpp"

template <typename T>
CircularLinkedList<T>::Node::Node(const T& value)
    : value(value), next(nullptr) {}

template <typename T>
CircularLinkedList<T>::CircularLinkedList(const T& value) {
  Node* newNode = new Node(value);
  head = newNode;
  tail = newNode;
  tail->next = head;
  length = 1;
}

template <typename T>
CircularLinkedList<T>::~CircularLinkedList() {
  Node* current = head;
  Node* nextNode;
  while (length > 0) {
    nextNode = current->next;
    delete current;
    current = nextNode;
    length--;
  }
}

template <typename T>
void CircularLinkedList<T>::printList() {
  Node* current = head;
  for (size_t i = 0; i < length; i++) {
    std::cout << current->value << " ";
    current = current->next;
  }
  std::cout << std::endl;
}

template <typename T>
void CircularLinkedList<T>::getHead() const {
  if (head) {
    std::cout << "Head: " << head->value << std::endl;
  }
}

template <typename T>
void CircularLinkedList<T>::getTail() const {
  if (tail) {
    std::cout << "Tail: " << tail->value << std::endl;
  }
}

template <typename T>
void CircularLinkedList<T>::getLength() const {
  std::cout << "Length: " << length << std::endl;
}

template <typename T>
void CircularLinkedList<T>::append(const T& value) {
  Node* newNode = new Node(value);
  if (length == 0) {
    head = newNode;
    tail = newNode;
    tail->next = head;
  } else {
    tail->next = newNode;
    tail = newNode;
    tail->next = head;
  }
  length++;
}

template <typename T>
void CircularLinkedList<T>::deleteLast() {
  if (length == 0) return;

  Node* current = head;
  if (length == 1) {
    delete head;
    head = nullptr;
    tail = nullptr;
  } else {
    while (current->next != tail) {
      current = current->next;
    }
    delete tail;
    tail = current;
    tail->next = head;
  }
  length--;
}

template <typename T>
void CircularLinkedList<T>::prepend(const T& value) {
  Node* newNode = new Node(value);
  if (length == 0) {
    head = newNode;
    tail = newNode;
    tail->next = head;
  } else {
    newNode->next = head;
    head = newNode;
    tail->next = head;
  }
  length++;
}

template <typename T>
void CircularLinkedList<T>::deleteFirst() {
  if (length == 0) return;

  Node* temp = head;
  if (length == 1) {
    head = nullptr;
    tail = nullptr;
  } else {
    head = head->next;
    tail->next = head;
  }
  delete temp;
  length--;
}

template <typename T>
void CircularLinkedList<T>::deleteAt(size_t index) {
  if (index >= length) return;
  if (index == 0) {
    deleteFirst();
    return;
  }
  if (index == length - 1) {
    deleteLast();
    return;
  }

  Node* current = head;
  for (size_t i = 0; i < index - 1; i++) {
    current = current->next;
  }
  Node* temp = current->next;
  current->next = temp->next;
  delete temp;
  length--;
}

template <typename T>
typename CircularLinkedList<T>::Node* CircularLinkedList<T>::get(size_t index) {
  if (index >= length) return nullptr;

  Node* current = head;
  for (size_t i = 0; i < index; i++) {
    current = current->next;
  }
  return current;
}

template <typename T>
void CircularLinkedList<T>::set(size_t index, const T& value) {
  Node* node = get(index);
  if (node) {
    node->value = value;
  }
}

template <typename T>
void CircularLinkedList<T>::insert(size_t index, const T& value) {
  if (index > length) return;
  if (index == 0) {
    prepend(value);
    return;
  }
  if (index == length) {
    append(value);
    return;
  }

  Node* newNode = new Node(value);
  Node* current = head;
  for (size_t i = 0; i < index - 1; i++) {
    current = current->next;
  }
  newNode->next = current->next;
  current->next = newNode;
  length++;
}

template <typename T>
void CircularLinkedList<T>::reverse() {
  if (length <= 1) return;

  Node* prev = tail;
  Node* current = head;
  Node* next;

  for (size_t i = 0; i < length; i++) {
    next = current->next;
    current->next = prev;
    prev = current;
    current = next;
  }

  tail = head;
  head = prev;
}
