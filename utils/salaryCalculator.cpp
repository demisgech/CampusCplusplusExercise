#include "salaryCalculator.h"
#include <iostream>
#include <iomanip>
using namespace std;
void Employee::receiveData()
{

    cout << "id: ";
    cin >> id;

    cout << "Name: ";
    cin >> name;

    cout << "Gross Salary: ";
    cin >> salary.grossSalary;
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

void Employee::displayData()
{
    cout << id << setw(12) << name << setw(10) << salary.netSalary << endl;
}
