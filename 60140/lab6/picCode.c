// Name: Mohamed Murtadi
// Purpose: CS 60-140 Fall2016
// lab 6

#include <stdio.h>


int main()
{
    int pin;
    int try = 1;
    int count = 1;
    int fact = 10000;
    
    //ATTEMPT COUNTER

    printf("Enter pin code attempt(%d): \n", try);
    scanf("%d", &pin);

    while (try < 6) {
        // 5 DIGIT CHECK 
        if ((pin / 10000) < 1 || (pin / 10000) > 10) {
            printf("Code %d is invalid!\n", pin);
            try = try + 1;
            printf("Enter pin code attempt(%d): \n", try);
            scanf("%d", &pin);
        }else{
            while (count < 6) {

                if (((pin%fact)%3) == 0){
                    //kicks out of loop if not divisible by 3 midway, also assigns success variable "8"
                    if (((pin%fact)%3) == 0){
                        count = count + 1;
                        printf("Code %d is a success!\n", pin);
                        return 0;
                    } else{
                        count = count + 1;
                        try = try + 1;
                    }
                    fact = fact/10;
                } else {
                    // PRINT "ERROR" AND KICK OUT OF THIS LOOP
                    printf("Code %d is invalid!\n", pin);
                    try = try +1;
                    printf("Enter pin code attempt(%d): \n", try);
                    scanf("%d", &pin);
                    count = 1;
                }
            }
        //COUNTER RESETS FOR ERRORS CAUGHT
        count = 1;
        fact = 100000;
        }
    }   

    printf("intruder alert! \n");
        
    return 0;
}