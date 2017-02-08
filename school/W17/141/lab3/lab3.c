///////////////////////////////
// Name: Mohamed Murtadi      /
// Purpose: CS 60-141 W17     /
// lab 3 2D             /
///////////////////////////////


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#define M 6
#define N 5


int printArray2D(int randomNumberLocation[][N]); // 
int populateRandom2D(int randomNumberLocation[][N]); // 
bool linearSearch2D(int value, int randomNumberLocation[][N]); //  
int leftShift2D(int randomNumberLocation[][N]); // 


int main(void){
	int num, check = 0, selection, randomNumberLocation[M][N] = {0};
    srand(time(NULL));

    
do {
        printf("\n\nPlease choose one of the following options:\n1. Fill Array:\n2. Search Array\n3. Left Shift\n4. Print Array:\n0. EXIT\nEnter Your selection here: \n\n");
        scanf("%d", &selection);

        if (selection == 1){
            populateRandom2D(randomNumberLocation);

        }
        else if( selection == 2){
            printf("What number do you want to check?\n\n");
            scanf("%d", &num);
            check = linearSearch2D(num, randomNumberLocation);
            if (check){
                printf("\n\nYes the number exists in the array\n\n");
            }
            else{
                printf("\n\nNo it does not exist\n");
            }
        }
        else if (selection == 3){
            leftShift2D(randomNumberLocation);
        }
        else if (selection == 4){
            printArray2D(randomNumberLocation);
        }
        else if (selection == 0){
        }
        else{
            printf("\nUh-oh, wrong number, try again!\n");
        }
    

    } while (selection != 0);


	return 0;
}

// Objective: Runs iterative summation of numbers up to n
// Input: number entered by the user 
// Output: Summation of numbers up to N
int populateRandom2D(int randomNumberLocation[][N]){

	int value, successCounter = 0;

    do {
    	for (int i = 0; i < M; i++){
    		for (int j = 0; j < N; j++){
    			value = rand( ) % (M*N) + 1;

                if (linearSearch2D(value, randomNumberLocation)){
                    j--;
                }
                else {
                    randomNumberLocation[i][j] = value;
                    successCounter +=1;
                }
    		}
    	}
    } while (successCounter < (M*N));

    return 0;
}

// Objective: Runs iterative summation of numbers up to n
// Input: number entered by the user 
// Output: Summation of numbers up to N
bool linearSearch2D(int value, int randomNumberLocation[][N]){
	int test = 0;
    for (int i = 0; i < M; i++){
    	for (int j = 0; j < N; j++){	
    		if (randomNumberLocation[i][j] == value && randomNumberLocation[i][j] > 0){
                return 1;
    		}
    	}
    }
    return 0;
}

// Objective: Runs iterative summation of numbers up to n
// Input: number entered by the user 
// Output: Summation of numbers up to N
int leftShift2D(int randomNumberLocation[][N]){
    int tempFirst = randomNumberLocation[0][0];
    int tempNewline;

    for (int i = 0; i < M; i++){
        for(int j = 0; j < N; j++){
            if (i != 0 && j==0){
                tempNewline = randomNumberLocation[i][j+1];
                randomNumberLocation[i][j] = randomNumberLocation[i-1][(N-1)];
                randomNumberLocation[i][j] = tempNewline;                
            }
            else if (i == (M-1) && j== (N-1)){
                randomNumberLocation[M-1][N-1] = tempFirst;
            }
            else{
                randomNumberLocation[i][j] = randomNumberLocation[i][j+1];
            }
        }
    }
}

// Objective: Runs iterative summation of numbers up to n
// Input: number entered by the user 
// Output: Summation of numbers up to N
int printArray2D (int randomNumberLocation[][N]){
    printf("\nline 1: %d %d %d %d %d \n", randomNumberLocation[0][0], randomNumberLocation[0][1], randomNumberLocation[0][2], randomNumberLocation[0][3], randomNumberLocation[0][4]);
    printf("line 2: %d %d %d %d %d \n", randomNumberLocation[1][0], randomNumberLocation[1][1], randomNumberLocation[1][2], randomNumberLocation[1][3], randomNumberLocation[1][4]);
    printf("line 3: %d %d %d %d %d \n", randomNumberLocation[2][0], randomNumberLocation[2][1], randomNumberLocation[2][2], randomNumberLocation[2][3], randomNumberLocation[2][4]);
    printf("line 4: %d %d %d %d %d \n", randomNumberLocation[3][0], randomNumberLocation[3][1], randomNumberLocation[3][2], randomNumberLocation[3][3], randomNumberLocation[3][4]);
    printf("line 5: %d %d %d %d %d \n", randomNumberLocation[4][0], randomNumberLocation[4][1], randomNumberLocation[4][2], randomNumberLocation[4][3], randomNumberLocation[4][4]);
    printf("line 6: %d %d %d %d %d \n", randomNumberLocation[5][0], randomNumberLocation[5][1], randomNumberLocation[5][2], randomNumberLocation[5][3], randomNumberLocation[5][4]);
    
    return 0;
}


