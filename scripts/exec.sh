# Copyright © 2021  Neeraj Singhal
# All rights reserved

#!/bin/bash
### START ###
cd ..
CMAKE_VERSION=$(cmake --version)
echo -e $CMAKE_VERSION
mkdir -p build && cd build &&
    cmake .. && make
#clear
echo "Test Results..."
./tests
echo "Output..."
./Mordern_Cpp
### END ###
