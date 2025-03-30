#include<iostream>
using namespace std;
int main()
{
	double sum = 0;
	int arr[7];
	cout << "Enter values in erray :\n";
	for (int i = 0; i < 7; i++)
	{
		cin >> arr[i];
	}

	for (int j = 0; j < 7; j++)
	{
		sum += arr[j];
	}
	cout << "Sum =" << sum << endl << "Average =" << sum/7 << endl; 
	return 0;
}