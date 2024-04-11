#include "salaryCalculator.h"
#include <iostream>
#include <iomanip>
using namespace std;
void Salary::receiveData()
{

    cout << "id: ";
    cin >> employee.id;

    cout << "Name: ";
    cin >> employee.name;

    cout << "Gross Salary: ";
    cin >> grossSalary;
}

void Salary::calculateSalary()
{

    if (grossSalary < 0)
    {
        cout << "Sorry! gross salary must be greater than 0.";
        return;
    }
    if (grossSalary >= 10000)
        incomeTax = grossSalary * 0.35;
    else if (grossSalary >= 5000)
        incomeTax = grossSalary * .2;
    else if (grossSalary >= 3000)
        incomeTax = grossSalary * .1;
    else
        incomeTax = 0;

    netSalary = grossSalary - incomeTax;
}

void Salary::displayData()
{
    cout << "Id" << setw(10) << "Name" << setw(10) << "NetSalary" << endl
         << employee.id << setw(12) << employee.name << setw(10) << netSalary << endl;
}
