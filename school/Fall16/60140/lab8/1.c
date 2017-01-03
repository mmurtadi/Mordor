#include <stdio.h>
#include <math.h>

// REMINDER MUST COMPILE USING "-lm" TO USE MATH LIBRARY


int readNum(); // function to read a valid number enterered by the user
int primeBase(int num); //check if number is divisible by any digit returns digit or self as prime number.
int findPrimeCount(int num, int prime); // finds frequency prime number can divide number inputted or remainder.


int main(void){
	int num, prime, frequency;
	
	// Prompt user to enter a number greater than 1
	num = readNum();

	//styling as requested in the lab instructions.
	printf("%d = 1", num); 

	// Main loop checking for prime number in input
	// dividing that number by (prime^frequency)
	// when num = 1, we have divided the remainder by itself and loop ends
	while (num > 1) {
		prime = primeBase(num);
		frequency = findPrimeCount(num, prime);
		printf("x(%d^%d)", prime, frequency);
		num /= pow(prime, frequency);
		
	}

	// Styling as requested in the lab instructions.
	printf("\n");

	return 0;
}

// function to read a valid number enterered by the user
int readNum(){
	int num;
	do {
		printf("Enter a valid number (>1): \t" );
		scanf("%d", &num);
		if (num <= 1){
			printf("number has to be greater than 1\nPlease try again!: \n");
		}

	} while (num<=1);

	return num;
}

//check if number is divisible by any digit returns digit or self as prime number.
int primeBase(int num){
	for (int i=2; i < num; i++) {
		if (num%i == 0){
			return i;
		}
	}
return num;
}

// finds frequency prime number can divide number inputted or remainder.
int findPrimeCount(int num, int prime){
	int primeFreq = 0;
	while (num%prime == 0){
		primeFreq+=1;
		num /= prime;
	}
	return primeFreq;
}

