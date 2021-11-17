#define BOOST_TEST_MODULE factorial header only test
#include <boost/test/included/unit_test.hpp>
#include "factorial.cpp"

BOOST_AUTO_TEST_CASE(Factorials_for_zero) {
    BOOST_TEST( Factorial(0) == 1 );
}

BOOST_AUTO_TEST_CASE(Factorials_for_positive_numbers) {
    BOOST_CHECK( Factorial(1) == 1 );
    BOOST_CHECK( Factorial(2) == 2 );
    BOOST_CHECK( Factorial(3) == 6 );
    BOOST_CHECK( Factorial(10) == 3628800 );
}