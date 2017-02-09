/************************************************************
* Program:
*    Checkpoint 03b, Digital Forencsics
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
int promptNumber(int & number)
{

   cout << "Enter a number: ";
   cin  >> number;

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

   if (cin.fail())
   {
      cin.ignore();
      cin.clear();
      cout << "Invaid input: " << endl;

      while (number != cin)
      {
          promptNumber(number);
          cout << "The number is: " << number << "."
               << endl;

      }
   }
      else 
      {
         cout << "The number is: " << number << "."
              << endl;
      }
   
   


   return 0;
}

