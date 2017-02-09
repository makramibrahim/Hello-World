#include <iostream>
using namespace std;

int main()
{
	double balance, rate;
	int years;
	cout << "Enter your starting balance: ";
	cin  >> balance;
	cout << "Annual interest rate: ";
	cin  >> rate;
	cout << "How many years to calculate: ";
	cin  >> years;

	for (int i = 1; i <= years; i++){
		balance *= rate;
	}

	cout << "Your ending balance in " << years 
	     << " years will be $" << balance << endl;

	     cout << endl << endl;

	     
	return 0;
}