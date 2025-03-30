#include<iostream>
using namespace std;
int main()
{
	int arr[10];
	int start = 0;
	int end = 9;
	int user_input;
	cout << "Enter values for Array " << endl;
	for (int i = 0; i < 10; i++)
	{
		cin >> arr[i];
	}
	cout << "Values stores is Array" << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << endl;
	}
	cout << "Enter number to find :";
	cin >> user_input;
	while (start <= end)
	{
		int mid = (start + end) / 2;
		if (user_input == arr[mid])
		{
			cout << "Your number is present at index :" << mid ;
			break;
		}
		else if (user_input > arr[mid])
		{
			start = mid + 1;
		}
		else
		{
			end = mid - 1;
		}			
	}
	return 0;
}