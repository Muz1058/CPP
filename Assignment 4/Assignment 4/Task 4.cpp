#include<iostream>
using namespace std;
int main()
{
	int arr[10] = { 0,3,2,5,4,6,8,7,9,1};
	int size = 9;
	for (int step = 0; step <size; step++)
	{
		for (int i = 0 ; i < size - step; i++)
		{
			if (arr[i] < arr[i + 1])
			{
				int temp = arr[i];
				arr[i] = arr[i+1];
				arr[i+1] = temp;
			}
		}
	}
	for (int j = 0; j <= size; j++)
	{
		cout << arr[j] << endl;
	}







	return 0;
}