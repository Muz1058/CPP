#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream read("paragraph.txt");
    ofstream write("foundwords.txt");

    char startingChar;
    cout << "Enter a character: ";
    cin >> startingChar;

    bool found = false;
    char word[100];
    cout << "Following are the word which started with '" << startingChar << "'\n";
    while (read >> word) {
        if (word[0] == startingChar)
        {
            found = true;
            if (word[strlen(word) - 1] == ',') 
            {
                word[strlen(word) - 1] = '\0';                 
            }
           
            cout << word << ",";
            write << word << endl;
          
        }
    }

    if (found)
    {
        cout << "\n\nWords starting with '" << startingChar << "' stored in foundwords.txt." << endl;
    }
    else
    {
        cout << "No match found ";
    }
   

    read.close();
    write.close();
    return 0;
}