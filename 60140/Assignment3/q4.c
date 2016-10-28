
// Name: Mohamed Murtadi
// Purpose: CS 60-140 Fall2016
// Assignment 3 Question 4
#include <stdio.h>
#include <math.h>

int main(void)
{

	// Question 4 part a) Hello
	int n = 1;
	int a = 1;

	if (a > n && n > 0)
		printf("Good!\n");
	else
		printf("Hello!\n");


	// Question 4 part b)1 2 3 4 5 6 7 8 9
	int k = 1;
	while (k < 10) 
	{
		printf("%d ", k);
		k = k + 1;
	}

	// Question 4 part c)1 

	int k = 1;

	do
	{
		printf("%d ", k);
		k = k++;
	} while (k>10);
	
	// Question 4 part c)10.000000 3.162278 1.778279 1.333521 1.154782 1.074608 1.036633 1.018152 1.009035 1.004507 1.002251 1.001125 

	float x = 10.0;
	while (x > 1.001) 
	{
		printf("%f ", x);
		x = sqrt(x);
	}

	return 0;
}