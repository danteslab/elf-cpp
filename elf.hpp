#include <bits/stdc++.h>

std::string toUpperCase(std::string s) {
	transform(s.begin(), s.end(), s.begin(), std::ptr_fun <int, int>(toupper));
	return s;
}

std::string toLowerCase(std::string s) {
	transform(s.begin(), s.end(), s.begin(), std::ptr_fun <int, int>(tolower));
	return s;
}

/**
*	Convert an integer in string to integer.
*
*	@param numString The number in string to convert.
*	@return numString in int.
*   COMPLEXITY = O(1)
**/
int parseInt(const std::string& numString, int base = 10) {
	std::istringstream istr(numString);
	int value;
	istr >> value;
	return value;
}

/**
*	Convert an integer to string.
*
*	@param number The number to convert.
*	@return The number n in string.
*   COMPLEXITY = O(n), n = length of number
**/
std::string toString(int number) {
	if (number == 0) return "0";
	size_t pos = 0;
	std::string value;
	if(number < 0) { // Negative
		value = "-";
		pos = 1;
		number *= -1;
	}
	char mod;
	while(number > 0) {
		mod = number % 10;		
		value.insert(pos, 1, mod + 48);
		number /= 10;
	}
	return value;
}