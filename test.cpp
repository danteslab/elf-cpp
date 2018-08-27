#define CATCH_CONFIG_MAIN

#include <bits/stdc++.h>

#include "elf.hpp"
#include "catch.hpp"

using namespace std;

TEST_CASE("Hello World! to uppercase (pass)", "[single-file]") {
	REQUIRE(toUpperCase("Hello World!") == "HELLO WORLD!");
}

TEST_CASE("Empty string to uppercase", "[single-file]") {
	REQUIRE(toUpperCase("") == "");
}


TEST_CASE("WELcoME To BRUsSELS to lowercase", "[single-file]") {
	REQUIRE(toLowerCase("WELcoME To BRUsSELS") == "welcome to brussels");
}

TEST_CASE("Empty string to lowercase", "[single-file]") {
	REQUIRE(toLowerCase("") == "");
}


TEST_CASE("52345 in string to integer", "[single-file]") {
	REQUIRE(parseInt("52345") == 52345);
}

TEST_CASE("Non integer string to integer", "[single-file]") {
	REQUIRE(parseInt("noninteger") == 0);
}

TEST_CASE("Positive integer to string", "[single-file]") {
	REQUIRE(toString(52345) == "52345");
}

TEST_CASE("Negative integer to string", "[single-file]") {
	REQUIRE(toString(-52345) == "-52345");
}

TEST_CASE("0 integer to string", "[single-file]") {
	REQUIRE(toString(0) == "0");
}