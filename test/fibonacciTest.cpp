/**
 * @file fibonacciTest.cpp
 * @author Neeraj Singhal
 * @date 2021-12-30
 */

#include "mainTest.hpp"
#include "../src/fibonacci.hpp"

// (1) Test case for fibonacci series
TEST_CASE("simple test case calculating fibonacci for 10th element", "[fibonacci]")
{
    REQUIRE(fibonacci(10) == 55);
}
