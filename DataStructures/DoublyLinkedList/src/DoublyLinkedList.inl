#include <iostream>
#include <stdexcept>

#include "DoublyLinkedList.hpp"

using namespace std;

template <typename T>
DoublyLinkedList<T>::Node::Node(const T& value) {
  this->value = value;
  this->prev = nullptr;
  this->next = nullptr;
}

template <typename T>
DoublyLinkedList<T>::DoublyLinkedList(const T& value) {
  Node* newNode = new Node(value);
  this->head = newNode;
  this->tail = newNode;
  this->length = 1;
}

template <typename T>
DoublyLinkedList<T>::~DoublyLinkedList() {
  Node* current = this->head;
  while (current != nullptr) {
    delete current;
    current = current->next;
  }
}

template <typename T>
void DoublyLinkedList<T>::printList() {
  Node* current = this->head;
  while (current != nullptr) {
    cout << current->value << " ";
    current = current->next;
  }
  cout << endl;
}

template <typename T>
void DoublyLinkedList<T>::getHead() const {
  if (this->head == nullptr) invalid_argument{"Head: "};
  cout << "Head: " << head->value << endl;
}

template <typename T>
void DoublyLinkedList<T>::getTail() const {
  if (this->head == nullptr) invalid_argument{"Tail: "};
  cout << "Tail: " << tail->value << endl;
}

template <typename T>
void DoublyLinkedList<T>::getLength() const {
  cout << "Length: " << this->length << endl;
}

template <typename T>
void DoublyLinkedList<T>::append(const T& value) {
  Node* newNode = new Node(value);
  if (this->head == nullptr) {
    this->head = newNode;
    this->tail = newNode;
  } else {
    this->tail->next = newNode;
    newNode->prev = tail;
    this->tail = newNode;
  }
  this->length++;
}

template <typename T>
void DoublyLinkedList<T>::prepend(const T& value) {
  Node* newNode = new Node(value);
  if (this->head == nullptr) {
    this->head = newNode;
    this->tail = newNode;
  } else {
    newNode->next = this->head;
    this->head->prev = newNode;
    this->head = newNode;
  }
  this->length++;
}

template <typename T>
void DoublyLinkedList<T>::deleteLast() {
  if (this->length == 0) return;
  Node* temp = this->tail;
  if (this->length == 1) {
    this->head = nullptr;
    this->tail = nullptr;
  } else {
    tail = tail->prev;
    tail->next = nullptr;
  }
  delete temp;
  this->length--;
}

template <typename T>
void DoublyLinkedList<T>::deleteFirst() {
  if (this->length == 0) return;
  Node* temp = this->head;
  if (this->length == 1) {
    this->head = nullptr;
    this->tail = nullptr;
  } else {
    this->head = this->head->next;
    this->head->prev = nullptr;
  }
  delete temp;
  this->length--;
}

template <typename T>
typename DoublyLinkedList<T>::Node* DoublyLinkedList<T>::get(size_t index) {
  cout << "Comming soon..." << endl;
  return nullptr;
}

template <typename T>
void DoublyLinkedList<T>::set(size_t inde, const T& value) {
  cout << "Comming soon..." << endl;
}
