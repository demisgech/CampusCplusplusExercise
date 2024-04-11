#include <iostream>

using namespace std;

int recursion(int number)
{
    if (number <= 1)
        return 1;
    return (recursion(number - 1) + recursion(number - 2));
}

void displayRecursionResult(int number)
{
    for (int i = 0; i <= number; ++i)
        cout << recursion(i) << " ";
}