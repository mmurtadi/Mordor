// Name: Mohamed Murtadi
// Purpose: CS 60-140 Fall2016
// Assignment 4 Question 5

#include <stdio.h>
#include <stdbool.h>


int main(void)
{
	bool digit_seen[10]= {false};
	int digit;
	long n;

	printf("Enter a number: \n");
	scanf("%1d",&n);

	while (n > 0) {
		digit = n%10;
		if (digit_seen[digit])
			break;
		digit_seen[digit] = true;
		n/=10;
	}

	if (n>0)
		printf("Repeated digit \n",);
	else
		printf("No Repeated digit \n",);

	return 0;
}