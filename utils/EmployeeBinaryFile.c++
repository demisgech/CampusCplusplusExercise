#include <fstream>
#include <iomanip>
#include <iostream>

using namespace std;

struct Employee {
  int id;
  string name;
  string sex;
  double salary;
};

void getData(Employee em[], int size) {
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
}

void write() {
  Employee em[3] = {{1, "Demis", "Male", 7000.0},
                    {2, "Dejen", "male", 8000.0},
                    {3, "Dagim", "male", 6780.0}};
  getData(em, 3);
  ofstream oFile;
  oFile.open("employees.bin", ios::binary);
  if (!oFile)
    throw runtime_error{"File is empty"};
  if (oFile.is_open()) {
    oFile.write(reinterpret_cast<char *>(em), sizeof(em));
    oFile.close();
  }
}

void read() {
  Employee e;
  ifstream iFile;
  iFile.open("employees.bin", ios::binary);
  if (!iFile)
    throw runtime_error{"File is empty"};
  if (iFile.is_open()) {
    while (iFile.read(reinterpret_cast<char *>(&e), sizeof(e))) {
      cout << "Id:" << e.id << endl
           << "name: " << e.name << endl
           << "Sex:" << e.sex << endl
           << "salary:" << e.salary << endl;
    }
    iFile.close();
  }
}
void showEmployeeData() {
  try {
    write();
    read();
  } catch (const exception &ex) {
    cout << ex.what();
  }
}