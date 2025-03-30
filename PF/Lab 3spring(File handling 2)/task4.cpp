#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    char words2[40];
    ifstream read;
    read.open("input_task4");
    ofstream write("output_task4");
    int word_count = 0;
    while (read >> words2)
    {
        int index = 0;
        char words3[40] = "\0";

        bool alpha_found = false;

        for (int i = 0; words2[i] != '\0'; i++)
        {
            if ((words2[i] >= 'a' && words2[i] <= 'z') || (words2[i] >= 'A' && words2[i] <= 'Z'))
            {
                words3[index] = words2[i];
                index++;
                alpha_found = true;
            }
        }
        if (alpha_found == true)
        {
            cout << words3 << " ";
            write << words3 << " ";
            word_count++;
        }
    }
    
    cout << "\nTotal words are: " << word_count;
    read.close();
    write.close();

    return 0;
}