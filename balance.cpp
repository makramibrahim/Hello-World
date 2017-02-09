#include <iostream>
using namespace std;

int main()
{	
	int count, years;
	double balance, rate;

	cout << "This program will help you to manage your interest rate!\n";
	cout << "Please enter your starting balance: ";
	cin  >> balance;
	cout << "Enter your interest rate: ";
	cin  >> rate;
	cout << "Enter how many years: ";
	cin  >> years;

	count = 1;

	while ( count <= years) {
		balance *= rate;
		count++;
	}

	count << "Your balance after " << years << " years is " 
		  << balance << endl;

		  return 0;
}


%USERPROFILE%\AppData\Local\Microsoft\WindowsApps;

%SystemRoot%\system32;%SystemRoot%;%SystemRoot%\System32\Wbem;%SYSTEMROOT%\System32\WindowsPowerShell\v1.0\;%USERPROFILE%\.dnx\bin;C:\Program Files\Microsoft DNX\Dnvm\;C:\Program Files\Microsoft SQL Server\130\Tools\Binn\;C:\Program Files (x86)\Windows Kits\8.1\Windows Performance Toolkit\;C:\MinGW\bin\