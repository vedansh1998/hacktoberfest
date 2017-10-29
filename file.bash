#!/bin/bash
echo Enter input:
read input
x=1
n=`find *.txt | wc -l`
for ((i=1;i<=$n;i++)) 
do
a=`find *.txt | head -$i | tail -1`
p=`sed -n "/$input/p" $a | wc -l`
echo " `sed -n "/$input/p" $a | wc -l` lines in $a "
#echo $w lines in $a
if [ p > 0 ]
then x=0
fi
done
if [ x == 0 ]
then
	exit 0
else
	exit 1
fi
