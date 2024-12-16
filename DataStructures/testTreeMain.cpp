#include <iostream>

#include "BinarySearchTree.hpp"

using namespace std;

int main() {
  cout << "**** Binary Search Tree ****" << endl;
  BinarySearchTree<int>* binarySearchTreeOne = new BinarySearchTree<int>();
  binarySearchTreeOne->insert(4);
  binarySearchTreeOne->insert(3);
  binarySearchTreeOne->insert(5);
  binarySearchTreeOne->insert(6);
  binarySearchTreeOne->printTree();

  cout << endl;
  BinarySearchTree<char>* binarySearchTreeTwo = new BinarySearchTree<char>('F');
  binarySearchTreeTwo->insert('D');
  binarySearchTreeTwo->insert('G');
  binarySearchTreeTwo->insert('C');
  binarySearchTreeTwo->insert('C');
  binarySearchTreeTwo->printTree();

  auto contains = binarySearchTreeTwo->contains('M');
  cout << endl << "Contains : " << boolalpha << contains << endl;

  contains = binarySearchTreeOne->contains(6);
  cout << endl << "Contains : " << boolalpha << contains << endl;
  return 0;
}