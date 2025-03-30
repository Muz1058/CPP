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


