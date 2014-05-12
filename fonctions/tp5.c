#include <stdio.h>
#include <stdlib.h>

// Demande à l'utilisateur un nombre N, puis alloue dynamiquement un tableau
// contenant les nombres de 1 à N.

int main(int argc, char **argv) {
	int max = 0;
	if(argc < 2) {
		printf("Veuillez entrer le nombre d'éléments à créer : ");
		scanf("%d", &max);
		getchar();
	} else {
		max = atoi(*(argv + 1));
	}

	if(max < 1) {
		fprintf(stderr, "Entrez un nombre supérieur à 0\r\n");
		return -1;
	}

	int *tableau = malloc(sizeof(int) * max);
	int i;
	for(i = 0; i < max; ++i) {
		*(tableau + i) = i + 1;
	}

	// Affichage du contenu du tableau
	for(i = 0; i < max; i++) {
		printf("%d", *(tableau + i));

		if(i + 1 == max) {
			printf("\r\n");
		} else {
			printf(" ");
		}
	}

	free(tableau);
}
