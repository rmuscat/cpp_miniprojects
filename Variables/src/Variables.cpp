//============================================================================
// Name        : Variables.cpp
// Author      : Robert Muscat
// Version     :
// Copyright   : Nein Copy
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main(){
	int numberCats = 5;
	int numberDogs = 11;

	cout << "Number of cats " << numberCats << endl;
	cout << "Number of dogs " << numberDogs << endl;
	numberDogs = numberDogs + 1;
	cout << "Total " << numberCats+numberDogs << endl;
	return 0;
}
