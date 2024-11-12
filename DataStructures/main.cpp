#include <iostream>

#include "Array.hpp"
#include "ArrayList.hpp"
#include "DoublyLinkedList.hpp"
#include "LinkedList.hpp"

using namespace std;

int main() {
  {
    // cout << endl << "********** Array ************" << endl;
    // Array<int, 5> myArray = {1, 3, 2, 4, 6};
    // myArray.printArray();

    // myArray.reverse();
    // myArray.printArray();

    // myArray.sort();
    // myArray.printArray();

    // cout << endl << "********** ArrayList ************" << endl;
    // ArrayList<double> myArrayList = {1.2, 43.3, 5.5, 6.7};
    // myArrayList.printArrayList();

    // myArrayList.insert(2, 10.0);
    // myArrayList.printArrayList();

    // myArrayList.deleteAt(4);
    // myArrayList.printArrayList();

    // myArrayList.set(1, 44);
    // myArrayList.printArrayList();

    // cout << endl << "********** LinkedList ************" << endl;
    // LinkedList<char>* myLinkedList = new LinkedList<char>('a');
    // myLinkedList->append('b');
    // myLinkedList->prepend('c');
    // myLinkedList->printList();

    // myLinkedList->insert(1, 'd');
    // cout << endl << "After inserted" << endl;
    // myLinkedList->printList();

    // myLinkedList->reverse();
    // cout << endl << "After reversed" << endl;
    // myLinkedList->printList();
  }

  // Array<int, 4> array = {11, 2, 9, 8};

  // ArrayList<int> aList = {1};
  // aList.append(2);
  // aList.prepend(3);

  // LinkedList<int>* list = new LinkedList<int>(2);
  // list->append(9);
  // list->prepend(6);

  DoublyLinkedList<int>* doublyLinkedList = new DoublyLinkedList<int>(12);

  doublyLinkedList->append(13);
  doublyLinkedList->prepend(11);

  doublyLinkedList->insert(0, 10);
  doublyLinkedList->insert(2, 15);
  doublyLinkedList->insert(5, 17);

  doublyLinkedList->set(2, 14);
  // DoublyLinkedList<int>::Node* value = doublyLinkedList->get(2);
  auto value = doublyLinkedList->get(2);
  cout << "Value: " << value->value << endl;

  doublyLinkedList->printList();

  // doublyLinkedList->remove(5);
  // doublyLinkedList->remove(0);
  // doublyLinkedList->remove(2);

  cout << "Before Reversed" << endl;
  doublyLinkedList->printList();
  doublyLinkedList->reverse();

  cout << "After reversed" << endl;
  doublyLinkedList->printList();

  doublyLinkedList->getHead();
  doublyLinkedList->getTail();
  doublyLinkedList->getLength();
  doublyLinkedList->printList();

  // cout << "***********************" << endl
  //      << "****** Main Tasks *****" << endl
  //      << "***********************" << endl
  //      << "1.Array" << endl
  //      << "2.ArrayList" << endl
  //      << "3.LinkedList" << endl
  //      << "4.Exit" << endl
  //      << "Choice: ";

  // short choice;
  // cin >> choice;
  // switch (choice) {
  //   case 1: {
  //     char response;
  //     do {
  //       cout << "**********************" << endl
  //            << "***** Array Menu *****" << endl
  //            << "*********************" << endl
  //            << "1. Get" << endl
  //            << "2. Set" << endl
  //            << "3. search" << endl
  //            << "4. Sort" << endl
  //            << "5. Display" << endl
  //            << "6. Reverse" << endl
  //            << "7.Exit" << endl
  //            << "Choice: ";
  //       short choice;
  //       cin >> choice;
  //       switch (choice) {
  //         case 1: {
  //           size_t index;
  //           cout << "Index: ";
  //           cin >> index;
  //           auto value = array.get(index);
  //           cout << "Value: " << value << endl;
  //           break;
  //         }
  //         case 2: {
  //           size_t index;
  //           cout << "Index: ";
  //           cin >> index;
  //           int value;
  //           cout << "Value: ";
  //           cin >> value;
  //           array.set(index, value);
  //           array.printArray();
  //           break;
  //         }
  //         case 3: {
  //           int target;
  //           cout << "target: ";
  //           cin >> target;
  //           size_t index = array.find(target);
  //           cout << "Index: " << index << endl;
  //           break;
  //         }
  //         case 4: {
  //           array.sort();
  //           array.printArray();
  //           break;
  //         }
  //         case 5: {
  //           array.printArray();
  //           break;
  //         }
  //         case 6: {
  //           array.reverse();
  //           array.printArray();
  //           break;
  //         }
  //         default:
  //           break;
  //       }
  //       cout << "Do you want to continue [y]/[n]: ";
  //       cin >> response;
  //     } while (response == 'Y' || response == 'y');
  //     break;
  //   }
  //   case 2: {
  //     aList.printArrayList();
  //     // aList.insert(3, 4);
  //     char response;
  //     do {
  //       cout << "**********************" << endl
  //            << "***** ArrayList Menu *****" << endl
  //            << "*********************" << endl
  //            << "1. Delete" << endl
  //            << "2. Insert" << endl
  //            << "3. Get" << endl
  //            << "4. Set" << endl
  //            << "5. search" << endl
  //            << "6. Sort" << endl
  //            << "7. Display" << endl
  //            << "8. Reverse" << endl
  //            << "9.Exit" << endl
  //            << "Choice: ";
  //       short choice;
  //       cin >> choice;
  //       switch (choice) {
  //         case 1: {
  //           size_t index;
  //           cout << "Index: ";
  //           cin >> index;
  //           aList.deleteAt(index);
  //           aList.printArrayList();
  //           break;
  //         }
  //         case 2: {
  //           size_t index;
  //           cout << "Index: ";
  //           cin >> index;
  //           int value;
  //           cout << "Value: ";
  //           cin >> value;
  //           aList.insert(index, value);
  //           aList.printArrayList();
  //           break;
  //         }
  //         case 3: {
  //           size_t index;
  //           cout << "Index: ";
  //           cin >> index;
  //           auto value = aList.get(index);
  //           cout << "Value: " << value << endl;
  //         }
  //         case 4: {
  //           size_t index;
  //           cout << "Index: ";
  //           cin >> index;
  //           int value;
  //           cout << "Value: ";
  //           cin >> value;
  //           aList.set(index, value);
  //           aList.printArrayList();
  //           break;
  //         }
  //         case 5: {
  //           int target;
  //           cout << "target: ";
  //           cin >> target;
  //           size_t index = aList.find(target);
  //           cout << "Index: " << index << endl;
  //           break;
  //         }
  //         case 6: {
  //           aList.sort();
  //           aList.printArrayList();
  //           break;
  //         }
  //         case 7: {
  //           aList.printArrayList();
  //           break;
  //         }
  //         case 8: {
  //           aList.reverse();
  //           aList.printArrayList();
  //           break;
  //         }
  //         case 9: {
  //           return 1;
  //         }
  //         default:
  //           break;
  //       }
  //       cout << "Do you want to continue [y]/[n]: ";
  //       cin >> response;
  //     } while (response == 'Y' || response == 'y');
  //     break;
  //   }
  //   case 3: {
  //     list->printList();
  //     char response;
  //     do {
  //       cout << "**********************" << endl
  //            << "***** ArrayList Menu *****" << endl
  //            << "*********************" << endl
  //            << "1. Delete" << endl
  //            << "2. Insert" << endl
  //            << "3. Get" << endl
  //            << "4. Set" << endl
  //            << "5. search" << endl
  //            << "6. Sort" << endl
  //            << "7. Display" << endl
  //            << "8. Reverse" << endl
  //            << "9.Exit" << endl
  //            << "Choice: ";
  //       short choice;
  //       cin >> choice;
  //       switch (choice) {
  //         case 1: {
  //           size_t index;
  //           cout << "Index: ";
  //           cin >> index;
  //           list->deleteAt(index);
  //           list->printList();
  //           break;
  //         }
  //         case 2: {
  //           size_t index;
  //           cout << "Index: ";
  //           cin >> index;
  //           int value;
  //           cout << "Value: ";
  //           cin >> value;
  //           list->insert(index, value);
  //           list->printList();
  //           break;
  //         }
  //         case 3: {
  //           size_t index;
  //           cout << "Index: ";
  //           cin >> index;
  //           auto value = list->get(index);
  //           cout << "Value: " << value << endl;
  //         }
  //         case 4: {
  //           size_t index;
  //           cout << "Index: ";
  //           cin >> index;
  //           int value;
  //           cout << "Value: ";
  //           cin >> value;
  //           list->set(index, value);
  //           list->printList();
  //           break;
  //         }
  //         case 5: {
  //           int target;
  //           cout << "target: ";
  //           cin >> target;
  //           size_t index = list->find(target);
  //           cout << "Index: " << index << endl;
  //           break;
  //         }
  //         case 6: {
  //           list->sort();
  //           list->printList();
  //           break;
  //         }
  //         case 7: {
  //           list->printList();
  //           break;
  //         }
  //         case 8: {
  //           list->reverse();
  //           list->printList();
  //           break;
  //         }
  //         case 9: {
  //           return 1;
  //         }
  //         default:
  //           break;
  //       }
  //       cout << "Do you want to continue [y]/[n]: ";
  //       cin >> response;
  //     } while (response == 'Y' || response == 'y');
  //     break;
  //   }
  //   case 4:
  //     return 1;
  //   default:
  //     cout << "Invalid choice! Please, run the program again!" << endl;
  //     break;
  // }

  return 0;
}