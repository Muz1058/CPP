#include<iostream>
using namespace std;
int main()
{
	int choice;
	cout << "Press (1 to 6) to print respective output: ";
	cin >> choice;

	if (choice == 1)
	{
		for (int row = 1; row <= 5; row++)
		{
			for (int col = 1; col <= 10; col++)
			{
				cout << "*";
			}
			cout << endl;
		}
	}

	else if (choice == 2)
	{
		for (int row= 1; row <= 5; row++)
		{
			for (int col= 1; col <= row;col++)
			{
				cout << "*";
			}
			cout << endl;
		}
	}

	else if (choice == 3)
	{
		for (int row = 1; row <= 5; row++)
		{
			for (int sp = 5; sp >= row; sp--)
			{
				cout << " ";
			}
			for (int col = 1; col <= row; col++)
			{
				cout << "*";
			}
			cout << endl;
		}
	}

	else if (choice == 4)
	{
		for (int row = 1; row <= 5; row++)
		{
			for (int sp = 5; sp >= row; sp--)
			{
				cout << " ";
			}
			for (int col = 1; col<= 2*row-1; col++)
			{
				cout << "*";
			}
			cout << endl;
		}
	}

	else if (choice == 5)
	{
		for (int row = 1; row <= 5; row++)
		{
			for (int sp = 5; sp >= row; sp--)
			{
				cout << " ";
			}
			for (int col = 1; col <= 2 * row - 1; col++)
			{
				cout << row;
			}
			cout << endl;
		}
	}

	else if (choice == 6)
	{
		for (int row = 1; row <= 5; row++)
		{
			for (int sp = 5; sp >= row; sp--)
			{
				cout << " ";
			}
			for (int col = row; col >= 1; col--)
			{
				cout << col;
			}
			for (int n = 2; n <= row; n++)
			{
				cout << n;
			}
			cout << endl;
		}
	}

	else
	{
		cout << "Enter valid input(1 to 6)";
	}

	return 0;
}
