/*******************************
* EXAMPLE FOR STRUCTS
*******************************/

#include <string>
#include <iostream>
using namespace std;

/******************************
* PERSON
* person defines first and
* last name.
*******************************/
struct Person
{
   string fName;
   string lName;
};

/******************************
* ADDRESS
* address defines street, city,
* state, and zip.
*******************************/
struct Address
{
   string address;
   string city;
   int zip;
 
};

/******************************
* PHONE
* phone defines all phone numbers
*******************************/
struct Phone
{
   string homePhone;
   string cellPhone;
};

/******************************
* EMAIL
* address defines street, city,
* state, and zip.
*******************************/
struct Email
{
   string email;
   string workEmail;
  
};

struct Contact
{
   Person person;
   Address address;
   Phone phone;
   Email email;
};

/********************************
* GET CONTACT INFORMATION
* This function asks for and gets
* the contact information
*********************************/
void getContactInfo(Contact &input)
{
   cout << "What's your name: ";
   getline(cin, input.person.fName);
   cout << "What's your last name: ";
   getline(cin, input.person.lName);
   cout << "What's your address: ";
   getline(cin, input.address.address);
   cout << "What city: ";
   getline(cin, input.address.city);

   
}

/********************************
* DSIPLAY CONTACT INFORMATION
* This function displays
* the contact information
*********************************/
void displayContactInfo(Contact &output)
{
   cout << "Your name: " << output.person.fName << endl; 
   cout << "Your last name is: " << output.person.lName << endl;
 
}


/********************************
* MAIN
* driver for the program
*********************************/
int main ()
{ 
   Contact input, output;
   Contact all;
   all = (input, output); 

   getContactInfo(all);
   displayContactInfo(all);
 
   
   return 0;
}



