#include <stdio.h>
#include <stdbool.h>


int readNum();

int findPrimeAndFillArray(int num);

void printHello();


int main(void){
	int num;
	int prime;
	int primeArray[100];
	int primeArrayCounter;
	num = readNum();
	// check printf("%d", num);
	findPrimeAndFillArray(int primeArray, int primeArrayCounter);
	findPrimeCount();
	return 0;
}


int findPrimeAndFillArray(int num){
	int i;
	[if (num == 1){


	} num == 2) return 1;
	for (i = 2; i < num; i++) {
		if (num%i == 0) {
			return 0;
		}
	}
/*
	for (i = 0; i < num; i++){
		for (int j= i+1; i < (num/2); j++) {
			if (primeOptions[i] * primeOptions[j] == num){
				prime = 0;
				j = num;
				i= num;
			}else{
				prime = 1;
			}
		}
	}
	return prime;
}
*/

int findPrimeCount(int num, int prime, int primeOptions, int primeFreq){
	while (num%prime == 0){
	primeFreq = primeFreq+ 1;
	num /= prime;
	}


	if (prime != 0){
		printf("x(%d^%d)\n", prime, primeFreq);
	}
	return num;
}



int readNum()
{
	int num;
	printf("Enter a valid number (>1): \t" );
	scanf("%d", &num);
	return num;
}


