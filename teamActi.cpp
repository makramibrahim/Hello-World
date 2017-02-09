/***********************************************************************
* Program:
*    Teaching Activity, S
*    Brother Mccracken, Cs165
* Author:
*    Makram Ibrahim
* Summary:
*     This is a smiple program that uses a struct method to
*     display a scripture baised on user's request.  
* ***********************************************************************/

#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

struct Scripture
{
  string bookName;
  string chapter;
  string verse;
 
};

/**************************************************************
 *PROMPT FUNCTION
 * ASK THE USER WHICH BOOK, CHAPTER AND VERSE TO READ
***************************************************************/
void promptScripture(Scripture & input)
{
   // prompt the user for book name
  cout << "Pleae enter the desire Book name to read: ";
  getline(cin, input.bookName);

   // prompt the user for a chapter number
  cout << "Please enter a Chapter number: ";  
  getline(cin, input.chapter);
  // prompt the user for a verse number
  cout << "Enter verse: ";
  getline(cin, input.verse);
}

/***************************************************************
 *DISPLAY FUNCTION
 *WILL GET THE RESULT OUTPUTS FOR THE USER
****************************************************************/
void displayScripture(Scripture & output)
{

  // get the result for the user 
  cout << "Your requested Book: "
       << output.bookName << endl;
  cout << "Chapter: ";
  cout << output.chapter << endl;
  cout << "Verse: ";
  cout << output.verse << endl;
   

}

/**************************************************************
 *MAIN
 *WILL CALL OTHER FUNCTIONS
 ***************************************************************/
int main()
{
  // declare a variable 
  Scripture MyInput;
 // get the user's request
  promptScripture(MyInput);
  // display the result
  displayScripture(MyInput); 

   return 0;
}