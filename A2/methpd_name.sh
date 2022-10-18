#!/bin/bash
chmod u+x sh

file=$1
if [ $# != 1 ]; then
    echo >&2 "Error: Wrong number of command line arguments"
    exit 1
fi
if grep -qE 'public.static.*void' ${file}; then
    grep -oP '(?<=public static void )\w+' ${file}
    grep -oP '(?<=public  static  void  )\w+' ${file}
else
    echo
fi