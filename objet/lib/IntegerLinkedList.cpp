#include <stdlib.h>
#include <stdio.h>
#include "IntegerLinkedList.h"

IntegerLinkedList::IntegerLinkedList(int value) {
	this->value = value;
	next = NULL;
}

IntegerLinkedList::~IntegerLinkedList() {
	if(next != NULL) {
		delete next;
		next = NULL;
	}
}

void IntegerLinkedList::pushback(int v) {
	if(next == NULL) {
		next = new IntegerLinkedList(v);
	} else {
		next->pushback(v);
	}
}

int IntegerLinkedList::at(int i) {
	if(i == 0) {
		return value;
	} else {
		if(next != NULL) {
			return next->at(i - 1);
		} else {
			return 0;
		}
	}
}

void IntegerLinkedList::popback() {
	if(next == NULL) {
		return;
	} else {
		if(next->next == NULL) {
			delete next;
			next = NULL;
		} else {
			next->popback();
		}
	}
}

int IntegerLinkedList::nb() {
	if(next == NULL) {
		return 1;
	} else {
		return 1 + next->nb();
	}
}

int IntegerLinkedList::front() {
	return at(1);
}

int IntegerLinkedList::back() {
	return at(nb());
}

void IntegerLinkedList::set(int i, int v) {
	if(i >= nb() || i < 0) return;
	if(i == 0) {
		value = v;
	} else {
		next->set(i - 1, v);
	}
}

void IntegerLinkedList::display() {
	printf("%d", value);
	if(next == NULL) {
		printf("\r\n");
	} else {
		printf(", ");
		next->display();
	}
}

