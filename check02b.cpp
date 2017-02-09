/***********************************************************************
* Program:
*   Checkpoint 02a,
*    Brother Mccracken, Cs165
* Author:
*    Makram Ibrahim
* Summary:
*   This program is going to user a struct method to prompt the
*   user for his/her first name, last name and id number.
*****************************************************************/

#include <iostream>
#include <string>
using namespace std;

// TODO: Define your Complex struct here
struct Complex
{
   double real;
   double imaginary;
};

/**********************************************************************
 *PROMPT FUNCTION:
 *Prompt the user for input
 *********************************************************************/
void prompt(const Complex & num1, const Complex & num2)
{
   cout << "Real: ";
   cin  >> num1.real;
   cout << "Imaginary: ";
   cin  >> num2.imaginary;

}

/**********************************************************************
 *DISPLAY  FUNCTION:
 *Will accept a Complex struct and display it.
 *********************************************************************/
void display(const Complex & i)
{
	cout << i.real << " + " << i.imaginary << "i";
}

/**********************************************************************
 * Function: addComplex
 * Purpose: Adds two complex numbers together and returns the sum.
 ***********************************************************************/
Complex addComplex(const Complex & x, const Complex & y)
{
   // TODO: Fill in the body of the add function
    Complex count;

    count.real      = x.real + y.imaginary;
    count.imaginary = x.real + y.imaginary;

    return count;  
}

/**********************************************************************
 * Function: main
 * Purpose: This is the entry point and driver for the program.
 ***********************************************************************/
int main()
{
   // Declare two Complex objects, c1 and c2
   Complex c1; 
   Complex c2;

   // Call your prompt function twice to fill in c1, and c2
   prompt(c1.real, c1.imaginary);
   prompt(c2.real, c2.imaginary);

   // Declare another Complex for the sum
   Complex sum;

   // Call the addComplex function, putting the result in sum;
   addComplex(c1, c2);
 
   sum.real      = addComplex(c1, c2).real;
   sum.imaginary = addComplex(c1, c2).imaginary;


   cout << "\nThe sum is: ";
   display(sum);
   cout << endl;

   return 0;
}


