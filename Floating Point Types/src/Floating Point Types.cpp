//============================================================================
// Name        : Floating.cpp
// Author      : Robert Muscat
// Version     :
// Copyright   : Nein Copy
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int value = 6;
	cout << value << endl;
	float fvalue = 63.223465;
	cout << fvalue << endl;
	cout << fixed << fvalue << endl;
	cout << setprecision(20) << fvalue << endl;
	cout << scientific << fvalue << endl;
	cout << "sizeof float: " << sizeof(float) << endl;

	double dvalue = 63.223465;
	cout << dvalue << endl;
	cout << fixed << dvalue << endl;
	cout << setprecision(20) << dvalue << endl;
	cout << scientific << dvalue << endl;
	cout << "sizeof float: " << sizeof(double) << endl;

	long double ldvalue = 63.223465;
	cout << ldvalue << endl;
	cout << fixed << ldvalue << endl;
	cout << setprecision(20) << ldvalue << endl;
	cout << scientific << ldvalue << endl;
	cout << "sizeof float: " << sizeof(long double) << endl;

	return 0;
}
