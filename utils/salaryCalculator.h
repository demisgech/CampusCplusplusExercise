#ifndef __SALARYCALCULATOR__H__
#define __SALARYCALCULATOR__H__

#include <string>
#include <iostream>
using namespace std;

struct Employee
{
    int id;
    string name;
};
struct Salary
{
    Employee employee;
    double netSalary;
    double grossSalary;
    double incomeTax;

    void receiveData();
    void calculateSalary();
    void displayData();
};

#endif //!__SALARYCALCULATOR__H__
