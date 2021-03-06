#include <iostream>
using namespace std;

const int NO_OF_EMPLOYEES = 6;
typedef int Hours_array[NO_OF_EMPLOYEES];

/* Function to compute the average value of the elements 
   in an array of type "Hours_array */
float average(Hours_array hrs);

/* More general function to compute the average value of the integer 
   elements in an array "list[]" of length "length" */
float average(int list[], int length);

/* MAIN PROGRAM */
int main()
{
	Hours_array hours;
	int count;
	
	for (count = 0 ; count <= NO_OF_EMPLOYEES ; count++)
	{
		cout << "Enter hours for employee number " << count << ": ";
		cin >> hours[count];
	}
	
	cout << "\nAverage hours worked: " << average(hours,NO_OF_EMPLOYEES) << ".\n";
	
	return 0;
}
/* END OF MAIN PROGRAM */

/* DEFINITION OF ONE ARGUMENT FUNCTION "average" */
float average(Hours_array hrs)
{
	float total = 0;
	int count;
	for (count = 0 ; count < NO_OF_EMPLOYEES ; count++)
		total += float(hrs[count]);
	return (total / NO_OF_EMPLOYEES);
}
/* END OF FUNCTION DEFINITION */

/* DEFINITION OF TWO ARGUMENT FUNCTION "average" */
float average(int list[], int length)
{
	float total = 0;
	int count;
	for (count = 0 ; count < length ; count++)
		total += float(list[count]);
	return (total / length);
}
/* END OF FUNCTION DEFINITION */