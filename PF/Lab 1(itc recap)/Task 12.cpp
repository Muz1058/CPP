#include<iostream>
using namespace std;
int main()
{
	const int size = 100;
	char text[size];
	int length = 0;
	int i = 0;
	cout << "Enter the Chracters " << endl;
	cin.get(text, size);
	while (text[i] != '\0')
	{
		length++;
		i++;
	}
	for (int i = length ; i >= 0; i--)
	{
		cout << text[i];
	}
	return 0;
}