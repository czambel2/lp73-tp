#include <pthread.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void *callback(void* n) {
	sleep(*((int*) n));
	printf("...\r\n");
	return NULL;
}

int main(int argc, char **argv) {
	pthread_t thread;
	int temps = 2;

	pthread_create(&thread, NULL, callback, (void*) &temps);
	printf("Hello\r\n");

	pthread_join(thread, NULL);

	return 0;
}
