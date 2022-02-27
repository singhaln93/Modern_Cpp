# Copyright © 2021  Neeraj Singhal All rights reserved

cmake_minimum_required(VERSION 3.22)
project(Mordern_Cpp)

# Set the compiler options
set(CMAKE_CXX_STANDARD 20) # > Set cmake Cxx standard to 11/14/17/20
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# include_directories("${PROJECT_SOURCE_DIR}/src") file(GLOB_RECURSE LIB_SOURCES
# "src/*.cpp" "src/*/*.cpp" "lib/*.hpp" "lib/*.cpp")
file(GLOB_RECURSE TEST_SOURCES "test/*.cpp")

add_subdirectory(src)
add_subdirectory(lib)
# add_subdirectory(test)

add_library(fibonacci SHARED ${LIB_SOURCES})
install(TARGETS fibonacci DESTINATION lib)

# Find packages- libraries used natively
if(NOT TARGET Git)
  find_package(Git REQUIRED)
endif()
if(NOT TARGET Catch2)
  find_package(Catch2 REQUIRED)
endif()
if(NOT TARGET spdlog)
  find_package(spdlog REQUIRED)
endif()

add_executable(tests ${TEST_SOURCES})
target_link_libraries(tests PRIVATE fibonacci Catch2::Catch2)

include(CTest)
include(Catch)
catch_discover_tests(tests)

# For application
add_definitions(-DDEBUG=1 -DSPDLOG_FMT_EXTERNAL)

if(MSVC)
  # warning level 4 and all warnings as errors
  add_compile_options(/W4 /WX)
else()
  # lots of warnings and all warnings as errors
  add_compile_options(-Wall -Wextra -pedantic -Werror)
endif()

add_executable(${PROJECT_NAME} ${LIB_SOURCES})
target_link_libraries(${PROJECT_NAME} PRIVATE spdlog::spdlog)
