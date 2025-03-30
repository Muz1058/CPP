#include<iostream>
using namespace std;

int main()
{
    int num_of_emp;
    cout << "Enter total number of Employee :";
    cin >> num_of_emp;

    int* pointer_for_id = new int[num_of_emp];
    int* pointer_for_experience = new int[num_of_emp];

    for (int i = 0; i < num_of_emp; i++)
    {
        cout << "Enter ID of employee (digits only) " << i + 1 << " :";
        cin >> pointer_for_id[i];
        cout << "Enter Experience of employee " << i + 1 << " (in years) :";
        cin >> pointer_for_experience[i];
    }

    //sorting
    int size = num_of_emp - 1;
    for (int step = 0; step < size; step++)
    {
        for (int i = 0; i < size - step; i++)
        {
            if (pointer_for_experience[i] < pointer_for_experience[i + 1])
            {
                int temp = pointer_for_experience[i];
                pointer_for_experience[i] = pointer_for_experience[i + 1];
                pointer_for_experience[i + 1] = temp;

                temp = pointer_for_id[i];
                pointer_for_id[i] = pointer_for_id[i + 1];
                pointer_for_id[i + 1] = temp;
            }
        }
    }
    cout << "\nList of Employes in high experience order " << endl;
    cout << "\nSr.\tID\tExperience\n" << endl;
    for (int i = 0; i < num_of_emp; i++)
    {
        cout<<i+1<<"\t" << pointer_for_id[i] << "\t" << pointer_for_experience[i] << endl;
    }

    delete[] pointer_for_experience;
    delete[] pointer_for_id;

    return 0;
}