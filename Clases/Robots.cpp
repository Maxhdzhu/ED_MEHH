#include <iostream>
#include <vector>

using namespace std;

//Variables Globales

//Class

class Robot
{
public:
	//Atributos
	string articulacion;
	string uso;
	string tamano;

public:

	//Constructor

	Robot(const string& articulacion, const string& uso, const string& tamano)
		: articulacion(articulacion), uso(uso), tamano(tamano)
	{
	}

	//Getters

	string getArticulacion()
		const 
	{
		return articulacion;
	}

	string getUso()
		const
	{
		return uso;
	}

	string getTamano()
		const
	{
		return tamano;
	}


	//Setters

	void setArticulacion(string &articulacion) 
	{
		this->articulacion = articulacion;
	}

	void setUso(string &uso)
	{
		this->uso = uso;
	}

	void setTamano(string& tamano) 
	{
		this->tamano = tamano;
	}

	//Funciones

	void imprimeDatos() const 
	{
		cout << "Articulacion: " << articulacion << endl;
		cout << "Uso: " << uso << endl;
		cout << "Tamano: " << tamano << endl;
	}
};



int main()
{
	//Vector

	vector<Robot> robots;

	//Crea robot

	robots.emplace_back("Brazos", "Volador", "Grande");

	//Mostrar informacion

	for (int i = 0; i < robots.size(); i++)
	{
		robots[i].imprimeDatos();
	}
}