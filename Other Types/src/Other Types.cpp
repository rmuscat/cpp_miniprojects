//============================================================================
// Name        : Other.cpp
// Author      : Robert Muscat
// Version     :
// Copyright   : Nein Copy
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
// #include <climit>

using namespace std;

int main() {
	cout << "Sup World" << endl; // prints Sup World
	bool b = true;
	cout << b << endl;
	b = false;
	cout << b << endl;

	char c = 65;
	cout << c << endl;
	cout << "Sizeof char: " << sizeof(char) << endl;

	wchar_t wValue;
	wValue = 42;
	cout << "WChar T:" << wValue << endl;

	return 0;
}
