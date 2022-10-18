#!/bin/bash
chmod u+x *sh
specifile=$1
if [ $# -eq 0 ]; then
    echo "Usage: check_files.sh specfile" >&2
    exit 1
elif [ $# -gt 1 ]; then 
    echo "Error: only one command line argument accepted" >&2
    exit 1
else 
    if [[ ! -f $specifile ]];then 
        echo "Error: specifile does not exist in current directory" >&2
        exit 2
    else
        i=0
        grep -v '^#' < /~/bin/A3 | { while read line; do
            if [ ! -f $line ];then
                echo "$line missing" >&2
                i=$((i+1))
            fi
        done < "$FILE"; }
        if [ $i -gt 0 ]; then 
                exit 3
        fi
    fi
fi  