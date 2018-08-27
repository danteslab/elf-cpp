#include <bits/stdc++.h>

#include "elf.hpp"

using namespace std;

int main(int argc, char* argv[]) {

	cout << "==*== toUpperCase Test:" << endl;
	string stringToUpperCase = "Hello World!";
	string upperCaseString = toUpperCase(stringToUpperCase);
	cout << stringToUpperCase << " [ in uppercase is : ] " << endl; 
	cout << upperCaseString << endl;
	cout << "\tTest passed ✓" << endl << endl;

	cout << "==*== toLowerCase Test:" << endl;
	string stringToLowerCase = "HELLO, WeLCOme TO DISNEYLAND!";
	string lowerCaseString = toLowerCase(stringToLowerCase);
	cout << stringToLowerCase << " [ in lowercase is : ] " << endl; 
	cout << lowerCaseString << endl;
	cout << "\tTest passed ✓" << endl << endl;

	return 0;
}