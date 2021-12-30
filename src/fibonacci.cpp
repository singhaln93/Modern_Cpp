/**
 * @file fibonacci.cpp
 * @author Neeraj Singhal
 * @date 2021-12-30
 */

#include "fibonacci.hpp"
int fibonacci(int number)
{
    if (number < 2)
        return number;
    return fibonacci(number - 1) + fibonacci(number - 2);
}
