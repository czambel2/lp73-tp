#include <stdlib.h>
#include <stdio.h>
#include "fonctions.h"

int main(int argc, char **argv) {
	int i, max, fact;

	if(argc == 2) {
		max = atoi(*(argv + 1));
	} else {
		max = 10;
	}

	for(i = 1; i <= max; ++i) {
		factorielle2(i, &fact);
		printf("factorielle2(%1d) = %d\r\n", i, fact);
	}

	return 0;
}
