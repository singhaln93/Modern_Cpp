# Copyright © 2021  Neeraj Singhal
# All rights reserved

#!/bin/bash
ninja_supported=$(cmake --help | grep Ninja)

if [ -z $ninja_supported ]; then
    echo "Ninja not supported"
    exit
fi

mkdir -p build.ninja && cd build.ninja &&
    cmake .. -G Ninja && ninja
clear
./Mordern_Cpp
