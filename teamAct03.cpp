/**********************************************************************
* File: ta03.cpp
* Author: Br. Burton
*
* Description: Use this file as a starting point for Team Activity 03.
*    You do not need to "submit" your code, but rather, answer the
*    questions in the I-Learn assessment.
**********************************************************************/
 
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;
 
/***********************************************************************
* Struct: Scripture
* Description: Holds the reference to a scripture (book, chapter, verse
***********************************************************************/
struct Scripture
{
   string book;
   int chapter;
   int verse;
   int endverse;
};
 
/***********************************************************************
* Function: display
* Description: Displays the passed scripture.
***********************************************************************/
void display(const Scripture &scripture)
{
   cout << scripture.book << " ";
   cout << scripture.chapter;

   if (scripture.verse > 0)
   {
      cout << ":" << scripture.verse;
   }
  
   if (scripture.endverse > 0)
   {
      cout << "-" << scripture.endverse;

   }

}
/***********************************************************************
* Function: promptFile
* Description: Prompt the user for a filename
***********************************************************************/
void promptFile(char filename[])
{
   cout << "Please, enter a filename: ";
   cin >> filename;
}
 
/***********************************************************************
* Function: readFile
* Description: Read a filename given by the user
***********************************************************************/
void readFile(char filename[], string array[])
{
   ifstream fin(filename);
   if (fin.fail())
   {
      cout << "Unable to read the file: " << filename << endl;
   }
   int i = 0;
   while (!fin.eof())
   {
      getline(fin, array[i]);
      i++;
   }
   //Finishing reading the file
   fin.close();
}
 
/***********************************************************************
* Function: parseLine
* Description: parse the line to a book, chapter and verse.
***********************************************************************/
void parseLine(string array[], Scripture &scripture)
{
   int i = 0;
   while (!array[i].empty())
   {
      stringstream buffer(array[i]); 
      buffer >> scripture.book;
      if (buffer.fail())
      {
          cout << "Error processing the line: " << array[i] << endl;
      }
      buffer >> scripture.chapter;
      buffer >> scripture.verse;
      if (buffer.fail()){
          scripture.verse = 0;
      }

      buffer >> scripture.endverse;
     
      if (buffer.fail())
      {
         scripture.endverse = 0;
      }
     
      display(scripture);
      cout << endl;
      i++;

   }
}
 
/***********************************************************************
* Function: main
* Description: The driver for the program.
***********************************************************************/
int main()
{
   string array[256];
   // Insert your code here to prompt for the name of a file
   char filename[256];
   promptFile(filename);
  
   // and pass it to a readFile function
   readFile(filename,array);
  
   // Creating a scriture struct
   Scripture scripture;
  
   // Using stringstream
   parseLine(array,scripture);
  
   return 0;
}