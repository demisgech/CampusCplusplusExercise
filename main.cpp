#include <iostream>

#include "./utils/decimal2Binary.hpp"
#include "./utils/palindrome.hpp"
using namespace std;

int main() {
  cout << palindrome(123);
  cout << endl;
  decimal2Binary(12);
  return 0;
}