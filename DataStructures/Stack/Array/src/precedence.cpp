#include "precedence.hpp"

int precedence(char op) {
  if (op == '+' || op == '-')
    return 1;
  else if (op == '*' || op == '/')
    return 2;
  else
    return 0;
}