#include <algorithm>
#include <cctype>
#include <string>

#include "ArrayStack.hpp"
using namespace std;

string palindrome(const string& originalString) {
  string lowerString = originalString;
  std::transform(lowerString.begin(), lowerString.end(), lowerString.begin(),
                 ::tolower);
  Stack<char, 5> stack;
  for (char ch : lowerString) {
    stack.push(ch);
  }
  string reversedString;
  while (stack.getHeight() > 0) {
    reversedString += stack.pop();
  }
  return lowerString == reversedString ? "Palindrome" : "Not palindrome";
}