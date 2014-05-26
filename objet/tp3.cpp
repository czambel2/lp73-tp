#include <cstdlib>
#include <cstdio>
#include <iostream>
#include "lib/ItemLinkedList.cpp"

int main(int argc, char **argv) {
	ItemLinkedList<int>* list = new ItemLinkedList<int>(9);

	list->display();
	list->pushback(5);
	list->pushback(2);
	list->pushback(8);
	list->display();
	list->set(1, 1);
	list->display();
	std::cout << ":" << list->at(2) << std::endl;
	list->popback();
	list->pushback(3);
	list->display();
	delete list;
	
	ItemLinkedList<std::string>* list2 = new ItemLinkedList<std::string>("Hello");

	list2->display();
	list2->pushback("world");
	list2->pushback("foo");
	list2->pushback("bar");
	list2->display();
	list2->set(1, "earth");
	list2->display();
	std::cout << ":" << list->at(2) << std::endl;
	list2->popback();
	list2->pushback("go");
	list2->display();
	delete list2;

	return 0;
}
