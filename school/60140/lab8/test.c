// readNum()to take a valid number (greater than 1) from the user. This function
// has no input and returns a valid integer number entered by the user.

#include <stdio.h>
#include <stdbool.h>


int readNum(); // function to read a valid number enterered by the user
int isPrime(int num); // checks whether a number is 
int primeBase(int num);
int findPrimeCount(int num, int prime);


int main(void){
	int num, prime, frequency;
	bool p_flag;

	num = readNum();
	printf("%d = 1", num);
	while (num >= 1) {
		p_flag = isPrime(num);
		if (num > 1) {
			prime = primeBase(num);
			frequency = findPrimeCount(num, prime);
		}
		else if (num == 1){
			printf("\n");
			return 0;
		}
		// printf("%d\n%d\n%d\n", num, prime, frequency);
		printf("x(%d^%d)", prime, frequency);
		num /= (prime*(frequency));
		
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


int isPrime(int num){
	bool p_flag;
	for (int i=2; i < num; i++) {
		if (num%i == 0){
			return 1;
		}
	}
return 0;
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

