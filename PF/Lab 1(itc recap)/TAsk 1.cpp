#include<iostream>
using namespace std;
int main()
{
	int var1, var2;
	cout << "Enter value of First Variable :";
	cin >> var1;
	cout << "Enter value of Second variable :";
	cin >> var2;
	int temp = var1;
	var1 = var2;
	var2 = temp;
	cout << "Swapped values are " << endl;
	cout << "First Variable =" << var1<<endl;
	cout << "Second Variable =" << var2 << endl;



	return 0;
}