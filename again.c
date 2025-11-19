#include <stdio.h>
#include <stdlib.h>
#include "again.h"
#include "main.h"
#include "sorry.h"
char answer;
//answer = NULL
void again() {
	printf("Would you like us to measure your dick again?(y/n): ");
       scanf(" %c", &answer);
	if(answer == 'y' || answer == 'Y') {
		main();
	}
	else if(answer == 'n' || answer == 'N') {
		printf("Okay, Bye!\n");
	}
	else {
	sorry();
}
}
