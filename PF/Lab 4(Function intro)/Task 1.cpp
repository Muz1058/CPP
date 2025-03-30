//Function that takes input in the form of message from userand display it on console.

#include<iostream>
using namespace std;
void ch()
{
	char ch[10];
	cout << " Enter your Message " << endl;
	cin.getline(ch, 10);
	cout << "Your message is :" << ch;
}
int main()
{
	ch();
	return 0;
}
