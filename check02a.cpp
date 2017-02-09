#include <iostream>
#include <string>
using namespace std;
/**********************************************
* Creat a struct for student's name and id!
***********************************************/
struct Student
{
	string firstName; // 
	string lastName;
	int id;
};

void displayStudent(Student & input);
void displayInfo(const Student & output);

/**********************************************
* MAIN: Will call inputs and outputs functions!
***********************************************/
int main()
{
	Student user;           // Declare variable
	displayStudent(user);   // Call and pass by reference
	displayInfo(user);      //  Call and display the result

	return 0;
}


/**********************************************
* This function will prompt user for information
***********************************************/
void displayStudent(Student & input)
{
	cout << "Please enter your first name: ";
	getline(cin, input.firstName);
	cout << "Please enter your last name: ";
	getline(cin, input.lastName);
	cout << "Please enter your id number: ";
	cin  >> input.id;

}

/**********************************************
* This function will display back the inputs
***********************************************/
void displayInfo(const Student & output)
{
	cout << "Your information:" << endl
	     << output.id << " - " << output.firstName 
	     << " " << output.lastName << endl;

}