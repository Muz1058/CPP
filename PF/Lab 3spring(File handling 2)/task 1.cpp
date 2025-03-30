#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	/*ofstream input("input_task1.txt");
	input.close();*/

	char name[50];
	ifstream read("input_task1.txt");
	ofstream write("output_task1.txt");
	int i = 0;
	while (!read.eof())
	{
		read.getline(name, 50);
		cout << name << " ";
		write << name;
	}
	read.close();
	write.close();
	return 0;
}