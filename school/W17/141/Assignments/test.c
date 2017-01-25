// Name: Mohamed Murtadi
// Purpose: CS 60-141 W17
// Assignment 1


#include <stdio.h>
#include <math.h>

// REMINDER MUST COMPILE USING "-lm" TO USE MATH LIBRARY


int readNum(); // function to read a valid number enterered by the user
int primeBase(int num); //check if number is divisible by any digit returns digit or self as prime number.
int findPrimeCount(int num, int prime); // finds frequency prime number can divide number inputted or remainder.


int main(void){
	int num, prime, frequency, factNum, i;
	int storage[9900][2] = {0};
	
	// Prompt user to enter a number greater than 1

	factNum = readNum();
	printf("%d! = ", factNum);

	do {
		num = factNum-1;
		num = num*factNum;

		while (num > 1){
			prime = primeBase(num);
			frequency = findPrimeCount(num, prime);
			storage[prime][0] = prime;
			storage[prime][1] += frequency;
			// store prime number frequency
			// printf("x(%d^%d)", prime, frequency);
			num /= pow(prime, frequency);		
		}
		factNum -= 2;		
	} while (factNum > 2);


	for (int j=0; j<9900; j++){
		if ((storage[j][0]) > 0){
			printf("*(%d^%d)", storage[j][0], storage[j][1]);
		}
	}



	// Styling as requested in the lab instructions.
	return 0;
}

// function to read a valid number enterered by the user
int readNum(){
	int num;
	do {
		printf("Enter a valid number (>1): \t" );
		scanf("%d", &num);
		if (num < 2 ){
			printf("number has to be greater than 1\nPlease try again!: \n");
		}

	} while (num < 2);

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
