// Name: Mohamed Murtadi
// Purpose: CS 60-140 Fall2016
// Assignment 2 Question 1

#include <stdio.h>


int main(void)
{
	int num1, denom1, num2, denom2, result_num, result_denom;

	char dead; // variable to grab "+" from users input

	printf("Enter two fractions separated by a plus sign ");
	scanf("%1d/%1d %c %1d/%1d", &num1, &denom1, &dead, &num2, &denom2);

	// Division of inputted integers

	result_num = num1 * denom2 + num2 * denom1;
	result_denom = denom1 * denom2;

	printf("the sum is %d/%d\n", result_num, result_denom);

	return 0;
}