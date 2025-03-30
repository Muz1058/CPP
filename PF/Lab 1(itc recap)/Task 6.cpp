#include<iostream>
using namespace std;
int main()
{
	
	for (int i = 5; i >= 1; i--)
	{
		int x = 5;
		for (int j = 5; j >=1; j-- )
		{
			if (j<=i)
				cout << x--;
			else
				cout << "-";
		}
		cout << endl;
	}
	return 0;
}