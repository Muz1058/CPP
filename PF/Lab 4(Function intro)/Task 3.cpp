
//Function that takes two parametersand return the maximum between two.
#include<iostream>
using namespace std;
int large(int a, int b)
{
	if (b > a)
	{
		return b;
	}
	else
	{
		return a;
	}

}
int main()
{
	int num1, num2;
	cout << "Enter first Number :";
	cin >> num1;
	cout << "Enter Second Number :";
	cin >> num2;
	cout << "Max Number is " << large(num1, num2) << endl;
}

Implement a function - based C++ program to swap values of two integers.Do it twice, once by
 each call by valueand call by referenceand observe difference.Take initial values from user.

//CAll By value ----> No Swapping Done 
#include<iostream>
using namespace std;
int swap(int a, int b)
{
	int temp = a; a = b; b = temp;
	return (a, b);

}
int main()
{
	int num1, num2;
	cout << "Enter first Number :";
	cin >> num1;
	cout << "Enter Second Number :";
	cin >> num2;
	swap(num1, num2);
	cout << "first Number =:" << num1<<endl;
	cout << "Second Number =" << num2<<endl;
	return 0;
}    

//call BY reference ----> Swapping Done
#include<iostream>
using namespace std;
int swap(int& a, int& b)
{
	int temp = a; a = b; b = temp;
	return (a, b);

}
int main()
{
	int num1, num2;
	cout << "Enter first Number :";
	cin >> num1;
	cout << "Enter Second Number :";
	cin >> num2;
	swap(num1, num2);
	cout << "first Number =:" << num1 << endl;
	cout << "Second Number =" << num2 << endl;
	return 0;
}


//Program that takes 5 subject marks in an integers array from user. Your task is to display
//the marks of individual subjects by using functions.

#include<iostream>
using namespace std;
void display(const int marks[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << "Marks of subject " << i + 1 << " is =" << marks[i] << endl;
	}
}
int main()
{
	const int size = 5;
	int input_marks[size];
	for (int i = 0; i < 5; i++)
	{
		cout << "Enetr marks of Subject " << i + 1 << " :";
		cin >> input_marks[i];
	}
	display(input_marks, size);
	return 0;
}


//Program that takes 5 subject marks in an integers array and total marks of subject in integer variable from user.
//Your task is to display sum, average and percentage of these marks by using functions.

#include<iostream>
using namespace std;

float sum(float marks[], int size)
{
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += marks[i];
	}
	return sum;
}
float average( float marks[], int size)
{
	return sum(marks, size) / size;
}
float percentage( float marks[], int total, int size)
{

	return sum(marks, size) * 100 / total;
}
int main()
{
	const int size = 5;
	float input_marks[size];
	int total_marks;
	for (int i = 0; i < size; i++)
	{
		cout << "Enter marks of Subject " << i + 1 << " :";
		cin >> input_marks[i];
	}
	cout << "\nEnter Total marks :";
	cin >> total_marks;
	cout << "Sum = " << sum(input_marks, size) << endl;
	cout << "Average = " << average(input_marks, size) << endl;
	cout << "Percentage ="  << percentage(input_marks, total_marks,size) <<"%" << endl;
	return 0;
}


//Program that has a function that receives two numbers as an argumentanddisplay all 
//prime numbers between these two numbers.Call this function from main()
 
#include<iostream>
using namespace std;
bool isprime(int n)
{
	if (n < 2)
	{
		return false;
	}
	for (int i = 2; i <= n/2 ; i++)
	{
		if (n % i == 0)
		{
			return false;
		}			
	}
	return true;
}
int main()
{
	int  a,b;
	cout<<"Enter first Number :";
	cin>>a;
	cout<<"Enter limit :";
	cin>>b;
	if (a > b)
	{
		int temp = a; a = b; b = temp;
	}
	cout<<"Prime Numbers are"<<endl;
	for (int i = a; i <= b; i++)
	{
		if (isprime(i))
			cout << i << endl;
	}
	return 0;
}

//Program which works as a basic calculator.Make a function calculator() that accepts two integer valuesand
//a character value.Your function should perform the operation on the entered integer values depending on the
//character value entered by the userand return the output to main().
//Make sure to create separate functions of sum(int, int), subtraction(int, int), multiplication(int, int) and
//division(int, int).The function calculator(int, int, char) should be able to call the necessary function as required.

#include<iostream>
using namespace std;
int addition(int a, int b) 
{
	cout << "Answer :" << a + b;
	return (a + b);
}
int substraction(int a, int b)
{
	cout << "Answer :" << a - b;
	return (a - b);
}
int multiplication(int a, int b)
{
	cout << "Answer :" << a * b;
	return (a * b);
}
int division(int a, int b)
{
	if (b == 0)
		cout << "Mathmetical Error!\nCan't divide by 0!" << endl;
	else
	{
		cout <<"Answer :"<< a / b;
		return (a / b);
	}	
}
int calculator(int a, int b, char operetor)
{
	switch (operetor)
	{
	case'+':
		return addition(a,b);
	case'-':
		return substraction(a, b);
	case'*':
		return multiplication(a, b);
	case'/':
		return division(a, b);
	default:
		cout << "Invalid Operator!" << endl;
	}
}
int main()
{
	int num1, num2;
	char operetor;
	cout << "Enter First Number :";
	cin >> num1;
	cout << "Enter Second Number :";
	cin >> num2;
	cout << "For Addition      '+'" << endl;
	cout << "For Substraction  '-'" << endl;
	cout << "For Multipication '*'" << endl;
	cout << "For Division      '/'" << endl;
	cout << "Enter :";
	cin >> operetor;
	calculator(num1, num2, operetor);
	return 0;
}