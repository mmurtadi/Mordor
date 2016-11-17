// Name: Mohamed Murtadi
// Purpose: CS 60-140 Fall2016
// Assignment 4 Question 3

#include <stdio.h>
#include <stdbool.h>


int main(void)
{
	bool weekend[7] = {true, false, false, false, false, false, true};

	int i = 0;
	int num1;

	while (i < 7) {
		num1 = weekend[i];
		printf("%d\n", num1);
		i++;
	}

	return 0;
}