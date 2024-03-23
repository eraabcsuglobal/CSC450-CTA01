/* Name: Evan Raab
 * Project Name: CSC450-CTA01
 * Project Purpose: Print information for a fictional person
 * Algorithm Used: Create and set variables for a fictional person and then use simple print function to print person's information to the console
 * Program Inputs: None
 * Program Outputs: First Name, Last Name, Street Address, City, and Zip Code
 * Program Errors: None
*/


#include <iostream>
#include <string>

using namespace std;


int main()
{
	// create variables to store information for fictional person
	string firstName = "Dan";
	string lastName = "Hill";
	string streetAddress = "1945 Evergreen Terrace";
	string city = "Philadelphia";
	int zipCode = 19125;

	// print information
	cout << firstName << " " << lastName << endl;
	cout << streetAddress << endl;
	cout << city <<", " << zipCode << endl;

}
