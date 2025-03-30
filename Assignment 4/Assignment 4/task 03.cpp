#include<iostream>
using namespace std;
int main()
{
	cout << "Orignal chracter are is = ";
	char arr[6] = { 'H','E','L','L','O','\0'};
	for (int i = 0; i < 5; i++) {
		cout << arr[i];
	}
	cout << endl;
	cout << "Reversed chracter is = ";
	for (int i = 5; i >= 0; i--)
	{
		cout << arr[i];
	}

	return 0;
}