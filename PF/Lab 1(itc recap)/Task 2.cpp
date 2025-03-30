#include <iostream>
using namespace std;

int main()
{
	int exponent;
	float base, result = 1;

	cout << "Enter base :";
	cin >> base;
	cout << "exponent :  ";
	cin >> exponent;
	cout << base << "^" << exponent << " = ";
	
	for (int i = exponent; i > 0; i--)
	{
		result *= base;
	}
	cout << result;

	return 0;
}