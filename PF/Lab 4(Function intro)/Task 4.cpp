//Implement a function - based C++ program to swap values of two integers.Do it twice, once by
// each call by valueand call by referenceand observe difference.Take initial values from user.

////CAll By value ----> No Swapping Done 
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


////call BY reference ----> Swapping Done
//#include<iostream>
//using namespace std;
//int swap(int& a, int& b)
//{
//	int temp = a; a = b; b = temp;
//	return (a, b);
//
//}
//int main()
//{
//	int num1, num2;
//	cout << "Enter first Number :";
//	cin >> num1;
//	cout << "Enter Second Number :";
//	cin >> num2;
//	swap(num1, num2);
//	cout << "first Number =:" << num1 << endl;
//	cout << "Second Number =" << num2 << endl;
//	return 0;
//}

