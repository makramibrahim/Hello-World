/*******************************************************************
* Program:
*    Assignment 03, Digital Forencsics with Corrput files
*    Brother Mccracken, Cs165
* Author:
*    Makram Ibrahim
* Summary:
*   This program is designed to help the user keep track of the
*   list files. It Also ensure all the data and time accesses.
*******************************************************************/
#include <iostream>
#include <string>
#include <fstream> // read the file
#include <sstream> // user to parse a line
#include <iomanip>

#define SIZE_BUFFER 500
#define SIZE_FILE  1000000000
#define SIZE_FILE2 10000000000

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
   int i = 0;
   // loop through the file and read each elements.
   while(!fin.eof())
   {
      fin >> numRead[i].fileName;
      fin >> numRead[i].userName;
      fin >> numRead[i].timeStamp;
      i++;
   }

   // close the file and return
   fin.close();
   return i;
}


/********************************************************
 * PROMPT FOR TIME:
 * GET STRAT TIME AND END TIME FROM THE USER.
 ********************************************************/
void promptTime(long & sTime, long & eTime)
{
   // prompt for a start time and time.
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
   // display the matching records
   cout << "The following records match your criteria:\n";
   cout << endl;

   cout << "      Timestamp" << setw(20)
        << " File" << setw(20) << " User" << endl;
   cout << "---------------" << " -------------------"
        << " -------------------" << endl;

   // loop through the records
   for (int i = 0; i < SIZE_BUFFER; i++){
      // compare between times
      {
      if (numRead[i].timeStamp >= sTime &&
          numRead[i].timeStamp <= eTime)
         cout << "     "  << numRead[i].timeStamp
              << setw(20) << numRead[i].fileName
              << setw(20) << numRead[i].userName << endl;
   }

   }

   cout << "End of records\n";
}
/*************************************************************
 * Function: ParseLine
 * Description: Accept a line string and populates a struct
 *************************************************************/
void parseLine(string line, AcRecord numRead[])
{
   int i = 0;
   stringstream fin(line);
   getline(fin, line);

   if (fin.fail())
   {
      cout << "Error parsing line: " << line << endl;
   }

   // Please note that for stretch challenges, you'll need additional checks

  while(!fin.eof())
   {
      fin >> numRead[i].fileName;
      fin >> numRead[i].userName;
      fin >> numRead[i].timeStamp;
      i++;
   }


}

/**********************************************************
 *Parse File
 * Processes a file data line by line.
 *********************************************************/
bool parseFile(AcRecord numRead[])
{
   string line;

   for (int i = 0; i < SIZE_BUFFER; i++)
   {
      if (numRead[i].timeStamp >= 'A' ||
          numRead[i].timeStamp <= 'Z' ||
          (numRead[i].timeStamp < SIZE_FILE)  ||
          (numRead[i].timeStamp > SIZE_FILE2) ||
          ((numRead[i].fileName).empty())     ||
          (( numRead[i].userName).empty()))
      {
      return false;
      }
      else
      {
      return true;
      }
   }

   parseLine(line, numRead);
}

/**********************************************************
 *MAIN
 * CALLS  OTHER FUNCTIONS
 *********************************************************/
int main()
{
   // declare variables
   AcRecord numRead[256];
   string fileName;
   long sTime, eTime;

   // get prompt file
   promptFile(fileName);
   // get readFile by assigned to size
   int size =  readFile(fileName, numRead);
   // get times
   promptTime(sTime, eTime);
   // display everything.
   parseFile(numRead);
   displayRecord(numRead, sTime, eTime, size);


   return 0;
}
