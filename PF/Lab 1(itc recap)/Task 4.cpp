#include<iostream>
using namespace std;
int main()
{
	int arr[10];
	cout << "Enter values in erray :\n";
	for (int i = 0; i < 10; i++)
	{
		cin >> arr[i];
	}
	cout << "Even numbers are :\n";
	for (int j = 0; j < 10; j++)
	{
		if (arr[j] % 2 == 0)
		{
			cout << arr[j] << endl;
		}
	}
	return 0;
}