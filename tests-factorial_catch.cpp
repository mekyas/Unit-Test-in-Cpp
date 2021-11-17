#include "catch.hpp"
#include "factorial.cpp"


TEST_CASE( "Factorials for zero", "[factorial]" ) {
    REQUIRE( Factorial(0) == 1 );
}

TEST_CASE( "Factorials for positive numbers", "[factorial]" ) {
    REQUIRE( Factorial(1) == 1 );
    REQUIRE( Factorial(2) == 2 );
    REQUIRE( Factorial(3) == 6 );
    REQUIRE( Factorial(10) == 3628800 );
}