#!/bin/sh


index=1
nsample=700

sort -ns +0 -1 output |grep '^01' |grep -v ' 5... '|cut -d ' ' -f3 | head -"$nsample" > f1 
sort -ns +0 -1 output |grep '^02' |grep -v ' 5... '|cut -d ' ' -f3 | head -"$nsample" > f2
sort -ns +0 -1 output |grep '^03' |grep -v ' 5... '|cut -d ' ' -f3 | head -"$nsample" > f3

rm -f output.txt

while test "$index" -le "$nsample"
do 
   r1=`sed -n -e "$index"p f1`
   r2=`sed -n -e "$index"p f2`
   r3=`sed -n -e "$index"p f3`
   echo $r1 $r2 $r3 >> output.txt
   index=$(( $index + 1))
done

java MagicFilter
