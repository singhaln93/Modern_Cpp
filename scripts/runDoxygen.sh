# Copyright © 2021  Neeraj Singhal
# All rights reserved

#!/bin/bash
### START ###
DOXYGEN_VERSION=$(doxygen --version)
echo -e "Doxygen:"  $DOXYGEN_VERSION
cd ..
doxygen scripts/Doxygen/doxyfile.conf
### END ###