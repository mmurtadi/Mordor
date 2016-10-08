// Name: Mohamed Murtadi
// Purpose: CS 60-140 Fall2016
// lab 3
#include <stdio.h>

int main(void)

{
    
      
    int num1, num2, num3, num4, num5, num6, num7, num8, num9;
    int sum;
    int catch;
    int checkDigit;

    printf("This programming is for checking for a missing Check Digit\nEnter the ISBN Number you want to check: \n");
	scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d", &num1, &num2, &num3, &num4, &num5, &num6, &num7, &num8, &num9);
	
	sum = (num1*10 + num2*9 + num3*8 + num4*7 + num5*6 + num6*5 + num7*4 + num8*3 + num9*2);

	checkDigit = 11-(sum%11);

	if (checkDigit == 10)
		printf("Check Digit: X");
	else
		printf("Check Digit: %d", checkDigit);
		
	return 0;
}