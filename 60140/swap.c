// Name: Mohamed Murtadi
// Purpose: CS Fall2016
// Lab 1
#include <stdio.h>

int main(void)
{
	int num1, num2, temp=1;
	printf("Please select a your first number: "); //user has a chance to select his first number
	scanf("%d", &num1);

	printf("Please select a your second number: "); //user has a chance to select his second number
	scanf("%d", &num2);

// number swap functionality, rotating numbers in order to not lose a variable

	temp = num1;

	num1 = num2;

	num2 = temp;

	printf("I switched your numbers around!\nNow your first number has become: %d \nAnd the second number is: %d \n", num1, num2);
	return 0;
}