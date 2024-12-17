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
  binarySearchTreeOne->insert(7);
  binarySearchTreeOne->insert(2);

  binarySearchTreeOne->printTree();

  auto minValue = binarySearchTreeOne->getMin()->value;
  cout << endl << "Min Value: " << minValue << endl;

  auto maxValue = binarySearchTreeOne->getMax()->value;
  cout << endl << "Max value: " << maxValue << endl;

  auto leftMax = binarySearchTreeOne->getLeftMax()->value;
  cout << "Left Max: " << leftMax << endl;

  auto rightMin = binarySearchTreeOne->getRightMin()->value;
  cout << "Right Min: " << rightMin << endl;
  int height = binarySearchTreeOne->getHeightOfNode();
  cout << "Tree height: " << height << endl;
  int level = binarySearchTreeOne->getLevelOfNode();
  cout << "Tree level: " << level << endl;
  {
    // cout << endl;
    // BinarySearchTree<char>* binarySearchTreeTwo = new
    // BinarySearchTree<char>('F'); binarySearchTreeTwo->insert('D');
    // binarySearchTreeTwo->insert('G');
    // binarySearchTreeTwo->insert('C');
    // binarySearchTreeTwo->insert('C');
    // binarySearchTreeTwo->printTree();

    // auto contains = binarySearchTreeTwo->contains('M');
    // cout << endl << "Contains : " << boolalpha << contains << endl;

    // contains = binarySearchTreeOne->contains(6);
    // cout << endl << "Contains : " << boolalpha << contains << endl;
  }
  return 0;
}