#include <iostream>
using namespace std;
//int getSize(int size);
//void getList(int count[], int size);
//void displayMultiples(int count[], int size);
/************************************************************/
/* List Function
/************************************************************/
/* DEFINITION OF TWO ARGUMENT FUNCTION "average" */
int getSize(int size)
{

  cout << "Enter the size of the list: ";
  cin  >> size;

  return size;
}

/*********************************************************/
/* SIZE_Function 
/*********************************************************/
void getList(int count[], int size)
{
 
  for (int i = 0; i < size; i++) {
      cout << "Enter number for index " << i 
           << ": ";
       cin >> count[i];
       }
       cout << endl;
}    

/*******************************************************/
/*DisplayMultiples
/*******************************************************/
void displayMultiples(int count[], int size)
{
    cout << "The following are divisible by 3: \n";
    for (int i = 0; i < size; i++){
      if (count[i] % 3 == 0)   
        cout << count[i] << endl;   

        }
}

/********************************************************/
/* MAIN
/********************************************************/
int main()
{
    int size = getSize(size);
    int count[size];
    getList(count, size);
    displayMultiples(count, size);

  return 0;
}






