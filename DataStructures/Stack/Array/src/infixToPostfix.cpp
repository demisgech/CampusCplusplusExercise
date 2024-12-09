#include "infixToPostfix.hpp"

#include <cctype>
#include <sstream>

#include "LinkedListStack.hpp"
#include "precedence.hpp"

using namespace std;

string infixToPostfix(const string& infix) {
  const int length = infix.length();
  ostringstream oss;
  Stack<char>* stack = new Stack<char>();
  for (int i = 0; i < length; i++) {
    char token = infix[i];
    if (isdigit(token)) oss << infix[i];
    //   if the token is '(' pushed it to the stack
    else if (token == '(')
      stack->push(token);
    // If the token is ')', pop and output from the stack until an '(' is
    // encountered
    else if (token == ')') {
      while (!stack->isEmpty() && stack->getTop() != '(') {
        oss << stack->pop();
      }
      stack->pop();  // Remove '(' from the stack
    }
    // An operator is encountered
    else {
      while (!stack->isEmpty() &&
             precedence(stack->getTop()) >= precedence(token)) {
        oss << stack->pop();
      }
      stack->push(token);
    }
  }
  // Pop all the operators from the stack
  while (!stack->isEmpty()) {
    oss << stack->pop();
  }
  return oss.str();
}