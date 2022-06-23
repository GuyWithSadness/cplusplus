#include <iostream>
#include <string>
using namespace std;

int main()
{

}

/* Strings
contains a collection of characters surrounded by double quote
string concatenation
	+ operator

string firstName = "John ";
string lastName = "Doe";
string fullName = firstName + lastName; <- this will cause fullName to become John Doe

Append
string in C++ is an object - contain functions

append()
	frontvar_name.append(backvar_name)

string firstName = "John ";
string lastName = "Doe";
string fullName = firstName.append(lastName); <- this will also cause fullName to become John Doe
cout << fullName;

length()
	var_name.length() or var_name.size()

Access Strings
	ah yes
	strings are just arrays of characters

	var_name[];

User Input Strings
use the extraction operator >> on cin

string firstname
cin >> firstname -- small problem, cin considers a space as a terminating character 
*/
