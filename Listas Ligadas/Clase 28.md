## DD

```c++
#include <iostream>

using namespace std;

class Nodo
{
public:
	int dato;
	Nodo* siguiente;

public:

	//Constructor

	Nodo(int dato)
	{
		this->dato = dato;
		this->siguiente = NULL;
	}
};

class LL
{
public:
	Nodo* head; //Apuntador en el nodo inicial (Nunca se mueve del nodo inicial)

public:

	//Constructor

	LL()
	{
		head = NULL;
	}

	//Metodos

	void insertaNodo(int dato)
	{
		//Creacion del Nodo y dirección del Nodo
		Nodo* nuevoNodo = new Nodo(dato);

		//Checar si la lista esta vacía
		if (head == NULL)
		{
			head = nuevoNodo;
			return;
		}

		//Viajar sobre la lista

		Nodo* temp = head;
		while (temp->siguiente != NULL)
		{
			temp = temp->siguiente;
		}

		temp->siguiente = nuevoNodo;
	}

	void imprimeLista()
	{
		Nodo* temp = head;

		if (head == NULL)
		{
			cout << "Lista Vacia" << endl;
		}

		while (temp != NULL)
		{
			cout << temp->dato << ", ";
			temp = temp->siguiente;
		}

		cout << endl;
	}

	void tamanoLista()
	{
		Nodo* temp = head;
		int tamano = 0;

		if (head == NULL)
		{
			cout << "Lista Vacia" << endl;
		}

		while (temp != NULL)
		{
			temp = temp->siguiente;
			tamano = tamano++;
		}

		cout << "El tamano es: " << tamano << endl;
	}

	void insertaNodoInicio(int dato)
	{
		Nodo* nuevoNodo = new Nodo(dato);

		if (head == NULL)
		{
			head = nuevoNodo;
			return;
		}

		Nodo* temp = head;
		head = nuevoNodo;

		nuevoNodo->siguiente = temp;
	}

	void borraNodoInicio()
	{
		if (head == NULL)
		{
			cout << "Lista vacia" << endl;
		}

		if (head != NULL and head->siguiente == NULL)
		{
			head = NULL;
			return;
		}

		else
		{
			head = head->siguiente;
			return;
		}
	}

	bool vacia() //Valida si la lista es vacía
	{
		Nodo* temp = head;

		if (head = NULL) 
		{
			return true;
		}

		else
		{
			return false;
		}
	}

	void encontrar(int dato)
	{
		Nodo* temp = head;
		bool encontrado = false;

		while (temp != NULL)
		{
			if (temp->dato = dato)
			{
				encontrado = true;
				cout << "Elemento encontrado" << endl;
				return;
			}

			if (temp->siguiente == NULL and not(encontrado))
			{
				cout << "Elemento no econtrado" << endl;
				return;
			}
			temp = temp->siguiente;
		}
	}
};

int main()
{
	LL lista;

	cout << boolalpha;
	cout << lista.vacia() << endl;

	lista.insertaNodo(5);
	lista.insertaNodo(4);
	lista.insertaNodo(3);
	lista.insertaNodoInicio(25);
	lista.imprimeLista();
	lista.tamanoLista();

	lista.borraNodoInicio();
	lista.imprimeLista();

	lista.encontrar(4);
}
```
