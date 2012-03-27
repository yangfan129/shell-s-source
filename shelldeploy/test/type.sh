#!/bin/bash

#declare -i ipsnum

while read NAME TYPE
do
    if [ "$NAME" == "" ] || [ "`echo $NAME$TYPE| grep '#'`" != "" ] ;then
        continue
    else
        eval `echo "${NAME}=${TYPE}"`
    fi
done < conf.ini



