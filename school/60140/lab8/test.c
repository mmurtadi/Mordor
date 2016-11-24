#include <stdio.h>
#include <math.h>


int readNum(); 
int primeBase(int num);
int findPrimeCount(int num, int prime); 

int main(void){
	int num, prime, frequency;
	
	num = readNum();
	
	printf("%d = 1", num); 
	
	while (num > 1) {
		prime = primeBase(num);
		frequency = findPrimeCount(num, prime);
		printf("x(%d^%d)", prime, frequency);
		num /= pow(prime, frequency);
		
	}
	printf("\n");
	return 0;
}

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

int primeBase(int num){
	for (int i=2; i < num; i++) {
		if (num%i == 0){
			return i;
		}
	}
return num;
}

int findPrimeCount(int num, int prime){
	int primeFreq = 0;
	while (num%prime == 0){
		primeFreq+=1;
		num /= prime;
	}
	return primeFreq;
}

