#include <iostream>

using namespace std;

int fibonacci(int n)
{
    if (n <= 1)
        return n;
    return (fibonacci(n - 1) + fibonacci(n - 2));
}

void displayFibonacciResult(int number)
{
    for (int i = 1; i <= number; i++)
    {
        if (i < number)
            cout << fibonacci(i) << ",";
        else
            cout << fibonacci(i) << endl;
    }
}