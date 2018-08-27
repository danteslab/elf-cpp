#define CATCH_CONFIG_MAIN

#include <bits/stdc++.h>

#include "elf.hpp"

#include "catch.hpp"

using namespace std;

TEST_CASE("Hello World! to uppercase (pass)", "[single-file]") {
	REQUIRE(toUpperCase("Hello World!") == "HELLO WORLD!");
}