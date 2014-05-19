#include "IntegerContainer.h"

class IntegerLinkedList: public IntegerContainer {
	protected:
		int value;
		IntegerLinkedList *next;
	
	public:
		IntegerLinkedList(int value);
		~IntegerLinkedList();
		void pushback(int v);
		int at(int i);
		void popback();
		int nb();
		int front();
		int back();
		void set(int i, int v);
		void display();
};

