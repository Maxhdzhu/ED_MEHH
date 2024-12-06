 ```c++
#include <iostream>

using namespace std;

class Nodo
{
public:
	int dato;
	Nodo* siguiente;
	//Constructor
public:
	Nodo(int dato)
	{
		this->dato = dato;
		this->siguiente = NULL;
	}
};

class LL
{
public:
	Nodo* head; // apuntador en el nodo inicial
public:
	LL()
	{
		head = NULL;
	}
	void insertaNodo(int dato)
	{
		// Creacion del Nodo y direccion
		Nodo* nuevoNodo = new Nodo(dato);
		// Checar esta vacía 
		if (head == NULL)
		{
			head = nuevoNodo;
			return;
		}
		// viajar sobre la lista
		Nodo* temp = head;
		while (temp->siguiente != NULL)
		{
			temp = temp->siguiente;
		}
		temp->siguiente = nuevoNodo;

	}
	void insertaInicio(int dato)
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

	void borrarNodoInicio()
	{
		if (vacia())
		{
			cout << "Lista vacia " << endl;
			return;
		}
		if (head != NULL and
			head->siguiente == NULL)
		{
			head = NULL;
			cout << "Lista vacia " << endl;
			return;
		}
		else
		{
			head = head->siguiente;
			return;
		}
	}

	void encontrar(int dato)
	{
		Nodo* temp = head;
		bool encontrado = false;
		while (temp != NULL)
		{
			if (temp->dato == dato)
			{
				encontrado = true;
				cout << "elemento encontrado " << endl;
				return;
			}
			if (temp->siguiente == NULL and
				not(encontrado))
			{
				cout << "elemento no encontrado"
					<< endl;
				return;
			}
			temp = temp->siguiente;
		}
	}

	bool vacia()
	{
		// valida si la lista es vacia
		Nodo* temp = head;
		if (head == NULL)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	void borrarNodo(int nodoaBorrar)
	{
		Nodo* temp0 = head;
		Nodo* temp1 = NULL;
		int contador = 0;

		if (temp0 == NULL)
		{
			cout << "Lista vacia" << endl;
			return;
		}

		else
		{
			//Implementa una funcion contar lista

			while (temp0 != NULL)
			{
				temp0 = temp0->siguiente;
				contador++;
			}

			cout << "Contador: " << contador << endl;

			if (contador > nodoaBorrar)
			{
				temp0 = head;
				temp1 = NULL;

				if (nodoaBorrar == 1)
				{
					//Borra primer elemento de la lista

					head = head->siguiente;
					delete temp0;
					return;
				}

				cout << "Valor nodo a Borrar: " << nodoaBorrar << endl;

				while (nodoaBorrar > 1)
				{
					temp1 = temp0;
					temp0 = temp0->siguiente;
					nodoaBorrar--;
				}

				cout << nodoaBorrar << endl;
				cout << "temp0 datos: " << temp0->dato << endl;
				cout << "temp1 datos: " << temp1->dato << endl;
				cout << "temp0 datos siguiente: " << temp0->siguiente->dato << endl;

				temp1->siguiente = temp0->siguiente;
				cout << "temp1 datos: " << temp1->siguiente->dato << endl;
				cout << "temp0 datos: " << temp1->dato << endl;

				delete temp0;
			}
		}
	}

	void borraNodoFin()
	{
	}

	void borrarNodoValor(int valor)
	{

	}

	void imprimeLista()
	{
		Nodo* temp = head;
		if (head == NULL)
		{
			cout << "Lista vacia" << endl;
		}
		while (temp != NULL)
		{
			cout << temp->dato << ", ";
			temp = temp->siguiente;
		}
		cout << endl;
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
	cout << lista.vacia() << endl;
	lista.insertaInicio(25);
	lista.imprimeLista();
	lista.borrarNodo(3);
	lista.imprimeLista();
	lista.borraNodoFin();
	lista.imprimeLista();
}
```
