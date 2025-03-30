#include <iostream>
#include <fstream>
using namespace std;
int main() 
{
    const int size = 5;
    //Variables
    int oilNo[size], No[size],veichle[size], price[size],day[size], month[size], year[size];
    int day1, month1, year1;
    char slash[size], slash1,slash2; 
  
    ifstream read("makkiOil.txt");
    //To get Date from user
    bool correct = false;
    do
    {
        cout << "Enter Date (dd/mm/yyyy): ";
        cin >> day1 >> slash1 >> month1 >> slash2 >> year1;
        if (slash1 == '/' && slash2 == '/'&& day1>=1 &&  day1<=31 && month1>=1 && month1<=12)
        {
            correct = true;
            break;
        }
        else
        {
            cout << "Invalid Date format. Try again " << endl;
        }
    } while(!correct);
    
    //to compare data
    bool found = false;
    int i = 0;
    while (!read.eof())
    {
        read >> No[i] >> oilNo[i] >> veichle[i] >> price[i] >> day[i] >> slash[i] >> month[i] >> slash[i] >> year[i];
        if (day[i] == day1 && month[i] == month1 && year[i] == year1) {
            cout << "Price: " << price[i] << endl ;
            cout << "Oil No: " << oilNo[i] << endl;
            found = true;     
            break;
        }    
        i++;              
    }
    if (!found)
    {
        cout << "Your input date is not present in file " << endl;
    }

    read.close();
    return 0;
}
