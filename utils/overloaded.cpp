#include <iostream>
using namespace std;

void greet(string name) { cout << "Hello " << name << endl; }

void greet(string title, string name) {
  cout << "Hello " << title << " " << name << endl;
}

// Call by reference
void increasePrice(double &price) { price *= 1.2; }

// Call by value
void increasePrice(int price) { price *= 10; }

// Call by pointer -> reference
void maximizePrice(double *price) { *price *= 1.4; }

double *doubleNumbers(double *numbers, int size) {
  double *result = numbers;
  for (int i = 0; i < size; ++i)
    result[i] = 2 * result[i];
  return result;
}
