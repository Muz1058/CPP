#include<iostream>
using namespace std;
int main()
{
	int choice;
	cout << "Enter your choice (1 to 4) :";
	cin >> choice;
	//linear search
	if (choice == 1)
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
	}
	//binary search
	else if (choice == 2)
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
				cout << "Your number is present at index :" << mid;
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
	}
	//reverse character array
	else if (choice == 3)
	{
		char arr[9] = { 'M','U','Z','A','F','F','A','R','\0'};
		cout << "Orignal chracter are is = ";
		for (int i = 0; i < 9; i++) {
			cout << arr[i];
		}
		cout << endl;
		cout << "Reversed chracter is = ";
		for (int i = 8; i >= 0; i--)
		{
			cout << arr[i];
		}
	}
	//sorting in decending order
	else if (choice == 4)
	{
		int arr[10] = { 0,3,2,5,4,6,8,7,9,1 };
		int size = 9;
		for (int step = 0; step < size; step++)
		{
			for (int i = 0; i < size - step; i++)
			{
				if (arr[i] < arr[i + 1])
				{
					int temp = arr[i];
					arr[i] = arr[i + 1];
					arr[i + 1] = temp;
				}
			}
		}
		cout << "Decending sorting :" << endl;
		for (int j = 0; j <= size; j++)
		{
			cout << arr[j] << endl;
		}
	}     
	else
	{
		cout << "invalid input ";
	}

	return 0;
}