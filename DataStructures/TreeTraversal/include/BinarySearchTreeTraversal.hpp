#ifndef BINARYSEARCHTREETRAVERSAL__HPP
#define BINARYSEARCHTREETRAVERSAL__HPP

template <typename T>
class BinarySearchTreeTraversal {
 private:
  class Node {
   public:
    T value;
    Node* left;
    Node* right;
    Node(const T& value);
  };

  Node* root;
  void depthFirstSearchPreOrderOrParentLeftRightTraversal(Node* currentNode);

 public:
  BinarySearchTreeTraversal();
  BinarySearchTreeTraversal(const T& value);

  void printTree();
  bool insert(const T& value);
  bool contains(const T& value);
  // Level Order Traversal
  void breadthFirstSearchOrLevelOrderTraversal();

  // PreOrder Traversal
  void depthFirstSearchPreOrderOrParentLeftRightTraversal();
};

#include "../src/BinarySearchTreeTraversal.inl"
#endif
