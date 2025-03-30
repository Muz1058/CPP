#include<iostream>
using namespace std;
int fun( int arr[],int size);
int fun( int arr[],int size)
{
    int sum=0;
    cout<<"Your array is ";
    for(int i=0;i<size;i++)
    {
        cout<<arr[i];
       
    }
    return sum;
}
// int print(int arr2[],int size)
// {
//      for(int i=0;i<size;i++)
//      {
//         cout<<arr2[i]<<"  ";
//      }
// }

int main()
{
    const int size=5;
    int arr1[size];

    cout<<"Enter values :"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>arr1[i];
    }
    fun(arr1,size);
    // cout<<"Sum ="<<array(arr1[5],size);

    return 0;
}