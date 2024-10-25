#include <iostream>
#include <vector>

using namespace std;

//Variables	Globales
int numMaterias;

//Class

class Materias
{
public:
	string materia;
	double calificacion;
};

class Alumno
{
public:
	string nombreCompleto;
	int nc;

	vector<Materias> v2;

	//Funciones o Metodos
public:

	//(Alumno& alumno) (tipo& objeto)

	static void altaAlumno(Alumno& alumno)
	{
		Materias mat;

		cout << "Nombre: ";
		cin >> alumno.nombreCompleto;
		cout << endl;
		cout << "Numero de Cuenta: ";
		cin >> alumno.nc;
		cout << endl;
		cout << "Cuantas materias tiene el alumno: ";
		cin >> numMaterias;
		cout << endl;

		for (int i = 0; i < numMaterias; i++) {
			cout << "Nombre Materia: ";
			cin >> mat.materia;
			cout << endl;
			cout << "Calificacion: ";
			cin >> mat.calificacion;
			cout << endl;

			alumno.v2.push_back(mat);
		}
		v1.push_back(alumno);
	}

	static void imprimeDatos(vector<Alumno> va)
	{
		for (int i = 0; i <= va.size(); i++) {
			cout << "=================" << endl;
			cout << "Nombre Completo: " << va[i].nombreCompleto << endl;
			cout << "Numero de Cuenta: " << va[i].nc << endl;

			for (int j = 0; j <= va[i].v2.size(); j++) {
				cout << "Nombre Materia: " << va[i].v2[j].materia;
				cout << endl;
				cout << "Calificacion: " << va[i].v2[j].calificacion;
				cout << endl;
			}
			cout << "=================" << endl;
		}
	}
};

int main()
{
	Alumno temp;

	//Vector

	vector<Alumno> v1;

	int numAlumnos;

	cout << "Cuantos alumnos se van a dar de alta: ";
	cin >> numAlumnos;
	cout << endl;

	for (int i = 0; i <= numAlumnos; i++) {
		Alumno::altaAlumno(temp);
	}
}

