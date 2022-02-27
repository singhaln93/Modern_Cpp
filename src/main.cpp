/**
 * @file main.cpp
 * @author Neeraj Singhal
 * @date 2021-12-30
 */

#include "fibonacci.hpp"
#include "../lib/lib.hpp"
#include <iostream>
#include <vector>

#define FMT_HEADER_ONLY
#include "spdlog/spdlog.h"

int main()
{
#ifdef DEBUG
  printHelloWorld();
#endif
  std::vector<double> a = {3, 4};
  std::cout << "norm: " << norm(a) << std::endl;
  std::cout << "Result fib(10)= " << fibonacci(10) << std::endl;

  spdlog::info("Welcome to spdlog!");
  spdlog::error("Some error message with arg: {}", 1);

  spdlog::warn("Easy padding in numbers like {:08d}", 12);
  spdlog::critical("Support for int: {0:d};  hex: {0:x};  oct: {0:o}; bin: {0:b}", 42);
  spdlog::info("Support for floats {:03.2f}", 1.23456);
  spdlog::info("Positional args are {1} {0}..", "too", "supported");
  spdlog::info("{:<30}", "left aligned");

  spdlog::set_level(spdlog::level::debug); // Set global log level to debug
  spdlog::debug("This message should be displayed..");

  return 0;
}