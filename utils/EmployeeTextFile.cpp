#include <fstream>
#include <iostream>

using namespace std;

struct Employee {
  int id;
  string name;
  string sex;
  double salary;
};

void printEmployeeFile() {
  Employee em[2] = {};
  for (int i = 0; i < 2; i++) {
    cout << "id: ";
    cin >> em[i].id;
    cout << "name: ";
    cin >> em[i].name;
    cout << "Sex: ";
    cin >> em[i].sex;
    cout << "Salary: ";
    cin >> em[i].salary;
  }

  ofstream oFile;
  oFile.open("employees.txt");
  if (oFile.is_open()) {
    oFile << "Id\tName\tSex\tSalary" << endl;
    for (int i = 0; i < 2; ++i)
      oFile << em[i].id << "\t" << em[i].name << "\t" << em[i].sex << "\t"
            << em[i].salary << endl;
    oFile.close();
  }

  ifstream iFile;
  iFile.open("employees.txt");
  if (iFile.is_open()) {
    string str;
    getline(iFile, str);
    cout << str << endl;
    while (!iFile.eof()) {
      getline(iFile, str);
      cout << str << endl;
    }
    iFile.close();
  }
}