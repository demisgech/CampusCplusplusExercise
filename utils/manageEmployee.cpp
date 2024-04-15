
#include <iostream>
#include <iomanip>
#include "salaryCalculator.h"
using namespace std;

void manageEmployee()
{
    Employee employee[3] = {};
    for (int i = 0; i < 3; i++)
        employee[i].receiveData();

    for (int i = 0; i < 3; i++)
        employee[i].salary.calculateSalary();

    cout << "Would you like to get:" << endl
         << "1. One employee" << endl
         << "2. All employee" << endl
         << "Choice: ";
    int choice;
    cin >> choice;
    switch (choice)
    {
    case 1:
        cout << "Enter employee ID: ";
        int id;
        cin >> id;
        for (int i = 0; i < 3; i++)
            if (employee[i].id == id)
                cout << "Id" << setw(10) << "Name" << setw(10) << "NetSalary" << endl
                     << employee[i].id << setw(12) << employee[i].name << setw(10) << employee[i].salary.netSalary << endl;
        break;
    case 2:
        cout << "Id" << setw(10) << "Name" << setw(10) << "NetSalary" << endl;
        for (int i = 0; i < 3; i++)
            employee[i].displayData();
        break;
    default:
        cout << "Sorry! Invalide choice!" << endl;
        break;
    }
}