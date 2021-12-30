# Copyright © 2021  Neeraj Singhal
# All rights reserved

#!/bin/bash
function stripStartAndEndQuotes {
  temp="${1%\"}"
  temp="${temp#\"}"
  echo "$temp"
}

function getSubmoduleNames {
  line=$1
  len=${#line} # Get line length
  stripStartAndEndQuotes "${line}" #::len-1}" # Remove last character(optional)
}

while read line; do
  getSubmoduleNames "$line"
#hashNumber=(git submodule status|cut -d ' ' -f 1-2)
#submoduleName=$(git submodule status|cut -d ' ' -f 3-4)
#url=$(cat .gitmodules|grep "url"|cut -d ' ' -f 3-4)
done< <(echo "$(git submodule status|cut -d ' ' -f 3-4)" "$(cat ../.gitmodules|grep "url"|cut -d ' ' -f 3-4)")
