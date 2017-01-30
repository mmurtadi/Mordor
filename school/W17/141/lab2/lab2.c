///////////////////////////////
// Name: Mohamed Murtadi      /
// Purpose: CS 60-141 W17     /
// lab 2 practicing recursion /
///////////////////////////////

#include <stdio.h>
#include <stdbool.h>

int summation(int num); // runs iterative summation of numbers up to n
int factorial(int num); // Finds factorial up to that number bound by cpu bit
int fibonacci(int num); // Enter a number and finds nth fibonacci
int gcd(int num1, int num2); //  Finds greatest common diviser of two numbers.
int powerCalc(int num1, int num2); // Takes two numbers base number and power, then calculates n.

int main(void)

{	// UI for user to select an option or "0" to exit
	int option;
	do {
		printf("Please choose one of the following options:\n1. Summation:\n2. Factorial\n3. Fibonacci\n4. Greatest common denominator:\n5. Power of a number:\n0. EXIT\nEnter Your selection here: ");
		scanf("%d", &option);

		// Option 1: Summation function
		if (option == 1) {
			int num = 0;
			// prompts user to enter a valid number
			printf("Enter a number to find its iterative sum: \n");
			scanf("%d", &num);
			printf("\nIterative sum: %d\n\n\n", summation(num));
			
		} 
		else if (option == 2) {
			int num = 0;
			do {
				// prompts user to enter a valid number
				printf("Enter a number to find its factorial sum (greater than 0): \n");
				scanf("%d", &num);
			} while (num <= 0);			
			printf("\nFactorial Number: %d\n\n\n", factorial(num));			
		}
		else if (option == 3) {
			int num = 0;
			do {
				// prompts user to enter a valid number
				printf("Enter a number to find its fibonacci numbers (greater than 0): \n\n\n");
				scanf("%d", &num);
			} while (num < 0);
			printf("\nFibonacci number is %d\n\n\n", fibonacci(num));				
		}
		else if (option == 4) {
			int num1, num2;
			do {
				// prompts user to enter a valid number
				printf("\nEnter your first number (greater than 0): \n");
				scanf("%d", &num1);	
			} while (num1 <= 0);
			do {
				// prompts user to enter a valid number
				printf("\nEnter your second number (greater than 0): \n");
				scanf("%d", &num2);	
			} while (num2 <= 0);

			printf("\nGCD is: %d \n\n\n", gcd(num1, num2));
		}
		else if (option == 5) {
			int num1, num2;
			bool try = 0;
;
			do {
				if (try){
					printf("\nWelp, there was an error, Try using numbers greater than Zero!\n");
					printf("\nEnter your Base number: \n");
					scanf("%d", &num1);
					printf("\nEnter your Exponant: \n");
					scanf("%d", &num2);			
				}
				else{
				// prompts user to enter a valid number
				printf("\nEnter your Base number: \n");
				scanf("%d", &num1);
				// prompts user to enter a valid number
				printf("\nEnter your Exponant: \n");
				scanf("%d", &num2);
				try = 1;			
				}
			
			} while (num1 <= 0 || num2 <=0);			
			printf("\nAnswer = %d\n\n\n", powerCalc(num1, num2));
		}

	} while (option !=0);

	printf("Have a Great day!\n");
    
	return 0;
}

// Objective: Runs iterative summation of numbers up to n
// Input: number entered by the user 
// Output: Summation of numbers up to N
int summation(int num){
	
	if (num <= 1){
		return 1;
	}
	return num + summation(num-1);
} 
// Objective: Finds factorial up to that number bound by cpu bit
// Input: number entered by the user 
// Output: factorial calculation of number.
int factorial(int num){

	if (num <= 1){
		return 1;
	}
	else{
		return num * factorial(num-1);
	}

} 
// Objective: Enter a number and finds nth fibonacci
// Input: number entered by the user 
// Output: the nth fibonacci number
int fibonacci(int num){
	if (num == 0){
		return 0;
	}
	else if (num == 1) {
		return 1;
	}
	return fibonacci(num-1) + fibonacci(num-2);
} 

// Objective: Finds greatest common diviser of two numbers.
// Input: 2 numbers entered by the user 
// Output: Greatest common diviser.

int gcd(int num1, int num2){
	if (num2 != 0){
		return gcd(num2, num1%num2);
	}
	else{
		return num1;
	}
}

// Objective: Takes two numbers base number and power, then calculates number and prints to user.
// Input: 2 valid numbers entered by the user 
// Output: number 1 to the power of number 2
int powerCalc(int num1, int num2){
	if (num2 != 1){
		return (num1*powerCalc(num1, num2-1));
	}
	return 1;
}
