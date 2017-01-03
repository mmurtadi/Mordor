// Name: Mohamed Murtadi
// Purpose: CS 60-140 Fall2016
// Assignment 2 Question 4

#include <stdio.h>


int main(void)
{
	// Question 4a)

	int i = 3;
	int j = 4;
	int k = 5;

	printf("%d ", i < j || ++j < k);
	printf("%d %d %d\n", i, j, k);

	// Question 4b)
	
	i = 7;
	j = 8;
	k = 9;

	printf("%d ", i - 7 && j++ < k);
	printf("%d %d %d\n", i, j, k);


	// Question 4c)
	
	i = 7;
	j = 8;
	k = 9;

	printf("%d ", (i = j) || (j = k));
	printf("%d %d %d\n", i, j, k);


	// Question 4d)

	i = 1;
	j = 1;
	k = 1;

	printf("%d ", ++i || ++j && ++k);
	printf("%d %d %d\n", i, j, k);


	return 0;
}