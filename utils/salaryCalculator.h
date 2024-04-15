#ifndef __SALARYCALCULATOR__H__
#define __SALARYCALCULATOR__H__

#include <string>
#include <iostream>
using namespace std;

struct Salary
{
    double netSalary;
    double grossSalary;
    double incomeTax;

    void calculateSalary();
};

struct Employee
{
    int id;
    string name;
    Salary salary;

    void receiveData();
    void displayData();
};
#endif //!__SALARYCALCULATOR__H__
