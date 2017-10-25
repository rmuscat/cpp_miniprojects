//============================================================================
// Name        : whiledo.cpp
// Author      : Robert Muscat
// Version     :
// Copyright   : Nein Copy
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstdlib>
#include <ctime>
#define MAX_RAND 100

using namespace std;

int main() {
	int i = 0;
	int max = 100;
	// count 100x from 0
	while (i < max) {
		cout << i++ << " "; // prints Sup World
	}
	cout << endl;

    std::srand(std::time(0)); // use current time as seed for random generator
    int random_variable = 0, tries = 0;

    // pick random numbers until > 95
    while (random_variable < 95 ){
		random_variable = std::rand() % MAX_RAND;
		cout << "Random value on [0 " << MAX_RAND << "]: "
				  << random_variable << '\n';
		tries++;
    }
    cout << "Succeeded after: " << tries << " tries";
	return 0;
}
