
// Name: Mohamed Murtadi
// Purpose: CS 60-140 Fall2016
// Assignment 3 Question 6

#include <stdio.h>
int main()
{

    //declaring initial variable sto be used in calc
    float eps = 0.0;
    float term = 1;
    float i = 1;
    float fact = 1;
    float epsilon;


    // User inputs small float to determine epsilon
    printf("Enter a small float value for epsilon: ");
    scanf("%f", &epsilon);



    // Loop to determine value of epsilon
    while (term > epsilon) 
    {
        eps = eps + term;
        i = i + 1;
        fact = fact * i;
        term = i / fact;
    }
    
    // Print out  once exiting the while loop
    printf("Approximation of e: %.2f\n", eps);

    return 0;
}