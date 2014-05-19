#include <stdlib.h>
#include <stdio.h>
#include "lib/IntegerLinkedList.h"

int main(int argc, char **argv) {
	IntegerLinkedList* ill = new IntegerLinkedList(9);

	ill->display();
	ill->pushback(5);
	ill->pushback(2);
	ill->pushback(8);
	ill->display();
	ill->set(1, 1);
	ill->display();
	printf(":%d\r\n", ill->at(2));
	ill->popback();
	ill->pushback(3);
	ill->display();
	delete ill;

	return 0;
}
