#include <iostream>
#include <fstream>
#include <cstring>
#include <string>

using namespace std;

/***********************************************************************
* Function: promptFile
* Description: Prompt the user for a filename
***********************************************************************/
void promptFile(string fileName)
{
   cout << "Please, enter a filename: ";
   cin >> fileName;
}
 
/***********************************************************************
* Function: readFile
* Description: Read a filename given by the user
***********************************************************************/
void readFile(string fileName, string array[])
{
   ifstream fin(fileName);

   if (fin.fail())
   {
      cout << "Unable to read the file: " << fileName << endl;
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

int main()
{
   string fileName;
   string array[256];
   promptFile(fileName);
   readFile(fileName, array);

}
