///////////////////////////////
// Name: Mohamed Murtadi      /
// Purpose: CS 60-141 W17     /
// lab 4 pointers             /
///////////////////////////////

#include <stdio.h>

int *Largest(int *array, int size);

int *Largest(int *array, int size){
	int largest = array[0];
	for (int i = 0; i < size; i++){
		if (array[i] > largest){
			largest = array[i];
		}
	} 
	return largest;
}