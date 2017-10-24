//============================================================================
// Name        : Integer.cpp
// Author      : Robert Muscat
// Version     :
// Copyright   : Nein Copy
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <climits>
using namespace std;

int main() {
	cout << "Maximum Integer: "<< INT_MAX << endl;
	cout << "Minimum Integer: "<< INT_MIN << endl;
	short int shortint;
	int integer;
	unsigned int unsint;
	unsigned short int unshortint;

	cout << "Size of shortint: " << sizeof(shortint) << endl;
	cout << "Size of integer:" << sizeof(int) << endl;
	return 0;
}
