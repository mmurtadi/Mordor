// Name: Mohamed Murtadi
// Purpose: CS 60-140 Fall2016
// lab 6

#include <stdio.h>


int main()
{
	int i;
	int pin;
	int success = 0;
	int try = 0;
	int collecter =0;
	int count = 5;

	
	while (try < 6 && success != 1) {
		try += 1;
		printf("Enter a number this is attempt (%d): ", try);
		scanf("%d", &pin);
		if (pin >=33333 && pin <=99999){
			do {
				count = 5;
				success = 0;
				collecter = collecter+((pin%(10^count)%3));
			}
			while (count >= 1 && collecter == 0);{
				collecter = collecter+((pin%(10^count)%3));
				count -= 1;
				if (collecter > 0){
					success = 0;
					count = 0;
				}
				else{
					success =1;
				}
			}
		}	
	}
	if (collecter == 0)
		printf("digit: %d is... a... SUCCESS!!!\n", pin);
	else
		printf("Intruder! RCMP is on route to your geotagged location\n");



    return 0;            
}