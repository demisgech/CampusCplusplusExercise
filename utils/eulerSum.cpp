#include <iostream>

using namespace std;

int factorial(int n) { return n <= 1 ? 1 : n * factorial(n - 1); }

double eulerSum(int n) {
  double sum = 0;
  for (int i = 1; i <= n; i++) {
    if (i < n)
      cout << "1/" << i << "! + ";
    else
      cout << "1/" << n << "!" << endl;
    sum += (1 / static_cast<double>(factorial(i)));
  }
  return sum;
}