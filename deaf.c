#include <stdio.h>
#include <stdlib.h>
#include "again.h"
#include "main.h"
#include "deaf.h"
char answerDeaf;
void deaf() {
	printf("I'm sorry, what was that? You've gotta pick between Y or N, partner. Just one letter, too. : ");
		scanf(" %c", &answerDeaf);
		if (answerDeaf == 'Y' || answerDeaf == 'y') {
			main();
		}
		else if (answerDeaf == 'N' || answerDeaf == 'n') {
			printf("Okay, Bye-Bye.\n");
			return;
		}
		else {
			deaf();
		}

}

