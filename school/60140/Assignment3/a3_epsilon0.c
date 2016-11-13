
// Name: Mohamed Murtadi
// Purpose: CS 60-140 Fall2016
// Assignment 3 Question 5

#include <stdio.h>
int main()
{
    
    int n; 
    int i;
    float f = 1;
    float e;

    // prompt user for input
    printf("Enter an integer: ");
    scanf("%d",&n);

    // loop calculating factorial starting at one
    // storing total value in e until reaching input from user (n)
    for (i=1; i<=n; i++) {
            f = f * i; 
            e = e + 1/f;              
        }

    // Adding 1 to final value of e as per calculation
    e = e+1;

    // print ~e to user 6 decimal places
    printf("e at %d = %f\n ", n, e);
    return 0;
}