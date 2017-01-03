// Name: Mohamed Murtadi
// Purpose: CS 60-140 Fall2016
// Assignment 4 Question 5
#include <stdio.h>

int main(void)
{
	int num = 0;
	int duplicateCheck = 0;
	int count = 0;
	int splitNum[50] = {0};
	int x = 0;
	int i = 0;

	printf("%d//%d//%d//%d//%d\n\n\n", num, count, duplicateCheck, x, i);


	printf("Enter the number you want to check: \t");
	scanf("%d", &num);


	if (num > 0) {

		do {
			// Variable resets.
			// Useful for multiple runs of duplicate check. 
			duplicateCheck = 0;
			x = 0;
			i = 0;
			count = 0;

			// Length check for length of the number the user inputted.
			// This will be used to fill the array.
			// "i" is used as a temp placeholder so i can manipulate the number entered.
			i = num;
			while (i != 0){
				count++;
				i /=10;
			}
			// reset "i"
			i=0;

			// This fills the array one digit at a time until the inner counter reaches
			// the length of the number entered.
			while (i < count){
				splitNum[i] = num%10;
				printf("%d", splitNum[i] );
				i +=1;
				num/= 10;
			}

			// Loop check for matches within the array.
			// All possible combinations are checked due to the first loop incrementing
			// after the second position has incremented to the end of the loop

			for (int i = 0; i < (count - 1); i++) {
			    for (int j = i + 1; j < (count); j++) {
			        if (splitNum[i] == splitNum[j]) {
						duplicateCheck += 1;
					}
			    }
			}

			// This if statement section checks variable the variable "duplicateCheck"
			// If it was incremented, that would mean the loop before found two positions
			// In the array which had the same digit and the corresponding print out is displayed
			if (duplicateCheck > 0){
				printf("Then number entered has a duplicate digit\n\n");

			}else{
				printf("Then number entered DOES NOT have a duplicate digit\n\n");

			}

			// Prompts the user to enter a new number to continue
			printf("Enter the number you want to check: \t");
			scanf("%d", &num);
		} while (num>0);
	}
	return 0;
}