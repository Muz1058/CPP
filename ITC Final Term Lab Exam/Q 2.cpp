#include<iostream>
using namespace std;
int main()
{
	int arr[5];
	int size = 4;
	//get input from user
	cout << "Enter  5 random numbers in array " << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << "Enter number " << i + 1 << " :";
		cin >> arr[i];
	}
	//ascending sorting
	for (int step = 0; step < size; step++)
	{
		for (int j = 0; j < size - step; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	//output
	cout << "Sorted list in  ascending order is :";
	for (int k = 0; k < 5; k++)
	{
		cout << arr[k] << " ";
	}
	return 0;
}