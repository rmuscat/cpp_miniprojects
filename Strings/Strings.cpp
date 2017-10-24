#include <iostream>
using namespace std;

int main(){
	cout << "Strings Program" << endl;
	string text1 = "This is a long string within a string class";
	string text2 = "This is the second string";
	cout << text1 + " " + text2 << endl;
	cout << "Enter your name: " << flush;
	string input;
	cin >> input;
	cout << "You entered " << input << endl;

	int n, sqr;
	cout << "Enter number [n]: " << flush;;
	cin >> n;
	sqr = n*n;
	cout << "You entered: " << n*n << endl;
	return 0;
}
