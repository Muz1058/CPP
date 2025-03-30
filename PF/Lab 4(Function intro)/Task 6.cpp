//Program that takes 5 subject marks in an integers array and total marks of subject in integer variable from user.
//Your task is to display sum, average and percentage of these marks by using functions.

#include<iostream>
using namespace std;

float sum(float marks[], int size)
{
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += marks[i];
	}
	return sum;
}
float average( float marks[], int size)
{
	return sum(marks, size) / size;
}
float percentage( float marks[], int total, int size)
{

	return sum(marks, size) * 100 / total;
}
int main()
{
	const int size = 5;
	float input_marks[size];
	int total_marks;
	for (int i = 0; i < size; i++)
	{
		cout << "Enter marks of Subject " << i + 1 << " :";
		cin >> input_marks[i];
	}
	cout << "\nEnter Total marks :";
	cin >> total_marks;
	cout << "Sum = " << sum(input_marks, size) << endl;
	cout << "Average = " << average(input_marks, size) << endl;
	cout << "Percentage ="  << percentage(input_marks, total_marks,size) <<"%" << endl;
	return 0;
}
