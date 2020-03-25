#!/bin/bash

bytes=$(git log | wc -c)
bytes_obtained=$(git log -n 1 | wc -c)
n=1

while [ $bytes_obtained -lt $bytes ]
do
    n=$(( $n + 1 ))
    bytes_obtained=$(git log -n $n | wc -c)
done

echo "$n"
