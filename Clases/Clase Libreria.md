## Libreria

```c++
#include <iostream>

using namespace std;

int main()
{

}
```

## Materias

```c++
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Material
{
protected:
	string id;
	string titulo;
	string genero;
	string tipo;
	double duracion;
	string region;
	vector<string> actores;
	vector<string> directores;
	int cantidad;
	bool referenciaLimitada;

public:
	//Constructor
	Material(string id, string titulo, string genero, string tipo, double duracion, vector<string> actores, vector<string> directores, string region, int cantidad, bool referenciaLimitada)
		: id(id), titulo(titulo),genero(genero),tipo(tipo),duracion(duracion), actores(actores), directores(directores), region(region),cantidad(cantidad),referenciaLimitada(referenciaLimitada)
	{}

	//Getters
	string getId() const { return id; }
	string getTitulo() const { return titulo; }
	string getGenero() const { return genero; }
	string getTipo() const { return tipo; }
	double getDuracion() const { return duracion; }
	string getRegion() const { return region; }
	int getCantidad() const { return cantidad; }
	bool getReferenciaLimitada() const { return referenciaLimitada; }

	vector<string> getActores() const { return actores; }
	vector<string> getDirectores() const { return directores; }

	//Setters

	void setId(const string& id) { this->id = id; }
	void setTitulo(const string& titulo) { this->titulo = titulo; }
	void setGenero(const string& genero) { this->genero = genero; }
	void setTipo(const string& tipo) { this->tipo = tipo; }
	void setDuracion(double duracion) { this->duracion = duracion; }
	void setRegion(const string& region) { this->region = region; }
	void setCantidad(int cantidad) { this->cantidad = cantidad; }
	void setReferenciaLimitada(bool referenciaLimitada) { this->referenciaLimitada = referenciaLimitada; }

	void setActores(const vector<string>& actores) { this->actores = actores; }
	void setDirectores(const vector<string>& directores) { this->directores = directores; }


};
```

## Libro

```c++
#include <iostream>
#include <vector>
#include <string>
#include "Material.cpp"

using namespace std;


class Libro : public Material  //Herencia
{
public:
	Libro(string id, string titulo, string genero, string tipo, int duracion, vector<string> actores, vector<string> directores, string region, int cantidad, bool referenciaLimitada)
		: Material(id, titulo, genero, tipo, duracion, actores, directores, region, cantidad, referenciaLimitada)
	{}

};

```
