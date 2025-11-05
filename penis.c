#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "again.h"
#include "main.h"
int main() {
char shaft = '=';
int length;
	printf("How long is your dick?\n");
	printf("It's... "); 
		scanf("%d", &length);

	printf("Okay, let us try to recreate that.\n");
	printf("8");
		for (int i = 0; i < length; i++) {
			printf("%c", shaft);
		}
	printf("D\n");
	again();
}


