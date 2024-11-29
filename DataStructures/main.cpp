#include <iostream>

#include "ArrayStack.hpp"
// #include "LinkedListStack.hpp"

using namespace std;

int main() {
  try {
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

    Stack<int, 3> arrayStack = {1};
    arrayStack.push(2);
    arrayStack.push(3);
    // arrayStack.push(4);
    arrayStack.pop();
    auto poppedValue = arrayStack.pop();
    cout << "Popped Value: " << poppedValue << endl;

    arrayStack.printStack();
  } catch (const StackException& ex) {
    cout << ex.what();
  }

  return 0;
}