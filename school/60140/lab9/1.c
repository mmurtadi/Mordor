#include <stdio.h>


int readNum();
int iterativeTriangularNumber(int number);
int recuriveTriangularNumber(int number);

int main(void){
	int number, triangularNumber;
	number = readNum();
	
	triangularNumber = iterativeTriangularNumber(number);
	printf("Iterative: Triangular number of %d is %d\n", number, triangularNumber);

	triangularNumber = recuriveTriangularNumber(number);
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

int recuriveTriangularNumber(int number){
	if (number > 1){
		return number + recuriveTriangularNumber(number-1);
	}
};