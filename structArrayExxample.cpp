/*******************************
* EXAMPLE FOR STRUCTS
* This program asks for contact
* information from the user and
* then displays that information
* back to the user.
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
   string street;
   string city;
   char state[2];
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
   string workPhone;
   string faxPhone;
};

/******************************
* EMAIL
* address defines street, city,
* state, and zip.
*******************************/
struct Email
{
   string homeEmail;
   string workEmail;
   string otherEmail1;
   string otherEmail2;
};

/******************************
* CONTACT
* contact defines all the structs
* for the contact struct
*******************************/
struct Contact
{
   Person person;
   Address address;
   Phone phone;
   Email email;
};

// get contact information
void getContactInfo(Contact &contact);

// display contact information
void displayContactInfo(Contact &contact);

/********************************
* MAIN
* driver for the program
*********************************/
int main ()
{
   Contact contact[2]; // contact struct to gather information
   
   for (int i = 0; i < 2; i++)
   {
      getContactInfo(contact[i]); // get the contact information
   }
   
   for (int j = 0; j < 2; j++)
   {
      displayContactInfo(contact[j]); // display contact information
   }
   
   return 0;
}

/********************************
* GET CONTACT INFORMATION
* This function asks for and gets
* the contact information
*********************************/
void getContactInfo(Contact &contact)
{
   cout << "Enter first name: ";
   getline(cin, contact.person.fName);
   cout << "Enter last name: ";
   getline(cin, contact.person.lName);
   cout << "Enter street address: ";
   getline(cin, contact.address.street);
   cout << "Enter city name: ";
   getline(cin, contact.address.city);
   cout << "Enter 2 digit state: ";
   cin >> contact.address.state;
   cout << "Enter 5 digit zip code: ";
   cin >> contact.address.zip;
   cout << "Enter home phone numer: ";
   cin.ignore();
   getline(cin, contact.phone.homePhone);
   cout << "Enter cell phone: ";
   getline(cin, contact.phone.cellPhone);
   cout << "Enter home email: ";
   getline(cin, contact.email.homeEmail);
   cout << "Enter work email: ";
   getline(cin, contact.email.workEmail);
   cout << endl;
}

/********************************
* DSIPLAY CONTACT INFORMATION
* This function displays
* the contact information
*********************************/
void displayContactInfo(Contact &contact)
{
   cout << "First name: " << contact.person.fName << endl;
   cout << "Last name: " << contact.person.lName << endl;
   cout << "Street address: " << contact.address.street << endl;
   cout << "City name: " << contact.address.city << endl;
   cout << "State: " << contact.address.state << endl;
   cout << "Zip code: " << contact.address.zip << endl;
   cout << "Home phone numer: " << contact.phone.homePhone << endl;
   cout << "Cell phone: " << contact.phone.cellPhone << endl;
   cout << "Home email: "  << contact.email.homeEmail << endl;
   cout << "Work email: " << contact.email.workEmail << endl << endl;
}

