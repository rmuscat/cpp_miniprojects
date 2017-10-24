//============================================================================
// Name        : elseif.cpp
// Author      : Robert Muscat
// Version     :
// Copyright   : Nein Copy
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	cout << "1. Insert record" << endl; // prints Sup World
	cout << "2. Search record" << endl; // prints Sup World
	cout << "3. Delete record" << endl; // prints Sup World
	cout << "4. Quit" << endl; // prints Sup World
	int opt;
	cout << "Insert opt: " << flush;
	cin >> opt;

	if(opt == 1){
		cout << "Insert record";
	} else if (opt == 2) {
		cout << "Search record";
	} else if (opt == 3) {
		cout << "Delete record";
	} else if (opt == 4) {
		cout << "Quit";
	} else {
		cout << "Invalid opt";
	}

	return 0;
}
