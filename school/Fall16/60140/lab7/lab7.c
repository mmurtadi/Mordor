// Name: Mohamed Murtadi
// Purpose: CS 60-140 Fall2016
// lab 5

#include <stdio.h>
#include <time.h>

int main()
{
    // variable intiation and assigning random number using time as base
    int GPAFreq[4] = {0};
    int grade;
    int i = 1;
    long unsigned int numberOfStudents;
    srand(time(NULL));
    
    printf("Enter the number of students: \t\n");
    scanf("%d", &numberOfStudents);

    while (i <= numberOfStudents) {
        grade = rand() % 6;
        printf("GPA of student #%d is :     \t%d\n", i, grade);

        if (grade == 1){
            GPAFreq[0] += 1;
            i++;
        }
        else if (grade == 2){
            GPAFreq[1] += 1;
            i++;
        }
        else if (grade == 3){
            GPAFreq[2] += 1;
            i++;
        }
        else if (grade == 4){
            GPAFreq[3] += 1;
            i++;
        }
        else
            printf("Invalid Number!, try again\n");
    }

    printf("\n\n\t**********************************\n\
        * Total number of students is:%d *\n\
        * GPA 1 --- %d student(s)\t *\n\
        * GPA 2 --- %d student(s)\t *\n\
        * GPA 3 --- %d student(s)\t *\n\
        * GPA 4 --- %d student(s)\t *\n\
        **********************************\n",\
        numberOfStudents,\
        GPAFreq[0],\
        GPAFreq[1],\ 
        GPAFreq[2],\
        GPAFreq[3]);
    return 0;
}