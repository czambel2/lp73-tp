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

