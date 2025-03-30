#include<iostream>
using namespace std;
int main()
{
	char arr[10];
	cout << "Enter character in array :\n";
	for (int i = 0; i < 10; i++)
	{
		cin >> arr[i];
	}
	cout << "Vowel in input characters are \n";
	for (int i = 0; i < 10; i++)
	{
		if (arr[i] == 'A' || arr[i] == 'a' || arr[i] == 'E' || arr[i] == 'e' || arr[i] == 'I' || arr[i] == 'i' || arr[i] == 'O' || arr[i] == 'o' || arr[i] == 'U' || arr[i] == 'u')
		{
			cout << arr[i] << endl;
		}
	}
	return 0;
}