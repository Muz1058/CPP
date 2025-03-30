#include <iostream>
using namespace std;
int main() 
{
    int n;
    cout << "Enter the number of employees: ";
    cin >> n;

    int* ids = new int[n];
    int* years = new int[n];
    double* salaries = new double[n];
    cout << "Enter employee data:\n";
    for (int i = 0; i < n; i++)
    {
        cout << "Enter ID, working years, and salary for employee " << (i + 1) << ": ";
        cin >> ids[i] >> years[i] >> salaries[i];
    }
    int newSize = n - (n / 3);
    int* newIds = new int[newSize];
    int* newYears = new int[newSize];
    double* newSalaries = new double[newSize];
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 3 != 0)
        {
            newIds[j] = ids[i];
            newYears[j] = years[i];
            newSalaries[j] = salaries[i];
            j++;
        }
    }
    cout << "\nRemaining employee data:\n";
    for (int i = 0; i < newSize; i++)
    {
        cout << "ID: " << newIds[i] << ", Working Years: " << newYears[i] << ", Salary: $" << fixed << newSalaries[i] << endl;
    }
    delete[] ids;
    delete[] years;
    delete[] salaries;
    delete[] newIds;
    delete[] newYears;
    delete[] newSalaries;

    return 0;
}