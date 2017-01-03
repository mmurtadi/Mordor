// Name: Mohamed Murtadi
// Purpose: CS 60-140 Fall2016
// lab 5

#include <stdio.h>

// Prompt user to enter a number greater than 0
int readNum(); 

// function call to find triangular number using iterative  approach
int iterativeTriangularNumber(int number);

// function call to find triangular number using recursive approach
int recursiveTriangularNumber(int number);


//Main function
int main(void){
	int number, triangularNumber;
	
	number = readNum();
	
	triangularNumber = iterativeTriangularNumber(number);
	printf("Iterative: Triangular number of %d is %d\n", number, triangularNumber);

	triangularNumber = recursiveTriangularNumber(number);
	printf("recurisive: Triangular number of %d is %d\n", number, triangularNumber);
	return 0;
}



int readNum(){
	int n = 0;
	do{
		printf("Enter a number (greater than 0): \n");
		scanf("%d", &n);
	} while (n<1);
	return n;
}

int iterativeTriangularNumber(int number){
	int triangularNumber = 0;
	for (int i = 1; i <= number; i++) {
		triangularNumber += i;
	}
	return triangularNumber;
}

int recursiveTriangularNumber(int number){
	if (number >= 1){
		return number + recursiveTriangularNumber(number-1);
	}
	return 0;
}