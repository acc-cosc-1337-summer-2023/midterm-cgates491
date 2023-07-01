#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question3.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(test_config(5) == true);
}

TEST_CASE("Test get_fib_sequence")
{
	REQUIRE(get_fib_sequence(5) == 5);
}

TEST_CASE("Test get_fib_sequence2")
{
	REQUIRE(get_fib_sequence(7) == 13);
}

TEST_CASE("Test get_fib_sequence3")
{
	REQUIRE(get_fib_sequence(10) == 55);
}

TEST_CASE("Test get_fib_sequence4")
{
	REQUIRE(get_fib_sequence(12) == 144);
}