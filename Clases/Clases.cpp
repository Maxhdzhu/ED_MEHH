#include <iostream>
#include <vector>

using namespace std;
using namespace std;

//Clases (class)

class Alumno {

	//Atributos

public:

	int numCuenta;
	string nombreCompleto;
	int materiasCursadas;
	int materiasCursando;
	int materiasPorCursar;

	//Constructor

public:

	Alumno() {
	
		this->numCuenta = 0;
		this->nombreCompleto = "";
	}

	Alumno(int nc, string nombre, int mCursadas, int mCursando, int mPorCursar) {
		this->numCuenta = nc;
		this->nombreCompleto = nombre;
		this->materiasCursadas = mCursadas;
		this->materiasCursando = mCursando;
		this->materiasPorCursar = mPorCursar;
	}

	//Getters

	int getNumCuenta() {
		return this->numCuenta;
	}

	string getNombre() {
		return this->nombreCompleto;
	}

	int getMateriasCursadas() {
		return this->materiasCursadas;
	}

	int getMateriasCursando() {
		return this->materiasCursando;
	}

	int getMateriasPorCursar() {
		return this->materiasPorCursar;
	}

	//Setters

	void setNumCuenta(int nc) {
		this->numCuenta = nc;
	}

	void setNombreCompleto(string nombre){
		this->nombreCompleto = nombre;
	}

	void setMateriasCursadas(int matcurs) {
		this->materiasCursadas = matcurs;
	}

	void setMateriasCursando(int matcursnd) {
		this->materiasCursando = matcursnd;
	}

	void setMateriasPorCursar(int matpcurs) {
		this->materiasPorCursar = matpcurs;
	}	

};



int main()
{
	/*
	Alumno alumno1();
	Alumno alumno2(12345, "Max Hernandez");

	cout << alumno2.numCuenta << endl;
	cout << alumno2.nombreCompleto << endl;
	*/

	/*
	Alumno max;
	max.setNombreCompleto("Max Hernandez");
	max.setNumCuenta(335000240);

	max.setMateriasCursadas(25);
	max.setMateriasCursando(5); 
	max.setMateriasPorCursar(30);

	cout << max.getNombre() << endl;
	cout << max.getNumCuenta() << endl;

	cout << max.getMateriasCursadas() << endl;
	cout << max.getMateriasCursando() << endl;
	cout << max.getMateriasPorCursar() << endl;
	*/

	Alumno estudiante;

	vector<Alumno> alumnos;

	int nc, mpc, mc, mcursadas;
	string nombre;

	//#Alumnos a dar de alta
	
	int numAlumnos;

	cout << "Cuantos alumnos: ";
	cin >> numAlumnos;

	//Ciclo

	while (numAlumnos > 0) {
		//Pregunta por los valores
		//Para cada alumno

		Alumno::Alumno(nc, nombre, mc, mcursadas, mpc);
		alumnos.push_back(estudiante);

		numAlumnos--;
	}
	

}
