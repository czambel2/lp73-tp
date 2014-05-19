#include <stdlib.h>
#include <stdio.h>
#include "IntegerArray.h"

IntegerArray::IntegerArray() {
	t = new int[0];
	nb = 0;
}

IntegerArray::~IntegerArray() {
	delete[] t;
}

void IntegerArray::pushback(int v) {
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

int IntegerArray::at(int i) {
	if(i < nb) {
		return t[i];
	} else {
		return 0;
	}
}

void IntegerArray::clear() {
	delete[] t;
	nb = 0;
}

void IntegerArray::popback() {
	nb--;

	int *newArray = new int[nb];
	int i;

	for(i = 0; i < nb; ++i) {
		newArray[i] = t[i];
	}

	delete[] t;
	t = newArray;
}

int IntegerArray::front() {
	return at(1);
}

int IntegerArray::back() {
	return at(nb);
}

void IntegerArray::set(int i, int v) {
	if(i >= nb || i < 0) return;
	t[i] = v;
}

void IntegerArray::display() {
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

