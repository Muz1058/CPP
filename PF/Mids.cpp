// #include<iostream>
// using namespace std;
// int factorial(int a);
// int main()
// {
// cout<<"Enter NUmber :";
// int num1;
// cin>>num1;
// cout<<"Factorial of "<<num1<<" is :"<<factorial(num1);
// return 0;
// }
// int factorial(int a)
// {
//     int fact=1;
//     for(int i=2;i<=a;i++)
//     {
//         fact*=i;
//     }
//     return fact;
// }

// #include <iostream>
// using namespace std;
// void X(int A, int &B)
// {
//       cout<<"A ="<<A<<endl;
//         cout<<"B ="<<B<<endl;
//     A = A + B;
//     cout<<"A1 ="<<A<<endl;
//     B = A - B;
//       cout<<"B1 ="<<B<<endl;
//     A = A - B;
//       cout<<"A2 ="<<A<<endl;
// }
// int main()
// {
//     int a = 4, b = 18;
//     X(a,b);
//     cout << a << ", " << b;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int global = 10;
// void func(int& x, int y)
// {
//     x = x - y;
//     y = x * 10;
//     cout << x << ", " << y << '\n';
// }
// int main()
// {
//     int global = 7;
//     cout<<"Global "<<global<<endl;
//      cout<<"Global ::"<<::global<<endl;
//     func (::global, global);
//     cout << global << ", " << ::global << '\n';
//     func(global, ::global);
//     cout << global << ", " << ::global << '\n';
//     return 0;
// } 

// #include <iostream>
// using namespace std;
// int func(int &x, int y = 10)
// {
//     if (x % y == 0)
//     {
//          return ++x;
//     }
        
//     else 
//         return y--;
// }
// int main()
// {
//     int p = 20, q = 23;
//     q = func(p, q);
//     cout << p << " " << " " << q << endl;
//     p = func (q);
//     cout << p << " " << " " << q << endl;
//     q = func (p);
//     cout << p << " " << " " << q << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int global = 10;
// void func(const int &x, int y)
// {  
//     x=10; 
//     x = x - y;
//     y = x * 10;
//     cout << x << ", " << y << '\n';
// }
// int main()
// {
//     int global = 7;
//     func (::global, global);
//     cout << global << ", " << ::global << '\n';
//     func(global, ::global);
//     cout << global << ", " << ::global << '\n';
//     return 0;
// }

