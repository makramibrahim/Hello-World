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

/**************************************************************
 *PROMPT FUNCTION
 * ASK THE USER WHICH BOOK, CHAPTER AND VERSE TO READ
***************************************************************/
int promptScripture(string bookName, int chapter[], int verse[])
{
  int size;
   // prompt the user for book name
  cout << "Pleae enter the desire Book name to read: ";
  getline(cin, bookName);
   // prompt the user for a chapter number
  cout << "Please enter a Chapter number: ";
  cin  >> chapter[size];  
  // prompt the user for a verse number
  cout << "Enter verse: ";
  cin  >> verse[size];

  cout << endl;

  return size;
}

/***************************************************************
 *DISPLAY FUNCTION
 *WILL GET THE RESULT OUTPUTS FOR THE USER
****************************************************************/
void displayScripture(string & bookName)
{   
  int size;
  int chapter[size];
  int verse[size];
  // get the result for the user 
  cout << "Your requested Book: " << bookName << endl;
  for (int i = 0; i < size; i++) {
    cout << "Chapter: " << chapter[i] << endl;
  }

  for (int i = 0; i < size; i++) {
    cout << "Verse: " << verse[i] << endl;  
  }

}

/**************************************************************
 *MAIN
 *WILL CALL OTHER FUNCTIONS
 ***************************************************************/
int main()
{
  // declare a variable
  int size;
  string myInput;
  int myChapter[size];
  int myVerse[size];
  // get the user's request
  promptScripture(myInput, myChapter, myVerse);
  // display the result
  displayScripture(myInput);
  return 0;
}