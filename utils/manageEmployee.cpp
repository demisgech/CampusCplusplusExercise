
#include <iostream>
#include <iomanip>
#include "salaryCalculator.h"
using namespace std;

void manageEmployee()
{
    Salary salary[3] = {};
    for (int i = 0; i < 3; i++)
        salary[i].receiveData();

    for (int i = 0; i < 3; i++)
        salary[i].calculateSalary();
    // for (int i = 0; i < 3; i++)
    //     salary[i].displayData();

    cout << "Search Employee by id:";
    int id;
    cin >> id;
    for (int i = 0; i < 3; i++)
        if (salary[i].employee.id == id)
            cout << "Id" << setw(10) << "Name" << setw(10) << "NetSalary" << endl
                 << salary[i].employee.id << setw(12) << salary[i].employee.name << setw(10) << salary[i].netSalary << endl;
}