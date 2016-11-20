// Name: Mohamed Murtadi
// Purpose: CS 60-140 Fall2016
// Assignment 4 Question 3

#include <stdio.h>
#include <stdbool.h>


int main(void)
{
	// answer to quesiton 3
	bool weekend[7] = {true, false, false, false, false, false, true};
	// answer to quesiton 3

	// personal check to see if it worked
	int i = 0;
	int num1;

	while (i < 7) {
		num1 = weekend[i];
		printf("%d\n", num1);
		i++;
	}

	return 0;
}