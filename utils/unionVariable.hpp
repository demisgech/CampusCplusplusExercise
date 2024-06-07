#ifndef __UNIONVARIABLE__H__
#define __UNIONVARIABLE__H__

#include <string>
using namespace std;

union Test
{
    double exam[3] = {};
    double total;
};

struct Student
{
    int id;
    string name;
    Test test;
    char grade;
    double average;

    void getData();
    void calculateTotal();
    void displayData();
};

#endif //!__UNIONVARIABLE__H__