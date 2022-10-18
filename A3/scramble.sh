#!/bin/bash
chmod u+x *sh
if [ $# -eq 0 ]; then
    exit 0
fi
function to_array {
    i=0
    while [ "$i" -lt "${#str}" ]; do
     arr+=("${str:$i:1}")
     i=$((i+1))
    done
}
function to_string {
    i=0
    newStr=""
    while [ "$i" -lt "${#arr[@]}" ]; do
        newStr+="${arr[i]}"
        i=$((i+1))
        done
    echo $newStr
}
function rand {
    range=${#arr[@]}
    num=$RANDOM
    randInt=$(($num%$range))
}
function shuffle {
    i=0
    while [ "$i" -lt "${#arr[@]}" ]; do
        rand
        current=${arr[$i]}
        arr[$i]=${arr[$randInt]}
        arr[$randInt]=$current
        i=$((i+1))
    done
}
str=$1
arr[0]=""
to_array        # puts the characters of s into arr
shuffle         # shuffles arr
to_string       # makes a string from the elements of arr