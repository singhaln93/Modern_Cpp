/**
 * @file lib.hpp
 * Copyright © 2021  Neeraj Singhal
 * All rights reserved
 */

#pragma once
#include <cstring>
#include <fstream>
#include <iostream>
#include <random>
#include <sstream>
#include <string>
#include <vector>

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