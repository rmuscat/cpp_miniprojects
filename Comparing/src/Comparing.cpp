//============================================================================
// Name        : Comparing.cpp
// Author      : Robert Muscat
// Version     :
// Copyright   : Nein Copy
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

	float f = 1.1;

	if (f == 1.1) {
		cout << "Equal!" << endl;
	} else {
		cout << "Not Equal" << endl;
	}
	cout << setprecision(10) << f;
	return 0;
}
