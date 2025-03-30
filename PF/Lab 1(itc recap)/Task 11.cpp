#include <iostream>
using namespace std;
int main()
{
    char text[1000];
    cout << "Enter text: " << endl;
    cin.getline(text,1000);
    int count = 0;     
    int i = 0;
    while (text[i] != '\0')
    {
        if (text[i] >= 'A' && text[i] <= 'Z' || text[i] >= 'a' && text[i] <= 'z')
        {
            count++;
        }        
        i++;
    }
    cout << "Number of characters are :" << count << endl;
    return 0;
}
