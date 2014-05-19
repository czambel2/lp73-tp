#include "IntegerContainer.h"

class IntegerArray: public IntegerContainer {
	protected:
		int *t;
		int nb;
	
	public:
		IntegerArray();
		~IntegerArray();
		void pushback(int v);
		int at(int i);
		void clear();
		void popback();
		int front();
		int back();
		void set(int i, int v);
		void display();
};

