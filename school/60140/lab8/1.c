#include <stdio.h>
#include <stdbool.h>


int readNum();
int isPrime(int prime);

void printHello();


int main(void){
	int num;
	bool prime;
	num = readNum();
	bool p_flag = isPrime(prime);


	// check printf("%d", num);
	//findPrimeAndFillArray(int primeArray, int num);
	//findPrime();
	return 0;
}


int isPrime(int prime){
	
	for (int i = 2; i < num; i++) {
		if (num%i == 0) {
			primeFreq +=1;
			num /= i;
			printf("(%d^%d)x", prime, primeFreq);
		}
	}
	return num;

}


/*	int primeFreq = 0;
	if (num == 1){
		return 1;
	}else if (num == 2){
		return 2;
	}


}
*/


int readNum(){
	int num;
	printf("Enter a valid number (>1): \t" );
	scanf("%d", &num);
	return num;
}