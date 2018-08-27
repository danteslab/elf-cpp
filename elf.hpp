#include <bits/stdc++.h>

std::string toUpperCase(std::string s) {
	transform(s.begin(), s.end(), s.begin(), std::ptr_fun <int, int>(toupper));
	return s;
}

