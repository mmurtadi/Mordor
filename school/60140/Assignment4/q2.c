// Name: Mohamed Murtadi
// Purpose: CS 60-140 Fall2016
// Assignment 4 Question 2

#include <stdio.h>


int main(void)
{
	int num1, denom1, num2, denom2, result_num, result_denom;
	char op;

	// Ask user to enter fractions in format NN/NN+NN/NN
	printf("Enter two fraction calculation: \t");
	scanf("%d/%d%c%d/%d", &num1, &denom1, &op, &num2, &denom2);

 // Addition
	if (op == '+') { 
		result_denom = denom1*denom2;
		result_num = num1*denom2 +  num2*denom1;
		printf("Answer is: %d//%d \n", result_num, result_denom);
	}

 // Check for 0 operator, divide 2 numbers
	else if (op == '/') { 
		if (denom1 == 0 || denom2 == 0 && num2 == 0) 
			printf("0 is undefined, please try again\n");
		else {
			result_num = num1*denom2;
			result_denom = denom1*num2;
			printf("Answer is: %d//%d \n", result_num, result_denom);
		}
	}
 // Multiplication
	else if (op == '*'){
		result_num = num1*num2;
		result_denom = denom1*denom2;
		printf("Answer is: %d//%d \n", result_num, result_denom);	
	}

 // Subtraction
	else if (op == '-'){ 
		result_denom = denom1*denom2;
		result_num = num1*denom2 - num2*denom1;
		printf("Answer is: %d//%d \n", result_num, result_denom);	
	}
	
 // Check for unknown input
	else  {
		printf("Unknown operator!\n");
	}
	

	// Print results
	printf("the sum is %d/%d\n", result_num, result_denom);

	return 0;
}