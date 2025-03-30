           //  Decimal to binary //
#include<iostream>
using namespace std;
int main()
{
int num,reminder=0,i=1,binary=0;
cout<<"Enter number :";
cin>>num;
 while (num != 0)
  {
    reminder = num % 2;
    binary += reminder * i;
    num /= 2;
    i *= 10; 
 }
 cout<<"Binary ="<<binary;
return 0;
}