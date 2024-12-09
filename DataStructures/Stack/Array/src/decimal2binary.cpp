#include <iostream>

#include "ArrayStack.hpp"

using std::cout;
using namespace std;

string decimal2binary(int decimal) {
  Stack<int, 5> stack;
  while (decimal > 0) {
    stack.push(decimal % 2);
    decimal /= 2;
  }
  string binary;
  while (stack.getHeight() > 0) {
    binary += to_string(stack.getTop());
    stack.pop();
  }
  return binary;
}
