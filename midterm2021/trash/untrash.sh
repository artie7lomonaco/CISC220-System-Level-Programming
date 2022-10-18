deleted=$1
if [ $# -ne 1 ]; then
    echo "wrong number of arguments inputed" >&2
    exit 1
fi
if [ ! -e .trashcan ]; then
    echo "trashcan does not exist in directory" >&2
    exit 2
fi
if [ ! -e ./.trashcan/"$deleted" ]; then
    echo "file or directory does not exist in trashcan" >&2
    exit 3
fi
mv ./.trashcan/$deleted ./
