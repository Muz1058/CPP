#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	int arr[5],arr2[5],size=5;
	cout << "Enter values in array :\n";
	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
		arr2[i] = arr[i];
	}
	ofstream write;
	write.open("task3.txt");
	for (int i = 0; i < 5; i++)
	{
		write << arr[i] << " ";
	}
	write.close();


	ifstream read;
	read.open("task3.txt");
	int arr1[5];
	for (int i = 0; i < 5; i++)
	{
		read >> arr1[i];
	}


	for (int i = 0; i < 5; i++) 
		for (int i = 1; i < size; i++)
		{

			for (int j = 0; j < i; j++)
			{
				if (arr[i] == arr[j])
				{
					for (int k = i; k < size - 1; k++) {
						arr[k] = arr[k + 1];
					}
					size--;
					i--;
					break;
				}
			}
		}
	int count;
	for (int i = 0; i < size; i++)
	{
		cout << "Position of "<< arr[i] << " on line = ";
		count = 0;
		for (int j = 0; j < 5;j++)
		{			
			if (arr[i] == arr2[j])
			{
				count++;
				if(count>1)
					cout << "," << j + 1;
				else
					cout << j + 1;					
			}
		}
		cout << endl;
	}
	read.close();
	return 0;
}
