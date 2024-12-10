#include <cctype>
#include <sstream>
#include <string>
// #include "ArrayStack.hpp"
#include "LinkedListStack.hpp"
#include "applyOperation.hpp"
using namespace std;

// int evaluatePostfix(const string& expression) {
//   Stack<int, 5> stack;

//   for (char ch : expression) {
//     if (isdigit(ch)) {
//       stack.push(ch - '0');  // Conver char ot int
//     } else {
//       int val1 = stack.getTop();
//       stack.pop();
//       int val2 = stack.getTop();
//       stack.pop();
//       switch (ch) {
//         case '+':
//           stack.push(val1 + val2);
//           break;
//         case '-':
//           stack.push(val1 - val2);
//           break;
//         case '*':
//           stack.push(val1 * val2);
//           break;
//         case '/':
//           stack.push(val1 / val2);
//           break;
//       }
//     }
//   }
//   return stack.getTop();
// }

// int evaluatePostfix(const string& expression) {
//   Stack<int>* stack = new Stack<int>();

//   for (char ch : expression) {
//     if (isdigit(ch)) {
//       stack->push(ch - '0');  // Conver char ot int
//     } else {
//       int val2 = stack->getTop();
//       stack->pop();
//       int val1 = stack->getTop();
//       stack->pop();
//       switch (ch) {
//         case '+':
//           stack->push(val1 + val2);
//           break;
//         case '-':
//           stack->push(val1 - val2);
//           break;
//         case '*':
//           stack->push(val1 * val2);
//           break;
//         case '/':
//           stack->push(val1 / val2);
//           break;
//       }
//     }
//   }
//   auto result = stack->getTop();
//   // stack->pop();
//   // delete stack;
//   return result;
// }

int evaluatePostfix(const string& postfix) {
  Stack<int>* stack = new Stack<int>();
  istringstream iss(postfix);
  string token;
  while (iss >> token) {
    if (isdigit(token[0]))
      stack->push(stoi(token));
    else {
      auto val1 = stack->pop();
      auto val2 = stack->pop();
      applyOperation(val1, val2, token[0]);
    }
  }
  return stack->pop();
}