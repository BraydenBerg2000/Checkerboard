/*
Brayden
C++ Fall 2019
Due: September 12, 2019
Checker Board
We are tasked with creating a checkerboard pattern using asterisks and spaces.
*/

#include <iostream>;

using namespace::std;

//Variable description.
const string L1 = "  *    *    *    *";
const string L2 = "*    *    *    *  ";

int main()
{
	//Outputs checkerboard pattern onto the screen.
	cout << L1 << endl;
	cout << L2 << endl;
	cout << L1 << endl;
	cout << L2 << endl;
	cout << L1 << endl;
	cout << L2 << endl;
	cout << L1 << endl;
	cout << L2 << endl;

	return 0;
}