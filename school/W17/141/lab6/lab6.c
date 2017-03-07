#include <stdio.h>
#include <string.h>

int main(){

	char buffer1[] = {'t','h','i','s',' ','i','s',' ','t','h','e',' ','f','i','r','s','t',' ','b','u','f','f','e','r','.','\0'};
	char buffer2[] = {'t','h','i','s',' ','i','s',' ','t','h','e',' ','s','e','c','o','n','d',' ','b','u','f','f','e','r','.','\0'};
	char buffer3[80];


	//////////////////////
	// LEFT OFF HERE
	// PART A, Q 7, need to print buffer 3
	// Using a pointer rather than %s
	//////////////////////


	char* pBuffer = &buffer3;



	// printf("enter a sentence: ");
	// only printing the first word entered using scanf
	// scanf("%s", &buffer3);
	printf("enter a sentence: ");
	gets(buffer3);

	printf("%s\n",buffer1);
	printf("%s\n",buffer2);
	printf("%s\n",buffer3);

	


	return 0;
}