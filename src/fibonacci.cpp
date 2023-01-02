/**
 * @file fibonacci.cpp
 * @author Neeraj Singhal
 */

#include "fibonacci.hpp"
int fibonacci(int number)
{
    if (number < 2)
        return number;
    return fibonacci(number - 1) + fibonacci(number - 2);
}
