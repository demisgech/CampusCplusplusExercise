#ifndef BINARYSEARCHTREE__HPP
#define BINARYSEARCHTREE__HPP

template <typename T>
class BinarySearchTree {
 private:
  class Node {
   public:
    T value;
    Node* left;
    Node* right;
    Node(const T& value);
  };

  Node* root;

 public:
  BinarySearchTree();
  BinarySearchTree(const T& value);

  void printTree();
  bool insert(const T& value);
  bool contains(const T& value);
};

#include "../src/BinarySearchTree.inl"
#endif
