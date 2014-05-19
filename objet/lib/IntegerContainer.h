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

class IntegerContainer {
	protected:
		int *t;
		int nb;
	
	public:
		virtual void pushback(int v) = 0;
		virtual int at(int i) = 0;
		virtual void popback() = 0;
		virtual int front() = 0;
		virtual int back() = 0;
		virtual void set(int i, int v) = 0;
		virtual void display() = 0;
};

