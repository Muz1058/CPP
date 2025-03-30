#include<iostream>
#include<fstream>
using namespace std;
#define size 5
int main()
{
	int arr[size];

	ofstream fout,fout2;
	char filename[] = "my first file.txt";
	fout.open(filename, ios::trunc);
	for (int i = 0; i < size; i++)
	{
		cout << "Enter " << i + 1 << " Element: ";
		cin >> arr[i];
		fout << arr[i]<<endl;
	}
	fout.close();

	int r,max=0;
	ifstream fin;
	fout2.open("Max Num.txt",ios::trunc);
	fin.open(filename);
	int i = 1;
	fin >> r;
	max = r;
	while (!fin.eof())
	{
		fin >> r;
		if (r > max)
		{
			max = r;
		}
		i++;
	}
	cout << "Max Number: " << max;
	fout2 << max;
	fout2.close();
	fin.close();
}