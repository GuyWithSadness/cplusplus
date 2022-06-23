#include <iostream>
using namespace std;

int main()
{
	int myNum = 14;
	cout << myNum << "\n";
	cout << myNum << " test " << myNum << " E\n\n\n";
	float f1 = 35e3;
	double d1 = 12E4;
	cout << f1 << "\n";
	cout << d1;
}

/* Variables in C++
Same with C (int, double, char) except now has

string - stores an array of chars (but without the array)
bool - true and false

Declaring Variables

type Variablename = value;
you cannot declare using "myNum << 13"

Declaring multiple Variables

int x = 5, y = 21, z = 213;

Declaring multiple variables with the same value
int x, y , z;
x = y = z = 21;

Constant

the value is uncahngable and read only

const int myNum
*/

/* Data types
	bool is 1 byte
	char is 1 byte
	int is 2 or 4 bytes
	float is 4 bytes
	double is 8 bytes

	double has a precision of 15 digits while float has 6 - 7
	you can also put e to indicate power of 10 in float and doubles

	bool outputs true and false (1 and 0)

	value of char has to be surrounded by a single quote or you can use ASCII values

	string stores a swquence of characters
	string isnt in the build in type so you have to #include <string>
*/
