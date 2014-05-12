#include <stdlib.h>
#include <stdio.h>
#include "fonctions.h"

int main(int argc, char **argv) {
	int i, max, fact;
	int (*f)(int);

	if(argc == 3) {
		max = atoi(*(argv + 2));
	} else if(argc == 2) {
		max = 10;
	} else {
		fprintf(stderr, "usage: %s f [max]\r\n", *argv);
		return -1;
	}

	int fct = atoi(*(argv + 1));
	if(fct == 1) {
		f = factorielle;
		printf("soit f : factorielle\r\n");
	} else if(fct == 2) {
		f = carre;
		printf("soit f : carré\r\n");
	} else {
		fprintf(stderr, "usage: %s f [max]\r\n", *argv);
		fprintf(stderr, "f: 1: factorielle\r\n   2: carré\r\n");
		return -1;
	}

	for(i = 1; i <= max; ++i) {
		printf("f(%1d) = %d\r\n", i, f(i));
	}

	return 0;
}
