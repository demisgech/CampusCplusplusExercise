#include "unionVariable.hpp"
#include <iomanip>
#include <iostream>

using namespace std;

void Student::getData() {
  cout << "id: ";
  cin >> id;

  cout << "Name: ";
  cin >> name;

  for (int i = 0; i < 3; i++) {
    cout << "Exam " << i + 1 << ": ";
    cin >> test.exam[i];
  }
}

void Student::calculateTotal() {
  test.total = 0;
  for (int i = 0; i < 3; i++)
    test.total += test.exam[i];
  average = test.total / 3;
  if (average >= 85)
    grade = 'A';
  else if (average >= 70)
    grade = 'B';
  else if (average >= 50)
    grade = 'C';
  else
    grade = 'F';
}

void Student::displayData() {
  cout << id << setw(8) << name << setw(8) << test.total << setw(8)
       << setprecision(4) << average << setw(8) << grade << endl;
}

void showResult() {

  Student student[3] = {};
  for (int i = 0; i < 3; i++)
    student[i].getData();

  cout << "Studnt List:" << endl;
  cout << "ID" << setw(8) << "Name" << setw(8) << "Total" << setw(8)
       << "Average" << setw(8) << "Grade" << endl;
  for (int i = 0; i < 3; i++)
    student[i].displayData();
}