#include<iostream>
using namespace std;
int main()
{
	int arr[10];
	int count = 0;
	cout << "Enter values in array :\n";
	for (int i = 0; i< 10; i++)
	{
		cin >> arr[i];
	}
	cout << "Duplicates are :" << endl;
	for (int j = 0; j<10; j++)
	{

		for (int k=j+1; k < 10; k++)
		{
			if (arr[j]== arr[k])
			{
				cout <<arr[j]<< endl;
				count++;
			}
		}
	}
	if (count == 0)
		cout << "No Duplicate Present";



	return 0;
}