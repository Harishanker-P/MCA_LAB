#!/bin/bash
read -p "enter the number: " n
if (($n > 12))
then 
    echo "greater"
elif (($n <12))
then 
    echo "lesser"
else 
    echo "equal"
fi
