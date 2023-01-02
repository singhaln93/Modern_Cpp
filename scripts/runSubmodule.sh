# Copyright © 2023 Neeraj Singhal
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

### START ###
while read line; do
  getSubmoduleNames "$line"
  hashNumber=$(git submodule status|cut -d ' ' -f 1-2)
  submoduleName=$(git submodule status|cut -d ' ' -f 3-4)
  url=$(cat ../.gitmodules|grep "url"|cut -d ' ' -f 3-4)
  echo $submoduleName $url>>../dep/README.md 
done
### END ###
