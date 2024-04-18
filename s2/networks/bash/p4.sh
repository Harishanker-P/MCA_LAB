#!/bin/bash
sum=0
i=0
while(($i -ge 10))
do 
    ((sum = sum + i))
    i=$i+1
done
echo $sum