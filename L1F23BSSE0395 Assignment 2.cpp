#include<iostream>
using namespace std;
int main()
{
	int program;
	cout << "Enter program Number (1 to 4):\n";
	cout << "1:- Qno.01(find greatest and smallest number)\n";
	cout << "2:- Qno.02(Print table)\n";
	cout << "3:- Qno.03(find even and odds sum)\n";
	cout << "4:- Qno.04(print factorial of a number)\n";
	cin >> program;
	//Question number 1
	if (program == 1)
	{
		int num, smallest, largest;
		int x = 1;
		cout << "Enter number "<<x++<<":";
		cin >> num;
		smallest = num;
		largest = num;
		
		for (int i = 1; i < 10 ; i++)
		{
			
			cout << "Enter number " << x++ << ":";
			cin >> num;

			if (num < smallest)
			{
				smallest = num;
			}
			else if (num > largest)
			{
				largest = num;
			}
			
		}
		cout << "smallest number is " << smallest << endl;
		cout << "largest number is " << largest << endl;

	}
	//Question number 2?
	else if (program == 2)
	{
		int start, range, num;
		cout << "Enter first number";
		cin >> start;

		cout << "Enter last number";
		cin >> range;

		cout << "Enter Which table you want to print";
		cin >> num;

		for (int i = start; i <= range; i++)
		{
			cout <<num<<"*"<<i<<"=" << i * num << endl;

		}

	}
	//Question number 3
	else if (program == 3)
	    {
		int num, oddsum = 0, evensum = 0, sum = 0;
		cout << "Enter number:";
		cin >> num;
		cout << "Even numbers =" << endl;
		for (int i = 1; i <= num; i++)
		{
			if (i % 2 == 0)
			{
				cout << i << endl;
				evensum += i;
			}

		}
		cout << "Odd numbers =" << endl;
		for (int i = 1; i <= num; i++)
		{
			if (i % 2 != 0)
			{
				cout << i << endl;
				oddsum += i;
			}

		}
		for (int i = 1; i <= num; i++)
		{
			sum += i;
		}
		cout << "Odd sum = " << oddsum << endl;
		cout << "Even sum = " << evensum << endl;
		cout << "Total sum = " << sum;

	     }
	//Question number 4
	else if (program == 4)
	    {
		int num, fact = 1;
		cout << "Enter Number:";
		cin >> num;
		for (int i = 1; i <= num; i++)
		{
			fact *= i;
		}
		cout << "Factorial is " << fact;

	     }
	else
	{
		cout << "Enter valid input(1 to 4)";
	}


	return 0;
}

