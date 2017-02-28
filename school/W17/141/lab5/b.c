#include <stdio.h>
#include <time.h>

// EVERYTHING WORKS RN, make next function


#define SIZE 20


void FillArray ( int *array, int size );
//void PrintArray ( int *array, int size );
//void BubbleSort ( int *array, int size );
//void Swap ( int *x, int *y );

int main(){
	int NumList[20] = {0}, size = SIZE;

	srand(time(NULL));
	FillArray(NumList, size);


	return 0;
}

void FillArray ( int *array, int size){  			

	for (int i = 0; i < size; i++){
		array[i] = rand( ) % (100) + 1;
		printf("%d\n", array[i]);
	}


}
