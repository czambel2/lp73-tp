#include <stdio.h>

int main(int argc, char *argv[]) {
	if(argc < 2) {
		printf("usage: %s name\r\n", *argv);
		return -1;
	}
	printf("Bonjour, %s !\r\n", argv[1]);
	return 0;
}
