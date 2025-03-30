#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	int arr1[10], sum = 0, product = 1, subs = 0, prime = 0, even = 0;
	cout << "Enter values :" << endl;
	for (int i = 0; i < 10; i++)
	{
		cin >> arr1[i];
	}

	ofstream write;

	write.open("text.txt");
	for (int i = 0; i < 10; i++)
	{
		write << arr1[i] << " ";
	}
	write.close();


	ifstream read;
	read.open("text.txt");
	int arr[10];
	for (int i = 0; i < 10; i++)
	{
		read >> arr[i];
	}
	cout << "\tPress 1 for element wise addition" << endl;
	cout << "\tPress 2 for element wise subtraction" << endl;
	cout << "\tPress 3 for element wise Multiplication" << endl;
	cout << "\tPress 4 to calculate the count of prime numbers" << endl;
	cout << "\tPress 5 to calculate the count of even numbers" << endl;
	
	int press;
	cout << "\nPress (1-5) :";
	cin >> press;
	switch (press)
	{
	case 1:
		for (int i = 0; i < 10; i++)
		{
			sum += arr[i];
		}
		cout << "\nAddition =" << sum << endl;
		break;

	case 2:
		for (int i = 0; i < 10; i++)
		{
			subs -= arr[i];
		}
		cout << "\nSubstraction =" << subs << endl;
		break;
	case 3:
		for (int i = 0; i < 10; i++)
		{
			product *= arr[i];
		}
		cout << "\nMultliplication =" << product << endl;
		break;
	case 4:
		for (int i = 0; i < 10; i++)
		{
			int count = 0;
			for (int j = 1; j <= arr[i]; j++)
			{
				if (arr[i] % j == 0)
				{
					count++;
				}
			}
			if (count == 2)
			{
				prime++;
			}
		}
		cout << "\nprime numbers are :" << prime << endl;
		break;
	case 5:
		for (int i = 0; i < 10; i++)
		{
			if (arr[i] % 2 == 0)
				even++;
		}
		cout << "\nTotal Even numbers are :" << even << endl;
		break;

	}

	return 0;
}
