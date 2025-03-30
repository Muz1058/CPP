#include<iostream>
using namespace std;
int main()
{
	int arr[5];
	int size = 4;
	cout << "Enter value in array :\n";
	for (int i = 0; i <= size; i++)
	{
		cin >> arr[i];
	}
	cout << "Sorted array \n";
	for (int step = 0; step < size; step++)
	{
		for (int i = 0; i < size - step; i++)
		{
			if (arr[i] > arr[i + 1])
			{
				int temp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = temp;
				
			}
			
		}
		
	}
	for (int i = 0; i <= size; i++)
		cout << arr[i] << endl;

	return 0;
}