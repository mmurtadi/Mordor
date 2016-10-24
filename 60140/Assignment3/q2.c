// Name: Mohamed Murtadi
// Purpose: CS 60-140 Fall2016
// Assignment 3 Question 2
#include <stdio.h>

int main(void)
{
	int num1, num2;

	printf("Please enter a two digit number:  ");
	scanf("%1d%1d", &num1, &num2);

	// checks if value is under 20, ie fourteen, seventeen etc.

	printf("You entered the number: ");
	if (num1*10<20) 
		switch (num2) {
			case 0: printf("Ten\n"); break;
			case 1: printf("Eleven\n"); break;
			case 2: printf("Twelve\n"); break;
			case 3: printf("Thirteen\n"); break;
			case 4: printf("Fourteen\n"); break;
			case 5: printf("Fifteen\n"); break;
			case 6: printf("Sixteen\n"); break;
			case 7: printf("Seventeen\n"); break;
			case 8: printf("Eighteen\n"); break;
			case 9: printf("Nineteen\n"); break;
		}
	else { // checks if number is a multiple of 10 and prints num1,
			// else prints number with format as num1-num2
		if (num2 == 0)
			switch (num1) {
				case 2: printf("Twenty \n"); break;
				case 3: printf("Thirty \n"); break;
				case 4: printf("Forty \n"); break;
				case 5: printf("Fifty \n"); break;
				case 6: printf("Sixty \n"); break;
				case 7: printf("Seventy \n"); break;
				case 8: printf("Eighty \n"); break;
				case 9: printf("Ninety \n"); break;
				}
		else {
				switch (num1) {
					case 2: printf("Twenty-"); break;
					case 3: printf("Thirty-"); break;
					case 4: printf("Forty-"); break;
					case 5: printf("Fifty-"); break;
					case 6: printf("Sixty-"); break;
					case 7: printf("Seventy-"); break;
					case 8: printf("Eighty-"); break;
					case 9: printf("Ninety-"); break;
					};

			switch (num2) { // checks for second digit and prints second word
				case 1: printf("One\n"); break;
				case 2: printf("Two\n"); break;
				case 3: printf("Three\n"); break;
				case 4: printf("Four\n"); break;
				case 5: printf("Five\n"); break;
				case 6: printf("Six\n"); break;
				case 7: printf("Seven\n"); break;
				case 8: printf("Eight\n"); break;
				case 9: printf("Nine\n"); break;
				};
			}
		}

	return 0;
}