///////////////////////////////
// Name: Mohamed Murtadi      /
// Purpose: CS 60-141 W17     /
// lab 4 pointers             /
///////////////////////////////

#include <stdio.h>

void *Swap(int *num1, int *num2){
	int temp = *num1;
	*num1 = *num2;
	*num2 = temp;

	return 0;
}