
// Name: Mohamed Murtadi
// Purpose: CS 60-140 Fall2016
// Assignment 3 Question 4

#include <stdio.h>
int main()
{
    int n, i;
    float f = 1;
    float e = 1;

    // ask user for  input
    printf("Enter an integer: ");
    scanf("%d",&n);

    // check for 0 or impossible factorial input
    if (n < 0)
        printf("impossible, try again");

    else
    {
        for(i=1; i<=n; ++i)
        {
            f *= i;
            e = e+f;              
        }
        printf("e of %d = %.2f\n ", n, e);
    }

    return 0;
}