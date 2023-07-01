#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question4.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(test_config(3) == true);
}

TEST_CASE("test get_earned_points")
{
	REQUIRE(get_earned_points(3) == 3);
}

TEST_CASE("test get_earned_points2")
{
	REQUIRE(get_earned_points(9) == 45);
}

TEST_CASE("test get_earned_points3")
{
	REQUIRE(get_earned_points(11) == 110);
}

TEST_CASE("test get_earned_points4")
{
	REQUIRE(get_earned_points(20) == 300);
}