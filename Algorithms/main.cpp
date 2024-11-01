#include <iostream>

#include "Searching.hpp"
#include "Sorting.hpp"

using namespace Sorting;
using namespace Searching;
using namespace std;

int main() {
  // double nummbers[] = {6, 5, 4, 3, 2, 1};
  double numbers[] = {1, 3, 4, 6, 2, 5};
  int size = sizeof(numbers) / sizeof(numbers[0]);
  print(numbers, size);
  cout << endl;

  cout << "******************" << endl
       << "*** Algorithms ***" << endl
       << "******************" << endl;
  cout << "*** Main Menu ***" << endl
       << "1. Sorting" << endl
       << "2. Searching" << endl
       << "Choice: ";
  int choice;
  cin >> choice;
  switch (choice) {
    case 1: {
      cout << "*** Sort Menu ***" << endl
           << "1. Simple Sort" << endl
           << "2. Bubble Sort" << endl
           << "3. Selection Sort" << endl
           << "4. Insertion Sort" << endl
           << "5. Binary Insetion Sort" << endl
           << "6. Merge Sort" << endl
           << "7. Quick Sort" << endl
           << "Choice: ";
      int choice;
      cin >> choice;
      switch (choice) {
        case 1: {
          simpleSort(numbers, size);
          print(numbers, size);
          cout << endl;
          break;
        }
        case 2: {
          bubbleSort(numbers, size);
          print(numbers, size);
          cout << endl;
          break;
        }
        case 3: {
          selectionSort(numbers, size);
          print(numbers, size);
          cout << endl;
          break;
        }
        case 4: {
          insertionSort(numbers, size);
          print(numbers, size);
          break;
        }
        case 5: {
          binaryInsertionSort(numbers, size);
          print(numbers, size);
        } break;
        case 6:
          mergeSort(numbers, size);
          break;
        case 7:
          quickSort(numbers, size);
          break;
        default:
          break;
      }
      break;
    }
    case 2: {
      cout << "*** Search Menu ***" << endl
           << "1. Linear Search" << endl
           << "2. Binary Search" << endl
           << "Choice: ";
      int choice;
      cin >> choice;
      switch (choice) {
        case 1: {
          double target = 6;
          int index = linearSearch(numbers, size, target);
          cout << target << " found at index " << index << endl;
          break;
        }
        case 2: {
          cout << "*** Binary Search ***" << endl;

          double target = 6;
          bool isFound = binarySearchItem(numbers, size, target);
          // int index = binarySearch(numbers, size, target);
          int index = isFound ? binarySearch(numbers, size, target) : -1;
          cout << target << " found at index " << index << endl;
          break;
        }
        default:
          break;
      }
      break;
    }
    default:
      break;
  }

  return 0;
}