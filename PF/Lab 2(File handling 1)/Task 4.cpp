#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	char input[300];
	cout << "Enter :";
	cin.getline(input, 300);

	ofstream task4;
	task4.open("task4.txt");
	int i = 0;
	while (input[i] != '\0')
	{
		task4 << input[i];
		
		i++;
	}
	task4.close();
	ifstream read;
	read.open("task4.txt");
	int j = 0;
	while (input[j] != '\0')
	{
		if (input[j] == ',')
		{
			input[j] = ' ';
		
		}
		cout << input[j];
		j++;
	}
	read.close();
	return 0;
}
