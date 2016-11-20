// readNum()to take a valid number (greater than 1) from the user. This function
// has no input and returns a valid integer number entered by the user.

#include <stdio.h>
#include <stdbool.h>


int readNum();
int isPrime(int num);


int main(void){
	int num;
	num = readNum();
	printf("%d = 1", num);
		if (num == 2){
			printf("x(2^1)\n", num);
		}
		else if (num == 3) {
			printf("x(3^1)\n", num);		
		}
		else {
				num = isPrime(num);
				printf("%d", num);
			}


	return 0;
}

int readNum(){
	int num;
	printf("Enter a valid number (>1): \t" );
	scanf("%d", &num);
	return num;
}

int isPrime(int num){
	int primeFreq = 0;	
	//printf("%d", num );
	for (int i = 2; i < num; i++) {
		if (num%i == 0) {
			primeFreq +=1;
			num /= (i*i);
			printf("x(%d^%d)", i, primeFreq);
		}
	}
	return num;

}
