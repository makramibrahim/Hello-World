#include <iostream>
using namespace std;

int main()
{
	int years, goal;
	double balance, rate;

	cout << "Enter your balance: ";
	cin  >> balance;
	cout << "Your interest rate: ";
	cin  >> rate;
	cout << "How many years is your CD saving: ";
	cin  >> goal;

	years = 0;

	while (balance < goal) {
		balance *= rate;
		years++;
	}

	cout << "Your saving in " << years 
	     << " years will be $" << goal << endl;

}