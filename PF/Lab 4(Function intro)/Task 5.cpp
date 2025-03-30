//Program that takes 5 subject marks in an integers array from user. Your task is to display
//the marks of individual subjects by using functions.

#include<iostream>
using namespace std;
void display(const int marks[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << "Marks of subject " << i + 1 << " is =" << marks[i] << endl;
	}
}
int main()
{
	const int size = 5;
	int input_marks[size];
	for (int i = 0; i < 5; i++)
	{
		cout << "Enetr marks of Subject " << i + 1 << " :";
		cin >> input_marks[i];
	}
	display(input_marks, size);
	return 0;
}
