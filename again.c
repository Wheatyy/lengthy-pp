#include <stdio.h>
#include <stdlib.h>
#include "again.h"
#include "main.h"
char answer;
void again() {
	printf("Would you like us to measure your dick again?(y/n): ");
       scanf(" %c", &answer);
	if(answer == 'y' || answer == 'Y') {
		main();
	}
	else{
		printf("Okay, Bye-Bye.");
	}
}
 		
