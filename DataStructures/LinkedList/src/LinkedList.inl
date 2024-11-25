#include <iostream>
#include <stdexcept>

#include "LinkedList.hpp"

using namespace std;

template <typename T>
LinkedList<T>::Node::Node(const T& value) {
  this->value = value;
  this->next = nullptr;
}

template <typename T>
LinkedList<T>::LinkedList(const T& value) {
  Node* newNode = new Node(value);
  this->head = newNode;
  this->tail = newNode;
  this->length = 1;
}

template <typename T>
LinkedList<T>::~LinkedList() {
  Node* current = this->head;
  while (current != nullptr) {
    delete current;
    current = current->next;
  }
}

template <typename T>
void LinkedList<T>::printList() {
  Node* temp = this->head;
  while (temp != nullptr) {
    cout << temp->value << "->";
    temp = temp->next;
  }
  cout << "nullptr" << endl;
}

template <typename T>
void LinkedList<T>::getHead() const {
  if (this->head == nullptr) invalid_argument{"Head: "};
  cout << "Head: " << head->value << endl;
}

template <typename T>
void LinkedList<T>::getTail() const {
  if (this->head == nullptr) invalid_argument{"Tail: "};
  cout << "Tail: " << tail->value << endl;
}

template <typename T>
void LinkedList<T>::getLength() const {
  cout << "Length: " << this->length << endl;
}

template <typename T>
void LinkedList<T>::append(const T& value) {
  Node* newNode = new Node(value);
  if (this->head == nullptr) {
    this->head = newNode;
    this->tail = newNode;
  } else {
    this->tail->next = newNode;
    this->tail = newNode;
  }
  this->length++;
}

template <typename T>
void LinkedList<T>::deleteLast() {
  if (this->head == nullptr) return;

  Node* temp = this->head;
  Node* pre = this->head;
  while (temp->next != nullptr) {
    pre = temp;
    temp = temp->next;
  }

  this->length--;
  this->tail = pre;
  this->tail->next = nullptr;
  if (this->length == 0) {
    this->head = this->tail = nullptr;
  }
  delete temp;
}

template <typename T>
void LinkedList<T>::prepend(const T& value) {
  Node* newNode = new Node(value);
  if (this->head == nullptr) {
    this->head = newNode;
    this->tail = newNode;
  } else {
    newNode->next = this->head;
    this->head = newNode;
  }
  length++;
}

template <typename T>
void LinkedList<T>::deleteFirst() {
  if (this->head == nullptr) return;

  Node* temp = this->head;
  this->head = this->head->next;
  this->length--;
  delete temp;
}

template <typename T>
void LinkedList<T>::deleteAt(size_t index) {
  cout << "Comming soon...." << endl;
}

template <typename T>
typename LinkedList<T>::Node* LinkedList<T>::get(size_t index) {
  if (index < 0 || index >= length) {
    throw out_of_range{"Index out of range!"};
  }
  Node* temp = this->head;
  for (size_t i = 0; i < index; i++) {
    temp = temp->next;
  }
  return temp;
}

template <typename T>
void LinkedList<T>::set(size_t index, const T& value) {
  Node* temp = get(index);
  temp->value = value;
}

template <typename T>
void LinkedList<T>::insert(size_t index, const T& value) {
  if (index < 0 || index > length) return;
  if (index == 0) {
    prepend(value);
    return;
  }
  if (index == length) {
    append(value);
    return;
  }
  Node* newNode = new Node(value);
  Node* temp = get(index - 1);
  newNode->next = temp->next;
  temp->next = newNode;
  this->length++;
}

template <typename T>
void LinkedList<T>::reverse() {
  int count = 0;
  Node* temp = this->head;
  this->head = this->tail;
  this->tail = temp;
  Node* after = temp->next;
  Node* before = nullptr;
  for (size_t i = 0; i < length; ++i) {
    after = temp->next;
    temp->next = before;
    before = temp;
    temp = after;
    count++;
  }
  cout << "Count: " << count << endl;
}

template <typename T>
void LinkedList<T>::sort() {
  cout << "Comming soon...." << endl;
}

template <typename T>
size_t LinkedList<T>::find(const T& value) {
  cout << "Comming soon...." << endl;
  return size_t();
}
