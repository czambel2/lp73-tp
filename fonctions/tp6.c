#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Prend en paramètre plusieurs chaines, et les stocke dans un tableau

#define STR_MAX 255

int main(int argc, char **argv) {
	int max = argc - 1;
	int i;

	if(max == 0) {
		fprintf(stderr, "usage: %s str[ str[ ...]]\r\n", *(argv + 0));
		return -1;
	}
	
	char **tableau = NULL;
	tableau = malloc(max * sizeof(char*));

	for(i = 0; i < max; i++) {
		tableau[i] = malloc(STR_MAX * sizeof(char));
		strncpy(tableau[i], argv[i + 1], STR_MAX - 1);
		tableau[i][STR_MAX - 1] = '\0';
	}

	for(i = 0; i < max; i++) {
		printf("%s", tableau[i]);

		if(i + 1 == max) {
			printf("\r\n");
		} else {
			printf(" ");
		}
	}

	for(i = 0; i < max; i++) {
		free(tableau[i]);
	}
	free(tableau);

	return 0;
}
