#include <stdio.h>

// Affiche la liste des entiers de 1 à 100
// Si multiple de 3 : ajoute "fizz"
// Si multiple de 5 : ajoute "buzz"

#define MIN 1
#define MAX 100

int main(int argc, char **argv) {
	int i;
	for(i = MIN; i <= MAX; ++i) {
		printf("%3d", i);
		if(i % 3 == 0) printf(" fizz");
		if(i % 5 == 0) printf(" buzz");
		printf("\r\n");
	}
	return 0;
}
