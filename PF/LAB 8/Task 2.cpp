#include<iostream>
using namespace std;
int main()
{
	int* p = new int(25);
	float* r = new float(25.75);

	cout << " P = " << *p << endl;
	cout << " r = " << *r << endl;

	delete p;
	delete r;


	return 0;
}