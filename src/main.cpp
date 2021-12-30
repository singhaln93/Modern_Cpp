/**
 * @file main.cpp
 * @author Neeraj Singhal
 * @date 2021-12-30
 */

#include "fibonacci.hpp"
#include <iostream>
#include <vector>

void say_hello();

int main()
{
#ifdef DEBUG
  say_hello();
#endif
  std::cout << "Result fib(10)= " << fibonacci(10) << std::endl;
  return 0;
}

void say_hello() { std::cout << "Hello World!" << std::endl; }