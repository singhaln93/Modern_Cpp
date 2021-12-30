# Copyright © 2021  Neeraj Singhal
# All rights reserved

#!/bin/bash
cd ..
mkdir -p build && cd build &&
    cmake .. && make
clear
echo "Test Results..."
./tests
echo "Output..."
./Mordern_Cpp