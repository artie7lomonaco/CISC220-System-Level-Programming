#!/bin/bash
chmod u+x *sh
className=$1
array=(`echo $className | tr '.' ' '`)
arrLen=$((${#array[@]}-1))
if [ $# -eq 0 ]; then
    echo "Usage: init_compile.sh fully-qualified-classname" >&2
    exit 1
elif [ ! -f ${array[-1]}.java ]; then
    echo "Error: File does not exist in Directory" >&2
    exit 2
else 
    mkdir src
    cd src
    if [ ${#array[@]} -eq 1 ]; then
        cp ${array[-1]}.java ~/bin/A3
    elif [ ${#array[@]} -gt 1 ]; then
        for ((i=0;i<$arrLen;i++)); 
        do 
        mkdir ${array[i]}
        cd ${array[i]}
        done
        cp ${array[-1]}.java ~/bin/A3
    fi 
fi
