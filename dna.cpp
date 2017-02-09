#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;

int main()
{
	char dnaSeq[10];
	int precentage = 0; 
	int number = 0;

	cout << "Enter your DNA sequence: ";
	cin  >> dnaSeq;
	cout << "Enter the number of potential: ";
	cin  >> number;

    string names[number];
    string dnaSeq2[number];

	cout << endl;

	for (int i = 0; i < number; i++)
		{
			cout << "Please enter the name of relative #"
		     << i + 1 << ": ";
			 cin >> names[i];
		}

    cout << endl;

	for (int i = 0; i < number; i++) 
	{
		cout << "Please enter the DNA Sequence for " << names[i]
	     << ": ";
		cin  >> dnaSeq2[i];
	}

	cout << endl;

	for (int i = 0; i < number; i++)
	{
		cout << "Percent match for " << names[i] << ": "
		     << "%";

		if (dnaSeq2[i] == dnaSeq[i]) 

			cout << precentage << endl;
		}



	return 0;
}