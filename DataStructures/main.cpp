#include <iostream>

#include "ArrayStack.hpp"
// #include "LinkedListStack.hpp"
#include "binary2decimal.hpp"
#include "decimal2binary.hpp"
#include "evaluatePostfix.hpp"
#include "evaluatePrefix.hpp"
#include "infixToPostfix.hpp"
#include "palindrome.hpp"

using namespace std;

int main() {
  // try {
  // Stack<int,3>* stack = new Stack<int>(2);
  // stack->push(1);
  // stack->push(3);
  // stack->push(5);
  // stack->push(7);
  // stack->printStack();
  // auto poppedValue = stack->pop();
  // cout << "Poppped Value: " << poppedValue << endl;
  // // stack->pop();
  // // stack->pop();
  // stack->printStack();
  // stack->getHeight();
  // stack->getTop();

  //   Stack<int, 3> arrayStack = {1};
  //   arrayStack.push(2);
  //   arrayStack.push(3);
  //   // arrayStack.push(4);
  //   int value = arrayStack.pop();
  //   // auto poppedValue = arrayStack.pop();
  //   cout << "Popped Value: " << value << endl;

  //   arrayStack.printStack();
  // } catch (const StackException& ex) {
  //   cout << ex.what();
  // }
  // cout << palindrome("RaDar") << endl;
  // cout << decimal2binary(10) << endl;
  // cout << "Decimal: " << binary2decimal("1010");

  // cout << "Value: " << evaluatePostfix("231*+9-") << endl;
  // cout << "Value: " << evaluatePrefix("*-+2319") << endl;

  auto result = infixToPostfix("(2+3)-31*8+9-");
  cout << "Converted value: " << result << endl;
  auto value = evaluatePostfix("(2+3)-31*8+9-");
  cout << "Calculated value: " << value;
  return 0;
}