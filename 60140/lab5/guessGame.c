// Name: Mohamed Murtadi
// Purpose: CS 60-140 Fall2016
// lab 5

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // variable intiation and assigning random number using time as base
    srand(time(NULL));
    int goal = rand( ) % 50 + 1;
    int guess;
    int gCount = 1;


    // prompts user to select a number

    printf("Please guess a number: ");
    scanf("%d", &guess);


    // checks input and prints out a hint: "too low" or "too high"
    // then gives user another try and displays which attempt they are on:

    while (gCount < 10)
        if (guess == goal) 
            gCount = 11; // breaks while loop if user guessed correctly
        else {
            if (guess < goal)  
                printf("Too Low!, try again!\n");
            else {
                printf("Too High!, try again!\n");
            }
            gCount = gCount + 1;
            printf("This is attempt: %d of 10, Pick a better number: \n", gCount );
            scanf("%d", &guess);
        }

    // Prints praise or pitty based on how succesful the user was

    if (guess == goal)
        printf("Woohoo! you got it! the number was %d\n", goal);
    else {
        printf("Uh-Oh! Maybe next time!, the random number was %d\n", goal);
    }

    return 0;
}