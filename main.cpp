#include <bits/stdc++.h>

#include "elf.hpp"

using namespace std;

int main() {

	cout << "==*== toUpperCase Test:" << endl;
	string stringToUpperCase = "Hello World!";
	string upperCaseString = toUpperCase(stringToUpperCase);
	cout << stringToUpperCase << " [ in uppercase is : ] " << endl; 
	cout << upperCaseString << endl;
	cout << "\tTest passed ✓" << endl << endl;

	return 0;
}