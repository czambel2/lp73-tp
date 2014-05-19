#include <stdlib.h>
#include <stdio.h>
#include "lib/IntegerContainer.h"

int main(int argc, char **argv) {
	IntegerContainer* ic = new IntegerContainer();

	ic->display();
	ic->pushback(5);
	ic->pushback(2);
	ic->pushback(8);
	ic->display();
	ic->set(1, 1);
	ic->display();
	printf(":%d\r\n", ic->at(2));
	ic->popback();
	ic->pushback(3);
	ic->display();
	delete ic;

	return 0;
}
