/**
 * Écrire une classe qui définit un conteneur d'entiers, qui contient les
 *  méthodes suivantes :
 * - void pushback(int v) pour ajouter un entier à la fin de la structure,
 * - int at(int i) pour accéder au i-ième élément,
 * - void clear() pour vider la structure,
 * - void popback() pour supprimer le dernier élément de la structure,
 * - int front() pour accéder au premier élément,
 * - int back() pour accéder au dernier élément,
 * - void set(int i, int v) pour modifier le i-ième élément.
 */

class IntegerLinkedList {
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

