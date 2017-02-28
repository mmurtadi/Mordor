#include <stdio.h>

int main(){
	// declaration and assignent of an int variable named a and storing the value 7 within it
	int a = 7;

	// initialization of a pointer
	int *aPtr;
	// assigning the address of variable as the pointers value
	aPtr = &a;
	//print the address of a
	printf("%p\n", &a);
	// goes a and prints the address of a
	printf("%p\n", aPtr);
	// print the address of the pointer
	printf("%p\n", &aPtr);
	// print the value of a
	printf("%d\n", a);
	// goes to a and prints value
	printf("%d\n", *aPtr);
	// goes to address at pointer and prints value which is the address of "a"
	printf("%p\n", *&aPtr);
	// prints address of the value the pointer is pointing at which is a
	printf("%p\n", &*aPtr);
	// goes to the address of a and prints value stored there
	printf("%d\n", *&a);

	// trying to print address of a value that a is point to 
	// however a is and integer and not a pointer
	printf("%d", &*a);

	return 0;
}
