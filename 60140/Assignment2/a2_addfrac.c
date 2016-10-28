// Name: Mohamed Murtadi
// Purpose: CS 60-140 Fall2016
// Assignment 2 Question 1

#include <stdio.h>


int main(void)
{
	int num1, denom1, num2, denom2, result_num, result_denom;

	// Ask user to enter fractions in format NN/NN+NN/NN
	printf("Enter two fractions separated by a plus sign ");
	scanf("%d/%d+%d/%d", &num1, &denom1, &num2, &denom2);

	// Division of inputted fractions
	result_num = num1 * denom2 + num2 * denom1;
	result_denom = denom1 * denom2;

	// Print results
	printf("the sum is %d/%d\n", result_num, result_denom);

	return 0;
}