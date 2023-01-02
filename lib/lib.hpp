/**
 * @file lib.hpp
 * @author Neeraj Singhal
 */

#pragma once
#include <cstring>
#include <fstream>
#include <iostream>
#include <random>
#include <sstream>
#include <string>
#include <vector>
#include <concepts>

/**
 * @brief sayHello function
 */
void printHelloWorld();

/**
 * @brief generate random number
 * @param[in] min minimum value
 * @param[in] max maximum value
 * @return int generated random number
 */
int randomNumberGenerator(const int &, const int &);

/**
 * @brief
 * @param vec
 * @return double
 */
auto norm(const std::vector<double> &vec) -> double
{
    double result{0};
    for (size_t i = 0; i < vec.size(); ++i)
    {
        result += vec[i] * vec[i];
    }
    return std::sqrt(result);
}
