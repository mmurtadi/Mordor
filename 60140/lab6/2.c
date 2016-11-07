// Name: Mohamed Murtadi
// Purpose: CS 60-140 Fall2016
// lab 6

#include <stdio.h>


int main()
{

	int try = 0;
	int pinOriginal;
	int pinCheck;
	int counter = 1;
	int collecter;

	do {
		//lengthCheck
		try += 1;
		printf("Enter your number. attempt(%d):", try);
		scanf("%d", &pinOriginal);
		if (pinOriginal > 9999 && pinOriginal <100000){
			counter = 1;
			collecter = 0;
			do {
				counter = counter*10;
				pinCheck = pinOriginal%counter;
				collecter = collecter + (pinCheck % 3);
			}while (collecter == 0 && counter <= 1000000);
				if (collecter == 0){
					printf("Success!\n");
					return 0;
				}
			}
	}while (try < 6);

	printf("Intruder");

	return 0;
}