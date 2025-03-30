#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	const int size = 2;
	int sub1[size], sub2[size], sub3[size];
	char name[20];
	double obtain, percentage, total = 300;
	/*ofstream input("input_task3.txt");
	input.close();*/
	
	ifstream read("input_task3.txt");
	ofstream write("output_task3.txt");
	int i = 0;
	while (read >>name>> sub1[i] >> sub2[i] >> sub3[i])
	{
	
		char grade;	
		obtain = sub1[i] + sub2[i] + sub3[i];
		
		percentage = (obtain / total) * 100;
		
		if (percentage >= 84.5)
		{
			grade = 'A';
		}
		else if (percentage >= 71.5)
		{
			grade = 'B';
		}
		else if (percentage >= 57.5)
		{
			grade = 'C';
		}
		else if (percentage >= 49.5)
		{
			grade = 'D';
		}
		else
		{ 
			grade = 'F';
		}
		cout << name << " obtained " << grade<<" grade" << endl;
		i++;
	}
	read.close();
	write.close();
	return 0;
}
