#include <iostream>

using namespace std;

void bubleSort()
{
    cout << "How many numbers do you want to enter? ";
    int numOfElement;
    cin >> numOfElement;
    int size = 1;
    int entries = 0;
    double *numbers = new double[size];
    cout << "Enter a value for the courses." << endl;
    while (entries < numOfElement)
    {
        cout << "numbers " << entries + 1 << " : ";
        cin >> numbers[entries];
        entries++;
        if (entries == size)
        {
            size++;
            double *temp = new double[size];
            for (int i = 0; i < entries; i++)
                temp[i] = numbers[i];

            delete[] numbers;
            numbers = temp;
        }
    }
    for (int i = entries - 1; i < entries; ++i)
    {
        for (int j = 0; j < entries - 1; ++j)
        {
            if (numbers[j] > numbers[j + 1])
            {
                int temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }

    cout << "The elements you entered after sorted in acsending order becomes." << endl;
    for (int i = 0; i < entries; i++)
        cout << numbers[i] << " ";
}
