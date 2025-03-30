#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	int count=0;
	float average, sum = 0;
	/*ofstream input("input_task2.txt");
	input.close();*/

	int arr[50];
	ifstream read("input_task2.txt");
	ofstream write("output_task2.txt");
	int i = 0;
	while (!read.eof())
	{
		read >> arr[0];
		sum += arr[0];
		count++;		
	}
	average = sum / count;

	cout << "Sum =" << sum << endl;;
	cout << "Average =" << average<<endl;

	write << "Sum =" << sum<<endl;
	write << "average =" << average << endl;

	read.close();
	write.close();
	return 0;
}