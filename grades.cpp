#include <iostream>
#include <iomanip>
#include <cctype>

using namespace std;
void grade()
{
again:
    cout << "what is your name: ";
    string name;
    getline(cin, name);
    cout << "Hi, " << name << " how many course do u take? ";
    int numOfcourse;
    cin >> numOfcourse;

    int size = 1;
    int entries = 0;
    double *course = new double[size];
    cout << "Enter a value for the courses." << endl;
    while (entries < numOfcourse)
    {
        cout << "course " << entries + 1 << " : ";
        cin >> course[entries];
        entries++;
        if (entries == size)
        {
            size++;
            double *temp = new double[size];
            for (int i = 0; i < entries; i++)
                temp[i] = course[i];

            delete[] course;
            course = temp;
        }
    }

    string letterGrades[entries] = {};
    int letterGradeValue[entries] = {};
    double totalGrade = 0;
    for (int i = 0; i < entries; i++)
    {
        totalGrade += course[i];
        if (course[i] >= 85)
        {
            letterGradeValue[i] = 4;
            letterGrades[i] = "A";
        }
        else if (course[i] >= 70)
        {
            letterGradeValue[i] = 3;
            letterGrades[i] = "B";
        }
        else if (course[i] >= 50)
        {
            letterGradeValue[i] = 2;
            letterGrades[i] = "C";
        }
        else if (course[i] >= 40)
        {
            letterGradeValue[i] = 1;
            letterGrades[i] = "D";
        }
        else
        {
            letterGradeValue[i] = 0;
            letterGrades[i] = "F";
        }
    }
    double GPA = totalGrade / entries;

    double total = 0;
    for (int i = 0; i < entries; i++)
    {
        total += letterGradeValue[i] * 3;
    }
    double GPAValue = total / (3 * entries);

    cout << "**** Grade summary ***" << endl
         << name << " here is the grade for the mark you entered." << endl
         << "Mark" << setw(10) << "Grade" << endl;
    for (int i = 0; i < numOfcourse; i++)
    {
        cout << course[i] << setw(12) << letterGrades[i] << endl;
    }

    cout << "Would you like to see your GPA? ";
    char choice;
    cin >> choice;
    choice = toupper(choice);
    switch (choice)
    {
    case 'Y':
        cout << "Your GPA is " << GPAValue << endl;
        cout << "Would you like to go again![Y/N] ";
        char input;
        cin >> input;
        input = toupper(input);
        if (input == 'y')
            goto again;
        break;
    default:
        cout << "Thanks for using our tool." << endl;
        break;
    }

    delete[] course;
}
