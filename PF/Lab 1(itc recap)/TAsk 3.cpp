#include<iostream>
using namespace std; 
int main()
{
	int sum = 0;
	cout << "Odds are :"<<endl;
	for (int i = 1; i <= 49; i++)
	{
		if (i % 2 != 0)
		{
			cout << i << endl;
			sum += i;
		}
	
	}
	cout << endl;
	cout <<"Sum ="<< sum << endl;
	return 0;
}