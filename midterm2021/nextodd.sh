num=$1
if [ $((num % 2)) -eq 0 ]; then
    echo "./nextodd.sh $num"
    echo $((num + 1))
else
    echo "./nextodd.sh $num"
    echo $((num + 2))
fi