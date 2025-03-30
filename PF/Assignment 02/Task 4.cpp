#include <iostream>
#include <fstream>
using namespace std;
void CorrectSyntax(fstream&);
int main()
{
	fstream file;
	file.open("code.txt");
	CorrectSyntax(file);
	file.close();
	return 0;
}
void CorrectSyntax(fstream& file)
{
	ifstream read("code.txt");
	bool first_run = false;
	while (!read.eof())
	{
		char arr[50] = { '\0' };
		read.getline(arr, 50);
		int length = 0;
		for (int i = 0; i < 50; i++)
		{
			if (arr[i] == '\0')
			{
				length = i;
				break;
			}
		}
		if (arr[length - 1] >= 'a' && arr[length - 1] <= 'z')
		{
			arr[length] = ';';
		}
		if (first_run)
		{
			file << endl;
		}
		cout << arr << endl;
		file << arr;
		first_run = true;
	}
	read.close();
}
