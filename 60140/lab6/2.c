// Name: Mohamed Murtadi
// Purpose: CS 60-140 Fall2016
// lab 6

#include <stdio.h>


int main()
{
	int i;
	int pin;
	int success = 0;
	int try = 1;
	int collecter = 0;
	int count = 5;


	while (try <= 6){
		printf("Enter a number this is attempt (%d): ", try);
		scanf("%d", &pin);
		if (pin >=33333 && pin <=99999){
				do {
					success = 0;
					collecter = collecter+((pin/(10^count)%3));
					count = count - 1;
				}while ((pin/(10^count)%3) == 0 && count >= 0);


			}else{
				try = try +1;
				printf("Enter a number this is attempt (%d): ", try);
				scanf("%d", &pin);
			}
			try = try +1;
	}
	if (collecter > 0 && try > 6)
		printf("Intruder! RCMP is on route to your geotagged location\n");
	else
		printf("digit: %d is... a... SUCCESS!!!\n", pin);




    return 0;            
}