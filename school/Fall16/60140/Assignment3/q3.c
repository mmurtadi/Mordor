// Name: Mohamed Murtadi
// Purpose: CS 60-140 Fall2016
// Assignment 3 Question 3
#include <stdio.h>

int main(void)
{
	int i;

	// Question 3 part a) Output:1 2 4 16 32 64 128

	i = 1;
	while (i <=128) {
		printf("%d ",i);
		i *=2;
	}
	// Question 3 part b)9384 938 93 9
	printf("\n");

	i = 9384;
	do {
		printf("%d ", i);
		i/=10;
	} while (i > 0);
	
	// Question 3 part c)5 4 3 2
	
	printf("\n");

	i = 5;
	int j = i-1;

	for (; i > 0, j > 0; --i, j = i-1)
		printf("%d ", i);

	printf("\n");


		return 0;
}