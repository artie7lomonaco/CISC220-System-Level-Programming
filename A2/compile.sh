#!/bin/bash
chmod u+x *sh
file=$1
if [ $# -gt 1 ]; then
    echo "Error: Too many files" >&2
    exit 1
elif [ $# -eq 0 ]; then 
        sh fake_javac.sh ${file}
else 
    if [ ! -f "$file" ]; then
        echo "Error: $file does not exist in directory" >&2
        exit 2
    else
        sh fake_javac.sh ${file}
        if [ $? -ne 0 ]; then
            echo "Error: $file did not compile succesfully" >&2
            exit 3
        else
            echo "$file Compiled Successfully"
        fi
    fi
fi
