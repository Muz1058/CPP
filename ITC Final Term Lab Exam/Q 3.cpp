#include<iostream>
using namespace std;
int main()
{	
	const int size = 100;
	char arr[size];
	char arr1[size];
	char arr2[size];
	cout << "Enter the Alphabets in array :";
	cin.get(arr, 20);
	for (int i = 0; i < size; i++)
	{
		char x='A';		
		for (int j = 1; j <= 26; j++)
		{
			if (arr[i] == x)
			{
				cout << arr[i];
			}
			x++;
		}		
	}
	for (int i = 0; i <size; i++)
	{
		char y = 'a';
		for (int j = 1; j <= 26; j++)
		{
			if (arr[i] == y)
			{
				cout << arr[i];
			}
			y++;
		}
	}
	return 0;
}