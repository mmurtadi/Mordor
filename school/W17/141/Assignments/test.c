// Name: Mohamed Murtadi
// Purpose: CS 60-141 W17
// Assignment 1


#include <stdio.h>
#include <math.h>
#include <fcntl.h>

// REMINDER MUST COMPILE USING "-lm" TO USE MATH LIBRARY

int readNum(); // function to read a valid number enterered by the user
int primeBase(int num); //check if number is divisible by any digit returns digit or self as prime number.
int findPrimeCount(int num, int prime); // finds frequency prime number can divide number inputted or remainder.


int main(void){
	int num, prime, frequency, factNum, i;
	int storage[9900][2] = {0};
	
	// Prompt user to enter a number greater than 1

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


	printf("\n");
	// Styling as requested in the lab instructions.
	fclose("input.txt");
	return 0;
}

// function to read a valid number enterered by the user
int readNum(){
	int num, fopen;
	fopen = open("input.txt", O_WRONLY | O_CREAT | O_TRUNC, 0755);
	fscanf(fp, "%s %s %s %d", str1, str2, str3, &year);


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

