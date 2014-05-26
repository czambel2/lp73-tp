#include <cstdlib>
#include <iostream>

template <typename T>
class ItemLinkedList {
	protected:
		T value;
		ItemLinkedList<T> *next;
	
	public:
		ItemLinkedList(T value) {
			this->value = value;
			next = NULL;
		}
		
		~ItemLinkedList() {
			if(next != NULL) {
				delete next;
				next = NULL;
			}
		}

		void pushback(T v) {
			if(next == NULL) {
				next = new ItemLinkedList<T>(v);
			} else {
				next->pushback(v);
			}
		}
		
		T at(int i) {
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
		
		void popback() {
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

		int nb() {
			if(next == NULL) {
				return 1;
			} else {
				return 1 + next->nb();
			}
		}
		
		T front() {
			return at(1);
		}
		
		T back() {
			return at(nb());
		}

		void set(int i, T v) {
			if(i >= nb() || i < 0) return;
			if(i == 0) {
				value = v;
			} else {
				next->set(i - 1, v);
			}
		}
		
		void display() {
			std::cout << value;
			if(next == NULL) {
				std::cout << std::endl;
			} else {
				std::cout << ", ";
				next->display();
			}
		}
};

