#include<iostream>
#include<fstream>
using namespace std;
float fun(float* p , int s)
{
	float sum = 0;
	for (int i = 0; i < s; i++)
	{
		sum += p[i];
	}
	return sum;
}
int main()
{
	ifstream read("Input_task3.txt");
	float* ptr = new float[3];
	int count=0,sum;
	while (read >> ptr[count])
	{
		count++;
	}
	cout << "Sum =" << fun(ptr,count)<<endl;
	cout << "Average = "<<(fun(ptr, count)) / count << endl;
	delete[] ptr;
	read.close();
	return 0;
}