// Name: Mohamed Murtadi
// Purpose: CS 60-140 Fall2016
// Assignment 2 Question 3

#include <stdio.h>


int main(void)
{


    int num1, num2, num3, num4, num5;
    int oc1, oc2, oc3, oc4, oc5;

    printf("Enter a number between 0 and 32767: ");
	scanf("%d", &num1);

	oc1 = num1%8;
	num2 = num1/8;
	oc2 = num2%8;
	num3 = num2/8;
	oc3 = num3%8;
	num4 = num3/8;
	oc4 = num4%8;
	num5 = num4/8;
	oc5 = num5%8;

	printf("In octal, your number is: %d%d%d%d%d\n ", oc5, oc4, oc3, oc2, oc1);

	return 0;
}
