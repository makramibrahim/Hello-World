#include <iostream>
using namespace std;

int main()
{
	int grade;
	string leGrade;
	cout << "Enter your grade: ";
	cin  >> grade;

	if ((grade >= 90) && (grade <= 100)){
		leGrade = "A";
	}
	else if ((grade >= 80) && (grade <= 89)){
		leGrade = "B";
	}
	else if (grade >= 70 && grade <= 79){
		leGrade = "C";
	}
	else if (grade >= 60 && grade <= 69){
		leGrade = "D";
	}
	else 
		leGrade = "F";

	cout << "Letter Grade is: " << leGrade << endl;

	return 0;


}