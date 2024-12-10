#include <iostream>

#include "PriorityQueue.hpp"

using namespace std;

template <typename T, typename U>
PriorityQueue<T, U>::Node::Node(const T& key, const U& value) {
  this->key = key;
  this->value = value;
  this->next = nullptr;
}

template <typename T, typename U>
PriorityQueue<T, U>::PriorityQueue()
    : first{nullptr}, last{nullptr}, length{0} {}

template <typename T, typename U>
PriorityQueue<T, U>::~PriorityQueue() {
  Node* temp = first;
  while (temp != nullptr) {
    delete temp;
    temp = temp->next;
  }
}

template <typename T, typename U>
void PriorityQueue<T, U>::printPriorityQueue() {
  Node* temp = this->first;
  while (temp != nullptr) {
    cout << "{ Key: " << temp->key << ", Value: " << temp->value << " }"
         << endl;
    temp = temp->next;
  }
}

template <typename T, typename U>
void PriorityQueue<T, U>::enqueue(const T& key, const U& value) {
  Node* newNode = new Node(key, value);

  if (first == nullptr || key > first->key) {
    newNode->next = first;
    first = newNode;
    if (last == nullptr) {
      last = newNode;
    }
  } else {
    Node* current = this->first;
    while (current->next != nullptr && current->next->key >= key) {
      current = current->next;
    }
    newNode->next = current->next;
    current->next = newNode;
    if (current->next == nullptr) {
      last = newNode;
    }
  }
  this->length++;
}

template <typename T, typename U>
PriorityQueue<T, U>::Node* PriorityQueue<T, U>::dequeue() {
  if (first == nullptr) return nullptr;
  Node* temp = first;
  Node* dequeuedNode = temp;
  first = first->next;
  if (first == nullptr) {
    last = nullptr;
  }
  length--;
  delete temp;
  return dequeuedNode;
}

template <typename T, typename U>
typename PriorityQueue<T, U>::Node* PriorityQueue<T, U>::getFirst() const {
  return first;
}

template <typename T, typename U>
typename PriorityQueue<T, U>::Node* PriorityQueue<T, U>::getLast() const {
  return last;
}

template <typename T, typename U>
int PriorityQueue<T, U>::getHeight() const {
  return length;
}
