// Name: Mohamed Murtadi
// Purpose: CS 60-140 Fall2016
// Assignment 2 Question 6

#include <stdio.h>


int main(void)
{
	int num1, num2, num3, num4;

	// Enter 4 seperate integers
	printf("Enter four integers seperated by a space: ");
	scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

	// Assigning largest and smallest to num1 to save if statements
	int large = num1;
	int small = num1;

	// Checking each input to see if they are larger or smaller than
	// (large) and (small)
	if (num2 > large){
		large = num2;
	}
	if (num3 > large){	
		large = num3;
	}
	if (num4 > large){
		large = num4;
	}
	if (num2 < small){
		small = num2;
	}
	if (num3 < small){
		small = num3;
	}
	if (num4 < small){
		small = num4;
	}

	// Once the checks are complete, prints out largest and smalles integers to user.
	printf("Largest: %d\nSmallest: %d\n", large, small);

	return 0;
}