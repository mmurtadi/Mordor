#include <stdio.h>


int IsPrime(num){
	int numLess = num;
	int primeOptions[num] = {0};


	for (int i = 0; i < ((num/2)-1); i++){
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


int readNum()
{
	printf("Enter a valid number (>1): \t" );
	scanf("%d", num);
	return num;
}


int main(void)
{
	readNum();
	while ()
	IsPrime();


	return 0;
}






