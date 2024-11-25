#include <iostream>
#include <stdexcept>

#include "DoublyCircularLinkedList.hpp"

template <typename T>
DoublyCircularLinkedList<T>::Node::Node(const T& value) {
  this->value = value;
  this->prev = nullptr;
  this->next = nullptr;
}

template <typename T>
DoublyCircularLinkedList<T>::DoublyCircularLinkedList(const T& value) {
  Node* newNode = new Node(value);
  this->head = newNode;
  this->tail = newNode;
  this->head->next = this->head;
  this->head->prev = this->head;
  this->length = 1;
}

template <typename T>
DoublyCircularLinkedList<T>::~DoublyCircularLinkedList() {
  Node* current = this->head;
  for (size_t i = 0; i < this->length; ++i) {
    Node* nextNode = current->next;
    delete current;
    current = nextNode;
  }
}

template <typename T>
void DoublyCircularLinkedList<T>::printList() {
  Node* current = this->head;
  for (size_t i = 0; i < this->length; ++i) {
    std::cout << current->value << " ";
    current = current->next;
  }
  std::cout << std::endl;
}

template <typename T>
void DoublyCircularLinkedList<T>::getHead() const {
  if (this->head == nullptr) throw std::invalid_argument("Head: ");
  std::cout << "Head: " << head->value << std::endl;
}

template <typename T>
void DoublyCircularLinkedList<T>::getTail() const {
  if (this->head == nullptr) throw std::invalid_argument("Tail: ");
  std::cout << "Tail: " << tail->value << std::endl;
}

template <typename T>
void DoublyCircularLinkedList<T>::getLength() const {
  std::cout << "Length: " << this->length << std::endl;
}

template <typename T>
void DoublyCircularLinkedList<T>::append(const T& value) {
  Node* newNode = new Node(value);
  if (this->length == 0) {
    this->head = newNode;
    this->tail = newNode;
    this->head->next = this->head;
    this->head->prev = this->head;
  } else {
    newNode->next = this->head;
    newNode->prev = this->tail;
    this->tail->next = newNode;
    this->head->prev = newNode;
    this->tail = newNode;
  }
  this->length++;
}

template <typename T>
void DoublyCircularLinkedList<T>::deleteLast() {
  if (this->length == 0) return;
  Node* temp = this->tail;
  if (this->length == 1) {
    this->head = nullptr;
    this->tail = nullptr;
  } else {
    this->tail = this->tail->prev;
    this->tail->next = this->head;
    this->head->prev = this->tail;
  }
  delete temp;
  this->length--;
}

template <typename T>
void DoublyCircularLinkedList<T>::prepend(const T& value) {
  Node* newNode = new Node(value);
  if (this->length == 0) {
    this->head = newNode;
    this->tail = newNode;
    this->head->next = this->head;
    this->head->prev = this->head;
  } else {
    newNode->next = this->head;
    newNode->prev = this->tail;
    this->tail->next = newNode;
    this->head->prev = newNode;
    this->head = newNode;
  }
  this->length++;
}

template <typename T>
void DoublyCircularLinkedList<T>::deleteFirst() {
  if (this->length == 0) return;
  Node* temp = this->head;
  if (this->length == 1) {
    this->head = nullptr;
    this->tail = nullptr;
  } else {
    this->head = this->head->next;
    this->head->prev = this->tail;
    this->tail->next = this->head;
  }
  delete temp;
  this->length--;
}

template <typename T>
void DoublyCircularLinkedList<T>::deleteAt(size_t index) {
  if (index < 0 || index >= this->length)
    throw std::out_of_range("Index out of range!");
  if (index == 0) {
    deleteFirst();
    return;
  }
  if (index == this->length - 1) {
    deleteLast();
    return;
  }

  Node* current = get(index);
  current->prev->next = current->next;
  current->next->prev = current->prev;
  delete current;
  this->length--;
}

template <typename T>
typename DoublyCircularLinkedList<T>::Node* DoublyCircularLinkedList<T>::get(
    size_t index) {
  if (index < 0 || index >= this->length)
    throw std::out_of_range("Index out of range!");

  Node* current = this->head;
  for (size_t i = 0; i < index; ++i) {
    current = current->next;
  }
  return current;
}

template <typename T>
void DoublyCircularLinkedList<T>::set(size_t index, const T& value) {
  Node* node = get(index);
  node->value = value;
}

template <typename T>
void DoublyCircularLinkedList<T>::insert(size_t index, const T& value) {
  if (index < 0 || index > this->length)
    throw std::out_of_range("Index out of range!");

  if (index == 0) {
    prepend(value);
    return;
  }
  if (index == this->length) {
    append(value);
    return;
  }

  Node* newNode = new Node(value);
  Node* current = get(index - 1);
  Node* next = current->next;

  newNode->next = next;
  next->prev = newNode;
  current->next = newNode;
  newNode->prev = current;
  this->length++;
}

template <typename T>
void DoublyCircularLinkedList<T>::reverse() {
  if (this->length <= 1) return;

  Node* current = this->head;
  do {
    Node* temp = current->next;
    current->next = current->prev;
    current->prev = temp;
    current = current->prev;
  } while (current != this->head);

  Node* temp = this->head;
  this->head = this->tail;
  this->tail = temp;
}
