#!/bin/bash

function float_eval()
{
    local stat=0
    local result=0.0
    if [[ $# -gt 0 ]]; then
        result=$(echo "scale=$float_scale; $*" | bc -q 2>/dev/null)
        stat=$?
        if [[ $stat -eq 0  &&  -z "$result" ]]; then stat=1; fi
    fi
    echo $result
    return $stat
}


#####################################################################
# Evaluate a floating point number conditional expression.

function float_cond()
{
    local cond=0
    if [[ $# -gt 0 ]]; then
        cond=$(echo "$*" | bc -q 2>/dev/null)
        if [[ -z "$cond" ]]; then cond=0; fi
        if [[ "$cond" != 0  &&  "$cond" != 1 ]]; then cond=0; fi
    fi
    local stat=$((cond == 0))
    return $stat
}
file="$1"
biases=`grep "indir-branch" $file | grep taken | awk  '{ print $11}' | awk -F'(' '{print $2}'   | egrep '[-+]?([0-9]*\.[0-9]+|[0-9]+)' -o`
#echo "$bias"
takens=`grep "indir-branch" $file  | awk '{ print $5}'`
total=`grep indir-branch $file | awk '{ sum+=$5} END {print sum}'`
#echo "takens: $takens"
#echo "total: $total"
i=0
declare -a bs=()
for b in $biases; do
   #echo "b: $b";
   bs[$i]=$b; 
   #echo "bs[$i]: ${bs[${i}]}"
   i=$((i+1));
done

ii=0
declare -a tks=()
for b in $takens; do
   #echo "b: $b";
   tks[$ii]=$b;
   #echo "tks[$ii]: ${tks[${ii}]}"
   ii=$((ii+1));
done

avg=0
for (( i=0; i<${ii}; i++ ))
do
   a0="${tks[${i}]}.0"
   t0="$total.0"
   b0=${bs[${i}]}
   vv=$(echo "scale=20; $a0 / $t0" | bc)
   v2=$(echo "scale=20; $vv * $b0" | bc) 
   avg=$(echo "scale=20; $v2 + $avg" | bc)   
done

echo "avg: $avg"

