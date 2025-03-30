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