
// Name: Mohamed Murtadi
// Purpose: CS 60-140 Fall2016
// Assignment 3 Question 4

#include <stdio.h>
int main()
{
    int n, i;
    float f = 1;
    float e;

    // ask user for  input
    printf("Enter an integer: ");
    scanf("%d",&n);

    // check for 0 or as eulers number starts at x=0;

    if (n < 0)
        printf("impossible, e starts at 0 try again");

    else
    {
        for(i=1; i<=n; ++i)
        {
            f = f * i;
            e = (e + i/f);              
        }
        printf("e of %d = %f\n ", n, e);
    }

    return 0;
}