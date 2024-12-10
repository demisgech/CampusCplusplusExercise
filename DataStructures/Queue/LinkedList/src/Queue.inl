#include <iostream>

#include "Queue.hpp"
#include "QueueException.hpp"

using namespace std;

template <typename T>
Queue<T>::Node::Node(const T& value) {
  this->value = value;
  this->next = nullptr;
}

template <typename T>
Queue<T>::Queue(const T& value) {
  Node* newNode = new Node(value);
  this->first = newNode;
  this->last = newNode;
  this->length = 1;
}

template <typename T>
Queue<T>::~Queue() {
  Node* temp = this->first;
  while (temp != nullptr) {
    delete temp;
    temp = temp->next;
  }
}

template <typename T>
void Queue<T>::printQueue() {
  Node* temp = this->first;
  while (temp != nullptr) {
    cout << temp->value << " ";
    temp = temp->next;
  }
  cout << endl;
}

template <typename T>
void Queue<T>::enqueue(const T& value) {
  Node* newNode = new Node(value);
  if (this->first == nullptr) {
    this->first = newNode;
    this->last = newNode;
  } else {
    this->last->next = newNode;
    this->last = newNode;
  }
  this->length++;
}

template <typename T>
typename Queue<T>::Node* Queue<T>::dequeue() {
  if (this->first == nullptr) return nullptr;
  Node* temp = this->first;
  Node* dequeuedNode = temp;
  this->first = this->first->next;
  delete temp;
  length--;
  return dequeuedNode;
}

template <typename T>
T Queue<T>::getFirst() const {
  if (this->first == nullptr) {
    throw QueueException("Queue is empty!");
  }
  return this->first->value;
}

template <typename T>
T Queue<T>::getLast() const {
  if (this->first == nullptr) {
    throw QueueException{"Queue is empty!"};
  }
  return this->last->value;
}

template <typename T>
int Queue<T>::getHeight() const {
  return this->length;
}