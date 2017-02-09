/************************************************************
* Program:
*    Checkpoint 03a, Digital Forencsics
*    Brother Mccracken, Cs165
* Author:
*    Makram Ibrahim
* Summary:
*   This program is designed to help the user keep track of the
*   list files. It Also ensure all the data and time accesses.
**************************************************************/
#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

/******************************************************
 *PROMPT FUNCTION
 * ASK THE USER FOR A FILE NAME
 ********************************************************/
int promptNumber(int number)
{
   cout << "Enter a number: ";
   cin  >> number;

  // for (int i = 0; i < 100; i++){
      if (number > 100)
      {
         cout << "Error: The number cannot be greater than 100." <<endl;
      }
       else if (number < 0) 
       {
         cout << "Error: The number cannot be negative." << endl;
       }                 
       else if (number % 2 == 0)
       {
         cout << "The number is " << number << "." << endl;
       }
       else 
         cout << "Error: The number connot be odd." << endl;   
   

   return number;

}

/**********************************************************
 *MAIN
 *WILL CALL OTHER FUNCTIONS
 *********************************************************/
int main()
{
   int number;

   promptNumber(number);

   return 0;
}

