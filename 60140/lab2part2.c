// Name: Mohamed Murtadi
// Purpose: CS 60-140 Fall2016
// lab 2 Part 2
#include <stdio.h>

int main(void)

{
	int i_number;
	float unit_price;
	int mm_date;
	int dd_date;
	int yy_date;

    printf("Enter the item number: \n");
	scanf("%d", &i_number);

	printf("Enter unit price: \n");
	scanf("%7.2f", &unit_price);

    printf("Enter the purchase date (mm/dd/yyyy): \n");
	scanf("%d %d %d", &mm_date, &dd_date, &yy_date);

    printf("Item\tUnit\tPurchase\n\t\tPrice\tDate\n----\t------\t-------------\n&d\t%f\t%d//%d//%d", i_number, unit_price, mm_date, dd_date, yy_date);

	return 0;
}