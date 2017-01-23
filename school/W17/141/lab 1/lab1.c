// Name: Mohamed Murtadi
// Purpose: CS 60-141 W17
// lab 1

#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int summation(int x); // runs iterative summation of numbers up to n
int factorial(int num); // Finds factorial up to that number bound by cpu bit
int fibonacci(int x); // Enter a number and finds nth fibonacci
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
			int num;
			// prompts user to enter a valid number
			printf("Enter a number to find its iterative sum: \n");
			scanf("%d", &num);
			summation(num);
		} 
		else if (option == 2) {
			int num;
			do {
				// prompts user to enter a valid number
				printf("Enter a number to find its factorial sum (greater than 0): \n");
				scanf("%d", &num);
			} while (num <= 0);			
			factorial(num);			
		}
		else if (option == 3) {
			int x;
			do {
				// prompts user to enter a valid number
				printf("Enter a number to find its fibonacci numbers (greater than 0): \n\n\n");
				scanf("%d", &x);
			} while (x <=0);

			fibonacci(x);
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

			gcd(num1, num2);
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
			powerCalc(num1, num2);
		}

	} while (option !=0);

	printf("Have a Great day!\n");
    
	return 0;
}

// Objective: Runs iterative summation of numbers up to n
// Input: number entered by the user 
// Output: Summation of numbers up to N
int summation(int num){
	int x = 0;
	for (int i = 0; i <= num; i++){
		x += i;
	}
	printf("Iterative sum: %d\n\n\n", x);

	return 0;

} 
// Objective: Finds factorial up to that number bound by cpu bit
// Input: number entered by the user 
// Output: factorial calculation of number.
int factorial(int num){
	int x = 1;
	
	for (; num > 1; num--){
		 x *= num;
	}
	printf("\nFactorial of your number is: %d\n\n\n", x);

	return 0;

} 
// Objective: Enter a number and finds nth fibonacci
// Input: number entered by the user 
// Output: the nth fibonacci number
int fibonacci(int x){
	int num1=0;
	int num2 = 1;
	int nextNum;
	int count;


	if (x == 0){
		printf("\nFibonacci number is 0\n");
	}
	else if (x == 1) {
		printf("\nFibonacci number is 1\n");
	}
	else {
		for (count = 1; count < x; count++){
			if (count < 1){
				nextNum = count;
			}
			else {
				nextNum = num1 + num2;
				num1 = num2;
				num2 = nextNum;
			}
		}
		printf("\nFibonacci number is %d\n\n\n", nextNum);				
		
	}

	return 0;

} 

// Objective: Finds greatest common diviser of two numbers.
// Input: 2 numbers entered by the user 
// Output: Greatest common diviser.

int gcd(int num1, int num2){
	int less, x;

		//sort num1 = big, num2 = small
	if (num1 < num2){
		x = num1;
		num1 = num2;
		num2 = x;
		x=0;
	}
	less = num2;	

	if (num1%num2 == 0){
		printf("\nGCD is %d\n", num2);
	}
	else {

		for (; less >=2; less--){
			if ((num1%less == 0) && (num2%less == 0)){
				printf("\nGCD is %d\n", less);
				return 0;
			}
		}
		printf("\nGCD is 1, both numbers are prime numbers\n\n\n");
	}

	return 0;

}



// Objective: Takes two numbers base number and power, then calculates number and prints to user.
// Input: 2 valid numbers entered by the user 
// Output: number 1 to the power of number 2
int powerCalc(int num1, int num2){
	int x, sum;

	for (int i = 1; i< num2; i++){
		x = (num1*num1);
		sum += x;
	}
	printf("\nAnswer is: %d \n", sum);


	return 0;
} 