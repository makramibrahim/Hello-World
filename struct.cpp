/*******************************
* EXAMPLE FOR STRUCTS
* This program asks for contact
*******************************/

#include <string>
#include <iostream>
using namespace std;

int main()
{ 
   //const int size = 8;
   int row = 8;
   int i, sp, k = 0;

   for (int i = 1; i <= row; i++)
   {
      for (int sp = 1; sp <= row - i ; sp++)
      {
         cout << " ";
      }
      while(k != 2 * i -1)
      {
         cout << "*";
         ++k;
      }
      k = 0;
      cout << endl;
   }
   return 0;
}
