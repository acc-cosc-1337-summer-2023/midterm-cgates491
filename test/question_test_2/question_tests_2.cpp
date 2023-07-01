#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question2.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(test_config("00001010") == true);
}

TEST_CASE("test binary to decimal")
{
	REQUIRE(binary_to_decimal("00001010") == 10);
}

TEST_CASE("test binary to decimal1")
{
	REQUIRE(binary_to_decimal("10101010") == 170);
}

TEST_CASE("test binary to decimal2")
{
	REQUIRE(binary_to_decimal("11111111") == 255);
}