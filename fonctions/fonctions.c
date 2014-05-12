#include "fonctions.h"

int factorielle(int n) {
	if(n == 1) {
		return 1;
	} else {
		return n * factorielle(n - 1);
	}
}

int carre(int n) {
	return n * n;
}

void factorielle2(int n, int *ret) {
	int i;
	*ret = 1;

	for(i = 1; i <= n; i++) {
		*ret = *ret * i;
	}
}

