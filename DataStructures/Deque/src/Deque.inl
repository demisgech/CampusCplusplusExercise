#include <iostream>

#include "Deque.hpp"

using namespace std;

template <typename T>
Deque<T>::Node::Node(const T& value) : value{value}, next{nullptr} {}

template <typename T>
Deque<T>::Deque(const T& value) {
  Node* newNode = new Node(value);
  this->first = newNode;
  this->last = newNode;
  length = 1;
}

template <typename T>
Deque<T>::~Deque() {
  Node* temp = this->first;
  while (temp != nullptr) {
    delete temp;
    temp = temp->next;
  }
}

template <typename T>
void Deque<T>::printDeque() {
  Node* temp = this->first;
  while (temp != nullptr) {
    cout << temp->value << " ";
    temp = temp->next;
  }
  cout << endl;
}

template <typename T>
void Deque<T>::enqueueLast(const T& value) {
  Node* newNode = new Node(value);
  if (first == nullptr) {
    first = newNode;
    last = newNode;
  } else {
    last->next = newNode;
    last = newNode;
  }
  length++;
}

template <typename T>
void Deque<T>::enqueueFirst(const T& value) {
  Node* newNode = new Node(value);
  if (first == nullptr) {
    first = newNode;
    last = newNode;
  } else {
    newNode->next = first;
    first = newNode;
  }
  length++;
}

template <typename T>
typename Deque<T>::Node* Deque<T>::getFirst() const {
  if (first == nullptr) return nullptr;
  return first;
}

template <typename T>
typename Deque<T>::Node* Deque<T>::getLast() const {
  if (first == nullptr) return nullptr;
  return last;
}

template <typename T>
inline int Deque<T>::getHeight() const {
  return length;
}

template <typename T>
void Deque<T>::dequeueFirst() {
  if (first == nullptr) return;
  Node* temp = first;
  first = first->next;
  length--;
  delete temp;
}

template <typename T>
void Deque<T>::dequeueLast() {
  if (first == nullptr) return;
  Node* temp = first;
  Node* pre = nullptr;
  while (temp->next != nullptr) {
    pre = temp;
    temp = temp->next;
  }
  last = pre;
  last->next = nullptr;
  length--;
  delete temp;
}
