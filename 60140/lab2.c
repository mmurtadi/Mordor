// Name: Mohamed Murtadi
// Purpose: CS 60-140 Fall2016
// lab 2
#include <stdio.h>

int main(void)

{
	int num1 = 40000;
	float num2 = 1.234;

	int mm, dd, yyyy;

	printf("%-15.8d\n",num1);

	printf("0%8f\n", num2); //am i cheating by doing this?
	
	printf("please enter the month you were born. (1-12): ");
	scanf("%d", &mm);
	
	printf("please enter the day you were born. (1-31): ");
	scanf("%d", &dd);
	
	printf("please enter the year you were born. (1900-2015): ");
	scanf("%d", &yyyy);

	return 0;
}