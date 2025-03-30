#include <iostream>
#include <fstream>
#include <cstring>
#define size 100
using namespace std;

int main() {
    char arr1[size];
    char arr2[size];

    ifstream read("task01_input.txt");
    ifstream dictionary("dictionary.txt");

    if (!read.is_open() || !dictionary.is_open()) 
    {
        cout << "Error opening files." << endl;
      
    }

    cout << "Following are misspelled words in the file: " << endl;

    while (read >> arr1) 
{ 
        dictionary.clear();
        dictionary.seekg(0);

        bool found = false; 
        while (dictionary >> arr2)
        { 
            if (strcmp(arr1, arr2) == 0)
            {
                found = true;
                break; 
            }
        }

        if (!found)
        {
            cout << arr1 << "\n"; 
        }
    }

    read.close();
    dictionary.close();

    return 0;
}
