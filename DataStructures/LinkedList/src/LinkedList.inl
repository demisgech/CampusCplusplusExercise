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
LinkedList<T>::~LinkedList() {}

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
