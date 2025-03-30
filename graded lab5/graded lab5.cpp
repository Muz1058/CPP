#include <iostream>
using namespace std;
int main()
{
	int salary;
	cout << "G ross amount of employee(RS): ";
	cin >> salary;
		float incomtax = salary * 0.1;
	float gli = 0.0275 * salary;
	float pension = 0.023 * salary;
	float health = 200;
	float netsalary = salary - incomtax - gli - pension - health;
	cout << "Incom Tax(RS):" << incomtax << endl;
	
	cout << "GlobalLife Insurance(RS):" << gli << endl;
	
	cout << "PensionPlan(RS):" << pension << endl;
	
	cout << "Health Insurance(RS):" << health << endl;
	
	cout << "Net Salary(after tax deduction)(RS):" << netsalary << endl;

	return 0;



}