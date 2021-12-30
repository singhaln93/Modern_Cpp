# Copyright © 2021  Neeraj Singhal
# All rights reserved

cmake_minimum_required(VERSION 3.22)
project(Mordern_Cpp)

# Set cmake Cxx standard to 11/14/17/20
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_definitions(-DDEBUG=1)

if (MSVC)
    # warning level 4 and all warnings as errors
    add_compile_options(/W4 /WX)
else()
    # lots of warnings and all warnings as errors
    add_compile_options(-Wall -Wextra -pedantic -Werror)
endif()

add_executable(${PROJECT_NAME} main.cpp)
