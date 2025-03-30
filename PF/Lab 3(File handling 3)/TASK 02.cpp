#include <iostream>
#include <fstream>
using namespace std;
int main() 
{
    ifstream input("task02_input.txt");
    ofstream output("dictionary.txt");

    if (!input.is_open() || !output.is_open())
    {
        cout << "Error opening files." << endl;
    }

    char searchPattern[] = "abcde";
    char line[100]; 
    int lineNumber = 0;

    cout << "Occurrences of \"" << searchPattern << "\":\n";

    while (input.getline(line, sizeof(line))) 
    {
        lineNumber++;
        int occurrences = 0;
        char* position = line;
        while (*position != '\0') 
        {
            bool match = true;
            for (int i = 0; searchPattern[i] != '\0'; i++)
            {
                if (position[i] != searchPattern[i])
                {
                    match = false;
                    break;
                }
            }
            if (match) 
            {
                occurrences++;
            }
            position++;
        }

        if (occurrences > 0)
        {
            cout << "Line " << lineNumber << ": " << occurrences << endl;
            output << "Line " << lineNumber << ": " << line << ", Occurrences: " << occurrences << endl;
        }
    }

    input.close();
    output.close();

    return 0;
}
