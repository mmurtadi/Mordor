// Name: Mohamed Murtadi
// Purpose: CS 60-140 Fall2016
// lab 2 Part B Question 2

#include <stdio.h>

int main(void)

{		// VARIABLE DECLARATION FOR LAB 2
	int i_number;
	float unit_price;
	int mm_date;
	int dd_date;
	int yy_date;

		//Requests for user to enter in Item number, Unit Price and Purchase Date and then storing their variables above.

    printf("Enter the item number: \n"); 
	scanf("%d", &i_number);

	printf("Enter unit price: \n");
	scanf("%f", &unit_price);

    printf("Enter the purchase date (mm/dd/yyyy): \n");
	scanf("%d/%d/%d", &mm_date, &dd_date, &yy_date);

		//print inputs formatted in a legible way as instructed in the lab question.

    printf("Item\t\tUnit\t\tPurchase\n\t\tPrice\t\tDate\n-------\t\t---------\t-----------\n%d\t\t$%6.2f\t\t%d/%d/%d", i_number, unit_price, mm_date, dd_date, yy_date);

	return 0;
}