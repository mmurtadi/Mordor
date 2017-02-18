///////////////////////////////
// Name: Mohamed Murtadi      /
// Purpose: CS 60-141 W17     /
// lab 4 pointers             /
///////////////////////////////

#include <stdio.h>

void *Swap(int *num1, int *num2);
int *Largest(int *array, int size);

int main(void){
	int array[8] = {1,4,6,2,3,4,9,2};
	int num1 = 1, num2 = 2, largest = 0;

	//formatted printing
	printf("\nBEFORE\n\nLargest number should be 9: and is %d\n", largest);
	printf("Number 1 = %d, Number 2 = %d\n\n\n", num1, num2);

	//function calls
	largest = Largest(array, 8);
	Swap(&num1, &num2);

	//formatted printing
	printf("AFTER SWAP AND SEARCH\n\nLargest number should be 6: and is %d\n", largest);
	printf("Number 1 = %d, Number 2 = %d\n\n", num1, num2);


	return 0;
}


// Objective: swaps values at of two variables without assignment in main. 
// Input: pointer to variable 1, and pointer to variable 2. 
// Output: null, change is only made and not returned.
void *Swap(int *num1, int *num2){
	int temp = *num1;
	*num1 = *num2;
	*num2 = temp;

	return 0;
}

// Objective: finds largest value of an array and prints in main. 
// Input: size of array and array pointer. 
// Output: returns value of largest.
int *Largest(int *array, int size){
	int largest = array[0];
	for (int i = 0; i < size; i++){
		if (array[i] > largest){
			largest = array[i];
		}
	} 
	return largest;
}