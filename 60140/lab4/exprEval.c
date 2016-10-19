// Name: Mohamed Murtadi
// Purpose: CS 60-140 Fall2016
// Lab 4

#include <stdio.h>


int main(void)
{
	float num1;
	float num2;
	char op;
	float result;

	printf("Enter the your equation: ");
	scanf("%f%c%f", &num1, &op, &num2);
	

	if (num2 == 0) 
		printf("0 is undefined, please try again\n");
	else 
		if (op == '+')
			result = num1+num2;
		else if (op == '/')
			result = num1/num2;
		else if (op == '*'){
			result = num1*num2;
			printf("Answer!!! pew pew... Daily Double!...\njk, answer is %.2f\n", result);
		}

	return 0;
}