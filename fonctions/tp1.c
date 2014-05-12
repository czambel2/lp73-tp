#include <stdio.h>

int main(int argc, char *argv[]) {
	char nom[100];
	printf("Bienvenue, entrez votre nom : ");
	scanf("%s", nom);
	getchar();
	printf("Bonjour, %s !\r\n", nom);
	return 0;
}
