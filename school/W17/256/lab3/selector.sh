#!/bin/bash


echo -n "Enter the word to search: " 
read word
echo -n "Enter the word to search: " 
read word2

line1=$(grep -n $word < headandtail | head -n 1 | tail -n 1 | cut -d ":" -f 1)

line2=$(grep -n $word2 < headandtail | head -n 1 | tail -n 1 | cut -d ":" -f 1)

for ((i=$line1; i <= $line2; i++))
	do 
		echo $(head -$i headandtail  | tail -n 1)
	done