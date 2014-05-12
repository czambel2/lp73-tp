#include <stdlib.h>
#include <stdio.h>
#include "fonctions.h"

int main(int argc, char **argv) {
	int i, max;

	if(argc == 2) {
		max = atoi(*(argv + 1));
	} else {
		max = 10;
	}

	for(i = 1; i <= max; ++i) {
		printf("factorielle(%2d) = %d\r\n", i, factorielle(i));
	}

	return 0;
}
