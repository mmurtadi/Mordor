// Name: Mohamed Murtadi
// Purpose: CS 60-140 Fall2016
// Assignment 5 Question 4
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int gcdCalc(int num1, int num2);


int main(){
	int gcd;
	srand(time(NULL));
	int num1 = rand() % 100 + 1;
	int num2 = rand() % 100 + 1;
	printf("The GCD of %d and %d is: ", num1, num2);
	gcd = gcdCalc(num1,num2);
	printf("%d\n", gcd);

	return 0;
}

int gcdCalc(int num1, int num2){
	if (num2 == 0) {
		return num1;
	} 
	else {
		return gcdCalc(num2, (num1%num2));
	}
}
