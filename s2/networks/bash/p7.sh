#!/bin/bash
select i in add sub mul quit
do 
    case $i in 
        "add") echo $(($1+$2));;
        "sub") echo $(($1-$2)) ;;
        "mul") echo $(($1*$2)) ;;
        *) echo "invalid option"
    
    esac
done
