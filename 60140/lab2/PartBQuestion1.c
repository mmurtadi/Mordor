// Name: Mohamed Murtadi
// Purpose: CS 60-140 Fall2016
// lab 2 Part B
#include <stdio.h>

int main(void)

{
	// Part A Print unsigned integer 40000 left justified in a 15-digit field with 8 digits.
	
    int num1 = 40000;
    
    printf("%-15.8d\n",num1);
    
    
    
    // Part B Print 1.234 in a 9-digit field with preceding zeros.
	
    float num2 = 1.234;

	printf("%09f\n", num2); 
	
    
    // Part C Read a time of the form hh:mm:ss, storing the parts of the time in the integer variables hour, minute and second. Skip the colons (:) in the input stream. 
    
	int hh, mm, ss;

    printf("time in the format HH:MM:SS with semicolons included: ");
	scanf("%d:%d:%d", &hh, &mm, &ss);

    printf("hh is: %02d \nmm is: %02d \nss is: %02d\n", hh, mm, ss);

	return 0;
}