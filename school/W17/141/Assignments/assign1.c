// Name: Mohamed Murtadi
// Purpose: CS 60-141 W17
// Assignment 1

#include <stdio.h>
#include <math.h>

int readNum(int position); // function to read a txt file as per assignment instructions
int primeBase(int num); //check if number is divisible by any digit returns digit or self as prime number.
int findPrimeCount(int num, int prime); // finds frequency prime number can divide number inputted or remainder.


int main(void){
	int num, prime, frequency, factNum, i, position = 0;
	// array initialized to store prime number which occur and their frequency in second dimension.
	int storage[9900][2] = {0};
	
	// Prompt user to enter a number greater than 1
	do {

		// passes in "position" in order to keep track of which factorial number to be used in calculations below
		factNum = readNum(position);
<<<<<<< HEAD
		printf("%-3d! = ", factNum);
=======

		// formatting as per assignment instructions.
		printf("%3d! =  ", factNum);
>>>>>>> 17c57fb9959194460bbdec35df633bfcecf421aa

		position++;
			// printf("\n%d\n", position );

		if (factNum > 1){
			do {

				// converts factorial number to a manageable number by OS.
				// ie. 99*100, 98*97, 96*95
				num = factNum-1;
				num = num*factNum;

				// condition to stop at 0
				while (num > 1){
					prime = primeBase(num);
					frequency = findPrimeCount(num, prime);

					// stores prime number at position "prime"
					// and stores frequency of that prime number for print out later.
					storage[prime][0] = prime;
					storage[prime][1] += frequency;
					// store prime number frequency
					// printf("x(%d^%d)", prime, frequency);
					num /= pow(prime, frequency);		
				}
				factNum -= 2;		
			} while (factNum > 1);

			// Formatting for print to abide by requirements in the assignments.
			int j=0;
			int counter = 0;
			do {
				if ((storage[j][0]) > 0 && counter == 0){
					printf("(%d^%d)*", storage[j][0], storage[j][1]);
					counter++;					
				}					
				else if ((storage[j][0]) > 0 && counter == 1){
					printf("(%d^%d)", storage[j][0], storage[j][1]);
					counter++;					
				}

				else if ((storage[j][0]) > 0 && counter < 9){
					printf("*(%d^%d)", storage[j][0], storage[j][1]);
					counter++;					
				}				
				else if ((storage[j][0]) > 0){
					printf("\n\t*(%d^%d)", storage[j][0], storage[j][1]);
					counter = 1;					
				}				
				j++;
			} while (j < 9900);

			// array reset.
			for (int i = 0; i<=9900; i++){
				storage[i][1] = 0;
				storage[i][0] = 0;
			}

			
		}
		printf("\n\n");
		// condition to stop after three numbers printed
	} while (position < 3 );

	return 0;
}

// Objective: reads .txt file and stores numbers in an array.
// Input: position of array in order to cycle through numbers from text file
// Output: Number read from a text file
int readNum(int position){
	// printf("begining of readNum funciton:%d\n", position );

	int inputStorage[4] = {0};
	FILE* inputFile = fopen("input.txt", "r");
	fscanf(inputFile, "%d%d%d%d", &inputStorage[0], &inputStorage[1], &inputStorage[2], &inputStorage[3]);
	fclose(inputFile);
	// printf("\nBefore return in read num function: %d\n", position );

	return inputStorage[position];
}

// Objective: Checks if N is divisible by any digit returns digit or identifies self(N) as prime number.
// Input: real number
// Output: prime number
int primeBase(int num){
	for (int i=2; i < num; i++) {
		if (num%i == 0){
			return i;
		}
	}
return num;
}

// Objective: finds frequency prime number can be divided by prime number.
// Input: number and prime number to be used for calculation.
// Output: frequency number is divisible by prime number
int findPrimeCount(int num, int prime){
	int primeFreq = 0;
	while (num%prime == 0){
		primeFreq+=1;
		num /= prime;
	}
	return primeFreq;
}

