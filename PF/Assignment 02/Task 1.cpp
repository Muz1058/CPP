#include<iostream>
using namespace std;
char Lower_case(char c)
{
    if (c >= 'A' && c <= 'Z')
    {
        return c + 32;
    }
    return c;
}
void remove_identicals(char arr[], const int length)
{
    cout << "Updated string :";
    for (int i = 0; i < length; i++)
    {
        int count = 0;
     
        for (int j = 0; j < length; j++)
        {
            if (Lower_case (arr[i]) == Lower_case( arr[j]))
            {
                count++;
            }
        }
        if (count == 1)
        {
            cout << arr[i];
        }
    }
}
int main()
{
    char string[50];
    cout << "Enter String :";
    cin.getline(string, 50);
    int length = sizeof(string)/sizeof(string[0]);
    remove_identicals(string, length);
    return 0;
}