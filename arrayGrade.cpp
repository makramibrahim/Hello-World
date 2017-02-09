#include <iostream>
using namespace std;

int main()
{
	int grade;
	int size = 5;
	int count[5];
	int average = 0;

	for (int i = 0; i < size; i++){
		cout << "Enter your grade "
		     << i + 1 << ": ";
		cin  >> grade;
	} 

	cout << "Your grade average is: ";

	for (int i = 0; i < size; i++){
		count[i] += grade;

		if (count[i] % 3 == 0)   
			cout << count[i] << endl;
	}

	


	return 0;

}