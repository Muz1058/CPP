
#include<iostream>
using namespace std;
int count(char arr[])
{
int count=0,i=0;
while(arr[i]!='\0')
{
    if(arr[i]==' ')
    {
        count++;
    }
    i++;
}
return count;
}
void convert(char arr[])
{
    int i=0;
    while(arr[i]!='\0')
    {
        if(arr[i]=='a'||arr[i]=='e'||arr[i]=='i'||arr[i]=='o'||arr[i]=='u')
        {
            arr[i]=arr[i]-32;
        }
        i++;
    }
    cout<<"Updated string : "<<arr;
}
int main()
{
char arr[100];
cout<<"Enter string :";
cin.getline(arr,100);
cout<<"Total Spaces are :"<<count(arr)<<endl;
convert(arr);
return 0;
}