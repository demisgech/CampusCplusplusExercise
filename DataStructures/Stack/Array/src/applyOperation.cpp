#include "applyOperation.hpp"

#include <stdexcept>

using std::runtime_error;

int applyOperation(int a, int b, char op) {
  switch (op) {
    case '+':
      return a + b;
    case '-':
      return a - b;
    case '*':
      return a * b;
    case '/':
      if (b == 0) throw runtime_error{"Division by zero!"};
      return a / b;
  }
  return 0;
}