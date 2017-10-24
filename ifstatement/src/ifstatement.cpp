//============================================================================
// Name        : ifstatement.cpp
// Author      : Robert Muscat
// Version     :
// Copyright   : Nein Copy
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	string password = "hello";
	string input;

	cout << "Enter password: " << flush;
	cin >> input;

	if (input == password) {
		cout << "Correct password";
	} else
	{
		cout << "Invalid password";
	}

	return 0;
}
