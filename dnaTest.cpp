#include <iostream>
using namespace std;

char youDna(char dnaSes1[], int relative);
char nameOfRelative(string names[], int relative);
char dnaRelative();
void displayPercentage();
/**********************************************
* YOUR DNA
**********************************************/
int main()
{
	char dnaSes1[10];
	int relative;
	string names[relative];
	retaltive = youDna(dnaSes1, relative);
	nameOfRelative(names, relative);

	return 0;
}

/**********************************************
* YOUR DNA
**********************************************/
char youDna(char dnaSes1[], int relative)
{
	cout << "Enter your DNA sequence: ";
	cin  >> dnaSes1;

	cout << "Enter number of potential relative: ";
	cin  >> relative;

	cout << endl;

	return relative;
}

/**********************************************
* YOUR DNA
/**********************************************/
char nameOfRelative(string names[], int relative)
{
	names[relative];

	for (int i = 0; i < relative; i++) {
		cout <<"Please enter the name of relative #"
			 << i + 1 << ": ";
	     cin >> names[i];
	}

}

/**********************************************
* YOUR DNA
**********************************************/
char dnaRelative()
{

}

/**********************************************
* YOUR DNA
**********************************************/
void displayPercentage() 
{

}
