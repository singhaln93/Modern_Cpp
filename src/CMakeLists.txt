# Copyright © 2023 Neeraj Singhal
# All rights reserved

project(src)

add_executable(${PROJECT_NAME} main.cpp)
target_link_libraries(${PROJECT_NAME} PRIVATE lib)