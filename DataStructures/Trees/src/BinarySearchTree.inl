#include <iostream>

#include "BinarySearchTree.hpp"

using std::cout;
using std::endl;

template <typename T>
BinarySearchTree<T>::Node::Node(const T& value) {
  this->value = value;
  this->left = nullptr;
  this->right = nullptr;
}

template <typename T>
BinarySearchTree<T>::BinarySearchTree() : root{nullptr} {}

template <typename T>
BinarySearchTree<T>::BinarySearchTree(const T& value) {
  Node* newNode = new Node(value);
  this->root = newNode;
}

template <typename T>
void BinarySearchTree<T>::printTree() {
  Node* tempLeft = this->root;
  cout << "*** Left Tree ***" << endl;
  while (tempLeft != nullptr) {
    cout << tempLeft->value << " ";
    tempLeft = tempLeft->left;
  }

  Node* tempRight = root;
  cout << endl << "*** Right Tree ***" << endl;
  while (tempRight != nullptr) {
    cout << tempRight->value << " ";
    tempRight = tempRight->right;
  }
}

template <typename T>
bool BinarySearchTree<T>::insert(const T& value) {
  Node* newNode = new Node(value);
  if (this->root == nullptr) {
    this->root = newNode;
    return true;
  }
  Node* temp = this->root;
  while (true) {
    if (newNode->value == temp->value) return false;
    if (newNode->value < temp->value) {
      if (temp->left == nullptr) {
        temp->left = newNode;
        return true;
      }
      temp = temp->left;
    } else {
      if (temp->right == nullptr) {
        temp->right = newNode;
        return true;
      }
      temp = temp->right;
    }
  }
}

template <typename T>
bool BinarySearchTree<T>::contains(const T& value) {
  if (root == nullptr) return false;
  Node* temp = this->root;
  while (temp != nullptr) {
    if (value < temp->value)
      temp = temp->left;
    else if (value > temp->value)
      temp = temp->right;
    else
      return true;
  }
  return false;
}