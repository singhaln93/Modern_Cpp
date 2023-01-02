/**
 * @file cppStandard.hpp
 * @author Neeraj Singhal
 */

#include <iostream>
#include <string_view>

/**
 * Info:199711L stands for Year=1997, Month = 11 (i.e., November of 1997)
 * The date when the committee approved the standard that the rest of the ISO
 * approved in early 1998
 */
#define CPP98 199711L
#define CPP03 CPP98 ///>value remain unchanged
#define CPP11 201103L
#define CPP14 201402L
#define CPP17 201703L
#define CPP20 202002L
#define CPP23 0 ///>TBD

/**
 * @brief print cpp standard
 */
void printCppStandard()
{
    std::string msg{"\nDefault cpp standard:"};
    if (__cplusplus == CPP98 || __cplusplus == CPP03)
        std::cout << msg
                  << "C++98 or C++03\n";
    else if (__cplusplus == CPP11)
        std::cout << msg
                  << "C++11\n";
    else if (__cplusplus == CPP14)
        std::cout << msg
                  << "C++14\n";
    else if (__cplusplus == CPP17)
        std::cout << msg
                  << "C++17\n";
    else if (__cplusplus == CPP20)
        std::cout << msg
                  << "C++20\n";
    else if (__cplusplus == CPP23)
        std::cout << msg
                  << "C++23\n";
    else
        std::cout << "pre-standard C++\n"
                  << __cplusplus;
}

/**
 * !IMPORTANT:
 * Compile command:$ g++ -std=c++20 {FLAGS} <file_name.cpp> -o <obj_name.cpp>
 * Character Count: g++ -std=c++20 -E <file_name.cpp> |wc -c (bytes)
 * Executing Time Command: time g++ -std=c++20 {FLAGS} <file_name.cpp> -o <obj_name.cpp>
 * 
 * Precompile Header to Module: g++ -std=c++20 -fmodules-ts -xc++-system-header <header_name>
 * {FLAGS} https://caiorss.github.io/C-Cpp-Notes/compiler-flags-options.html
 * -fmodules-ts for CPP20 modules
 */
