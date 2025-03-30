#include<iostream>
using namespace std;
int main()
{
	int arr[10];
	int num;
	int loc = -1;
	cout << "Enter values in array :" << endl;
	for (int i = 0; i < 10; i++)
	{
		cin >> arr[i];
	}
	cout << "Values store is array is " << endl;
	for (int j = 0; j < 10; j++)
	{
		cout << arr[j] << endl;
	}
	cout << "Enter the number you want to find :";
	cin >> num;
	for (int k = 0; k < 10; k++)
	{
		if (arr[k] == num)
		{
			loc = k;
		}
	}
	if (loc != -1)
		cout << "Your given number is present at index :" << loc << endl;
	else
		cout << "Enter valid input";
	return 0;
}