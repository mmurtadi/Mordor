// Name: Mohamed Murtadi
// Purpose: CS 60-140 Fall2016
// Assignment 2 Question 2

#include <stdio.h>


int main(void)
{
	// Question 2a)

	int i = 5;
	int j = 3;

	printf("%d %d\n", i / j, i % j);

	// Question 2b)
	
	i = 2;
	j = 3;

	printf("%d\n", (i + 10) % j);

	// Question 2c)
	
	i = 7;
	j = 8;

	int k = 9;

	printf("%d\n", (i + 10) % k / j);

	// Question 2d)

	i = 1;
	j = 2;
	k = 3;

	printf("%d\n", (i + 5) % (j + 2) / k);


	return 0;
}