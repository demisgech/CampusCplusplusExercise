#include <iostream>

#include "BinarySearchTreeTraversal.hpp"

using namespace std;

int main() {
  try {
    cout << "**** Binary Search Tree Traversal****" << endl;
    BinarySearchTreeTraversal<int>* binarySearchTreeOne =
        new BinarySearchTreeTraversal<int>();
    binarySearchTreeOne->insert(5);
    binarySearchTreeOne->insert(4);
    binarySearchTreeOne->insert(3);
    binarySearchTreeOne->insert(6);
    binarySearchTreeOne->insert(7);
    binarySearchTreeOne->insert(2);

    binarySearchTreeOne->printTree();

    cout << endl;
    BinarySearchTreeTraversal<char>* binarySearchTreeTwo =
        new BinarySearchTreeTraversal<char>('F');
    binarySearchTreeTwo->insert('D');
    binarySearchTreeTwo->insert('G');
    binarySearchTreeTwo->insert('C');
    binarySearchTreeTwo->insert('E');
    binarySearchTreeTwo->insert('C');
    binarySearchTreeTwo->printTree();

    cout << endl;
    binarySearchTreeOne->breadthFirstSearchOrLevelOrderTraversal();

    // cout << endl;
    // binarySearchTreeTwo->breadthFirstSearchOrLevelOrderTraversal();

    // binarySearchTreeOne->depthFirstSearchOrLeftParentRightTraversal();

  } catch (const std::exception& e) {
    std::cerr << e.what() << '\n';
  }

  return 0;
}