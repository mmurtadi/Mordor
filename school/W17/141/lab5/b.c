#include <stdio.h>
#include <time.h>

// EVERYTHING WORKS RN, make next function


#define SIZE 20


void FillArray ( int *array, int size );
void PrintArray ( int *array, int size );
void BubbleSort ( int *array, int size );
void *Swap(int *num1, int *num2);

int main(){
	int NumList[20] = {0}, size = SIZE, selection = 1;

	srand(time(NULL));
	PrintArray(NumList, size);

do {  // UI for user to select an option or "0" to exit

        printf("\n\nPlease choose one of the following options:\n1. Fill Array:\n2. Print Array\n3. BubbleSort:\n0. EXIT\nEnter Your selection here: \n\n");
        scanf("%d", &selection);

        if (selection == 1){
			FillArray(NumList, size);

        }
        else if( selection == 2){ // UI for print
        	PrintArray(NumList, size);

        }
        else if (selection == 3){ // Left shift call
			BubbleSort(NumList, size);
        }
        else if (selection == 0){
        }
        else{
            printf("\nUh-oh, wrong number, try again!\n");
        }
    

    }while(selection != 0);


	return 0;
}

void FillArray ( int *array, int size){  			

	for (int i = 0; i < size; i++){
		array[i] = rand( ) % (100) + 1;
	}
}
void *Swap(int *num1, int *num2){
	int temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}
void PrintArray ( int *array, int size ){
	printf("Array: (");
	for (int i = 0; i < size; i++){
		if (i == (size-1)){
			printf("%d)\n", array[i]);
		}
		else {
			printf("%d, ", array[i]);
		}
	}
}

void BubbleSort ( int *array, int size ){
	for (int i = 0; i < size; i++){
		for (int i = 0; i < size-1; i++){
			if (array[i] < array[i+1]){
				Swap(&array[i], &array[i+1]);
			}
		}
	}
}