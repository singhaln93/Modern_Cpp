# Copyright © 2021  Neeraj Singhal
# All rights reserved

#!/bin/bash
### START ###
# Get the path to the current folder
SCRIPT_DIR=$(dirname $0)
# SRC_DIR is the directory containing the .gcno files (%{buildDir} in Qt Creator)
SRC_DIR="$SCRIPT_DIR/../build/"
# COV_DIR is the directory where the coverage results will be stored
COV_DIR="$SCRIPT_DIR/../docs"

# Path where the HTML files should be saved
HTML_RESULTS="${COV_DIR}""/gcov-html"
# Create the html folder if it does not exist
mkdir -p ${HTML_RESULTS}
# Generate our initial info
lcov -d "${SRC_DIR}" -c -o "${COV_DIR}/coverage.info"
# Remove some paths/files which we don't want to calculate the code coverage (e.g. third party libraries) and generate a new coverage file filtered (feel free to edit it when necessary)
lcov -r "${COV_DIR}/coverage.info" "*.h" "*/tests/*" "*Xcode.app*" "*.moc" "*moc_*.cpp" "*/test/*" "*/build*/*" "*/c++/*" -o "${COV_DIR}/coverage-filtered.info"
# Generate the HTML files
genhtml -o "${HTML_RESULTS}" "${COV_DIR}/coverage-filtered.info" -s
# Reset our counts
lcov -d "${COV_DIR}" -z
 
# Open the index.html
open "${HTML_RESULTS}/index.html"
### END ###