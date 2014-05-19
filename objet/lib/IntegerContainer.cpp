#include <stdlib.h>
#include <stdio.h>
#include "IntegerContainer.h"

IntegerContainer::IntegerContainer() {
	t = new int[0];
	nb = 0;
}

IntegerContainer::~IntegerContainer() {
	delete[] t;
}

void IntegerContainer::pushback(int v) {
	nb++;

	int *newArray = new int[nb];
	int i;
	
	for(i = 0; i < nb - 1; i++) {
		newArray[i] = t[i];
	}

	newArray[nb - 1] = v;

	delete[] t;
	t = newArray;
}

int IntegerContainer::at(int i) {
	if(i < nb) {
		return t[i];
	} else {
		return 0;
	}
}

void IntegerContainer::clear() {
	delete[] t;
	nb = 0;
}

void IntegerContainer::popback() {
	nb--;

	int *newArray = new int[nb];
	int i;

	for(i = 0; i < nb; ++i) {
		newArray[i] = t[i];
	}

	delete[] t;
	t = newArray;
}

int IntegerContainer::front() {
	return at(1);
}

int IntegerContainer::back() {
	return at(nb);
}

void IntegerContainer::set(int i, int v) {
	if(i >= nb || i < 0) return;
	t[i] = v;
}

void IntegerContainer::display() {
	int i;
	for(i = 0; i < nb; ++i) {
		printf("%d", t[i]);
		if(i + 1 == nb) {
			printf("\r\n");
		} else {
			printf(", ");
		}
	}
}

