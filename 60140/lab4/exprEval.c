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
	

 // Addition
	if (op == '+') { 
		result = num1+num2;
		printf("Answer is: %.2f\n", result);
	}

 // Check for 0 operator, divide 2 numbers
	else if (op == '/') { 
		if (num2 == 0) 
			printf("0 is undefined, please try again\n");
		else
			result = num1/num2;
			printf("Answer is:%.2f\n", result);
	}

 // Multiplication
	else if (op == '*'){
		result = num1*num2;
		printf("Answer is: %.2f\n", result);
	}

 // Subtraction
	else if (op == '-'){ 
		result = num1-num2;
		printf("Answer is: %.2f\n", result);
	}
	
 // Check for unknown input
	else  {
		printf("Unknown operator!\n");
	}
	

	return 0;
}