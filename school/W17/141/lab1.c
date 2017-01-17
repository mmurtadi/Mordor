// Name: Mohamed Murtadi
// Purpose: CS 60-141 W17
// lab 1
#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int summation(); 
int factorial(); 
int fibonacci(); 
int gcd(); 
int powerCalc(); 

int main(void)

{
	int option;
	do {
		printf("Please choose one of the following options:\n1. Summation:\n2. Factorial\n3. Fibonacci\n4. Greatest common denominator:\n5. Power of a number:\n0. EXIT\nEnter Your selection here: ");
		scanf("%d", &option);

		if (option == 1) {
			summation();
		} 
		else if (option == 2) {
			factorial();			
		}
		else if (option == 3) {
			fibonacci();
		}
		else if (option == 4) {
			gcd();
		}
		else if (option == 5) {
			powerCalc();
		}

	} while (option !=0);

	printf("Have a Great day!\n");
    
	return 0;
}

int summation(){
	int x, num;
	
	printf("Enter a number to find its iterative sum: \n");
	scanf("%d", &num);
	
	for (int i = 0; i <= num; i++){
		x += i;
	}
	printf("Iterative sum: %d\n\n\n", x);

	return 0;

} 
int factorial(){
	int x = 1;
	int num;
	
	do {
		printf("Enter a number to find its factorial sum (greater than 0): \n");
		scanf("%d", &num);
	} while (num <= 0);
	
	for (; num > 1; num--){
		 x *= num;
	}
	printf("\nFactorial of your number is: %d\n\n\n", x);

	return 0;

} 
int fibonacci(){
	int x;
	int num1=0;
	int num2 = 1;
	int nextNum;
	int count;
	
	do {
		printf("Enter a number to find its fibonacci numbers (greater than 0): \n\n\n");
		scanf("%d", &x);
	} while (x <=0);


	if (x == 0){
		printf("\nFibonacci number is 0\n");
	}
	else if (x == 1) {
		printf("\nFibonacci number is 1\n");
	}
	else {
		for (count = 0; count < x; count++){
			if (count <=1){
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

int gcd(){
	int num1, num2, less, x;
	do {
		printf("\nEnter your first number (greater than 0): \n");
		scanf("%d", &num1);	
	} while (num1 <= 0);
	do {
		printf("\nEnter your second number (greater than 0): \n");
		scanf("%d", &num2);	
	} while (num2 <= 0);
		//sort num1 = big, num2 = small
	if (num1 < num2){
		x = num1;
		num1 = num2;
		num2 = x;
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

int powerCalc(){
	int num1, num2, x; 
	bool try;
	do {
		if (try){
			printf("\nWelp, there was an error, Try using numbers greater than Zero!\n");
		}
		else{
		printf("\nEnter your Base number: \n");
		scanf("%d", &num1);
		printf("\nEnter your Exponant: \n");
		scanf("%d", &num2);
		try = 1;			
		}
	
	} while (num1 <= 0 || num2 <=1);

	x = pow(num1,num2);
	printf("\nAnswer is: %d \n", x);


	return 0;
} 