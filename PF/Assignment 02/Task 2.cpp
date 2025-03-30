  #include <iostream>
#include <fstream>
using namespace std;
int reverseDigit(ifstream& read)
{
    int num;
    read >> num;
    int reverse = 0;
    while (num != 0)
    {
        int reminder = num % 10;
        reverse = reverse * 10 +reminder;
        num /= 10;
    }
    return reverse;
}
void writeReversed(ofstream& write, int reversed)
{
    write << reversed << " = ";
    cout << reversed << " = ";
    int sum = 0;
    int temp=0;
    while (reversed != 0)
    {
        int digit = reversed % 10;
        temp = digit;
        sum += digit;
        reversed /= 10;
    }
    if (temp < 0)
    {
        sum = -sum + temp * 2;
    }
    cout << sum << endl;
    write << sum << endl;
}
int main()
{
    ifstream read("data.txt");
    ofstream write("reversed.txt");
    while (!read.eof())
    {        
        int reverse_Number = reverseDigit(read);
        writeReversed(write, reverse_Number);
    }
    read.close();
    write.close();
    return 0;
}