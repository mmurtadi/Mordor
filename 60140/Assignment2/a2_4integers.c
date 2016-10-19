// Name: Mohamed Murtadi
// Purpose: CS 60-140 Fall2016
// Assignment 2 Question 6

#include <stdio.h>


int main(void)
{
	int num1, num2, num3, num4;

	int large = 0;
	int small = 10000;

	printf("Enter your 1st digit: ");
	scanf("%d", &num1);
	printf("Enter your 2nd digit: ");
	scanf("%d", &num2);
	printf("Enter your 3rd digit: ");
	scanf("%d", &num3);
	printf("Enter your 4th digit: ");
	scanf("%d", &num4);

	//checking for largest and smallest and placing in variable

	if (num1 > large){
		large = num1;
	}	
	if (num2 > large){
		large = num2;
	}
	if (num3 > large){	
		large = num3;
	}
	if (num4 > large){
		large = num4;
	}
	

	if (num1 < small){
		small = num1;
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
	
	printf("Largest: %d\nSmallest: %d", large, small);

	return 0;
}