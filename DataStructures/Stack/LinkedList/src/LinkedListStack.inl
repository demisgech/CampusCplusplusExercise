#include <iostream>

#include "LinkedListStack.hpp"
#include "StackException.hpp"

using std::cout;
using std::endl;

template <typename T>
Stack<T>::Node::Node(const T& value) {
  this->value = value;
  this->next = nullptr;
}

template <typename T>
Stack<T>::Stack(const T& value) {
  Node* newNode = new Node(value);
  this->top = newNode;
  this->size = 1;
}

template <typename T>
void Stack<T>::printStack() {
  Node* temp = this->top;
  while (temp != nullptr) {
    cout << temp->value << " ";
    temp = temp->next;
  }
  cout << endl;
}

template <typename T>
void Stack<T>::push(const T& value) {
  Node* newNode = new Node(value);
  newNode->next = top;
  this->top = newNode;
  this->size++;
}

template <typename T>
T Stack<T>::pop() {
  if (this->top == nullptr) {
    throw StackException{"Stack is empty!"};
  }
  Node* temp = this->top;
  T poppedValue = temp->value;
  this->top = this->top->next;
  delete temp;
  this->size--;
  return poppedValue;
}

template <typename T>
void Stack<T>::getTop() const {
  if (this->top == nullptr) {
    throw StackException{"Stak is empty!"};
  }
  cout << "Top: " << this->top->value << endl;
}

template <typename T>
void Stack<T>::getHeight() const {
  cout << "Height: " << this->size << endl;
}
