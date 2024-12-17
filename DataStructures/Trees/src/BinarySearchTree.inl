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
BinarySearchTree<T>::BinarySearchTree()
    : root{nullptr}, leftLevelLength{0}, rightLevelLength{0} {}

template <typename T>
BinarySearchTree<T>::BinarySearchTree(const T& value) {
  Node* newNode = new Node(value);
  this->root = newNode;
  leftLevelLength = 1;
  rightLevelLength = 1;
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
    leftLevelLength = 1;
    rightLevelLength = 1;
    return true;
  }
  Node* temp = this->root;
  while (true) {
    if (newNode->value == temp->value) return false;
    if (newNode->value < temp->value) {
      if (temp->left == nullptr) {
        temp->left = newNode;
        leftLevelLength++;
        return true;
      }
      temp = temp->left;
    } else {
      if (temp->right == nullptr) {
        temp->right = newNode;
        rightLevelLength++;
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

template <typename T>
typename BinarySearchTree<T>::Node* BinarySearchTree<T>::getMin() {
  if (root == nullptr) return nullptr;
  Node* temp = root;
  while (true) {
    if (temp->left == nullptr) return temp;
    temp = temp->left;
  }
}

template <typename T>
typename BinarySearchTree<T>::Node* BinarySearchTree<T>::getMax() {
  if (root == nullptr) return nullptr;
  Node* temp = root;
  while (true) {
    if (temp->right == nullptr) return temp;
    temp = temp->right;
  }
}

template <typename T>
typename BinarySearchTree<T>::Node* BinarySearchTree<T>::getLeftMax() {
  if (root == nullptr) return nullptr;
  Node* temp = root;
  temp = temp->left;
  while (true) {
    if (temp->right == nullptr) return temp;
    temp = temp->right;
  }
}

template <typename T>
typename BinarySearchTree<T>::Node* BinarySearchTree<T>::getRightMin() {
  if (root == nullptr) return nullptr;
  Node* temp = root;
  temp = temp->right;
  while (true) {
    if (temp->left == nullptr) return temp;
    temp = temp->left;
  }
}

template <typename T>
int BinarySearchTree<T>::getHeightOfNode() {
  return leftLevelLength > rightLevelLength ? leftLevelLength - 1
                                            : rightLevelLength - 1;
}

template <typename T>
int BinarySearchTree<T>::getLevelOfNode() {
  return leftLevelLength > rightLevelLength ? leftLevelLength
                                            : rightLevelLength;
}

template <typename T>
void BinarySearchTree<T>::deleteNode(const T& value) {
  if (root == nullptr) return;
  Node* temp = root;
  if (temp->left == nullptr && temp->right == nullptr) {
    if (temp->value == value) {
      delete temp;
      root = nullptr;
    }
    return;
  }
  while (true) {
  }
}
