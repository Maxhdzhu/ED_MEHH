  ``` c++
#include <iostream>

using namespace std;

//Structs

struct Alumno {
public:
	int cuenta;
	string nombre;
	string ap;

public:
	static void altaAlumno() {
		Alumno objeto;
		cout << "# de Cuenta: ";
		cin >> objeto.cuenta;
		cout << endl;
		cout << "Nombre: ";
		cin >> objeto.nombre;
		cout << endl;
		cout << "Apellido Paterno: ";
		cin >> objeto.ap;
		cout << endl;
		imprimeDatos(objeto);
	}

	static void imprimeDatos(Alumno objeto) {
		cout << "Nombre: " << objeto.nombre << endl;
		cout << "Apellido Paterno: " << objeto.ap << endl;
		cout << "# de Cuenta: " << objeto.cuenta << endl;
	}
};

int main() {

	Alumno::altaAlumno();

}

  ``` 
