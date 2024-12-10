#include <cctype>
#include <string>

#include "LinkedListStack.hpp"

using namespace std;

int evaluatePrefix(const string& expression) {
  int length = expression.length();
  Stack<int>* stack = new Stack<int>();
  // "-+2319"
  for (int i = length - 1; i >= 0; --i) {
    if (isdigit(expression[i])) {
      stack->push(expression[i] - '0');  // Conver char to int
    } else {
      int val1 = stack->getTop();
      stack->pop();
      int val2 = stack->getTop();
      stack->pop();
      switch (expression[i]) {
        case '+':
          stack->push(val1 + val2);
          break;
        case '-':
          stack->push(val1 - val2);
          break;
        case '*':
          stack->push(val1 * val2);
          break;
        case '/':
          stack->push(val1 / val2);
          break;
      }
    }
  }
  auto result = stack->getTop();
  // stack->pop();  // clean up the stack
  // delete stack;  // free the allocated memory
  return result;
}