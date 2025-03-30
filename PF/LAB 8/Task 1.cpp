#include<iostream>
using namespace std;
int main()
{
	int N,sum=0;
	cout<<"Enter Size of array :";
	cin >> N;
	int* ptr = new int[N];
	for (int i = 0; i < N; i++)
	{
		cout << "Enter "<<i+1<<" number :";
		cin >> ptr[i];
		sum += ptr[i];
	}
	double average = sum / N;
	cout << "Average =" << average << endl;
	delete[] ptr;
	cout << "Size of deleted memory: " << N * sizeof(int) << " bytes" << endl;
	cout << "Size of memory in use:(Depend upon system)"<< endl;
	return 0;
}