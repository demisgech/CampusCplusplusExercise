#include <string>

using std::string;

string palindrome(int number) {
  int originalNumber = number;

  int reversed = 0;
  number = number < 0 ? -number : number;

  while (number > 0) {
    reversed = reversed * 10 + number % 10;
    number /= 10;
  }

  reversed = originalNumber < 0 ? -reversed : reversed;
  number = originalNumber;
  return originalNumber == reversed ? "Palindrome" : "Not palindrome";
}