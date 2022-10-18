#!/bin/bash
#
# has_package.sh: checks if package has legal name, or is contained in java file
#
# Usage: has_package.sh java-file package-name
chmod u+x *sh
file=$1
package=$2
first_char=${package:0:1}
if [ $# -eq 0 ]; then
    echo "Usage: has_package.sh java-file package-name" >&2
    exit 1
elif [ $# -ne 2 ]; then
    echo "Error: Must be two arguments" >&2
    exit 1
else
    if [[ $first_char == [a-z] ]]; then
        if grep -w "$package" $file; then
            echo "Package $package is not found in $file"
        else 
            echo "Package $package is not found in $file" <&2
            exit 3
        fi
    else
        echo "$package does not start with lowercase letter" <&2
        exit 2
    fi
fi