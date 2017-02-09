/***********************************************************************
* Program:
*    Assignment 02, Digital Forencsics
*    Brother Mccracken, Cs165
* Author:
*    Makram Ibrahim
* Summary:
*   This program is designed to help the user keep track of the
*   list files. It Also ensure all the data and time accesses.
************************************************************************/
#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

struct AcRecord
{
   string userName;
   string fileName;
   long  timeStamp;
};


/**************************************************************
 *PROMPT FUNCTION
 * ASK THE USER FOR A FILE NAME
 ***************************************************************/
void promptFile(string & fileName)
{
   cout << "Enter the access record file: ";
   cin  >> fileName;
   cout << endl;
}

/*********************************************************
 *READ FILE
 *
 *********************************************************/
int readFile(string fileName, AcRecord numRead[])
{
   // open the file for reading
   ifstream fin(fileName.c_str());
   if (fin.fail())
   {
       cout << "Unable to read file "
            << fileName << endl;
       return 0;
   }
   // loop through the file and read each elements.
   int total = 0;

   while (! fin.eof())
   {
      fin >> numRead[total].fileName;
      fin >> numRead[total].userName;
      fin >> numRead[total].timeStamp;
      total++;
   }

   // close the file and return
   fin.close();
   return total;
}

/********************************************************
 * PROMPT FOR TIME:
 * GET STRAT TIME AND END TIME FROM THE USER.
 ********************************************************/
void promptTime(long & sTime, long & eTime)
{

   cout << "Enter the start time: ";
   cin  >> sTime;
   cout << "Enter the end time: ";
   cin  >> eTime;

   cout << endl;
}

/********************************************************
 * DISPLAY FUNCION:
 * DISPLAY ALL THE LIST OF ALL FILES THAT WERE ACCESSED
 ********************************************************/
void displayRecord(AcRecord numRead[], long sTime, long eTime, int size)
{

   cout << "The following records match your criteria:\n";
   cout << endl;

   cout << "      Timestamp                File                User" << endl;  \

   cout << "--------------- ------------------- -------------------" << endl;

   for (int i = 0; i < size; i++)
      cout << setw(10) << numRead[i].timeStamp
           << setw(10) << numRead[i].fileName
           << setw(10) << numRead[i].userName << endl;

      cout << "End of records\n";

}

/**********************************************************
 *MAIN
 *WILL CALL OTHER FUNCTIONS
 *********************************************************/
int main()
{
   AcRecord numRead[500];
   string fileName;
   long sTime, eTime;

   promptFile(fileName);
   int size =  readFile(fileName, numRead);
   promptTime(sTime, eTime);
   displayRecord(numRead, sTime, eTime, size);
   return 0;
}

