## Usuarios.h
```c++
#ifndef USUARIOS_H
#define USUARIOS_H

#include <string>
using namespace std;

class Usuario {
protected:
    string nombre;
    string apellidoPaterno;
    string apellidoMaterno;
    int numUsuario;
    bool activo;

public:
    // Constructor

    Usuario(string nombre, string apellidoPaterno, string apellidoMaterno, int numUsuario, bool activo)
        : nombre(nombre), apellidoPaterno(apellidoPaterno), apellidoMaterno(apellidoMaterno), numUsuario(numUsuario), activo(activo) {}

    // Getters

    string getNombre() const { return nombre; }
    string getApellidoPaterno() const { return apellidoPaterno; }
    string getApellidoMaterno() const { return apellidoMaterno; }
    int getNumUsuario() const { return numUsuario; }
    bool getActivo() const { return activo; }

    // Setters
    
    void setNombre(const string& nombre) { this->nombre = nombre; }
    void setApellidoPaterno(const string& apellidoPaterno) { this->apellidoPaterno = apellidoPaterno; }
    void setApellidoMaterno(const string& apellidoMaterno) { this->apellidoMaterno = apellidoMaterno; }
    void setNumUsuario(const int numUsuario) { this->numUsuario = numUsuario; }
    void setActivo(const bool activo) { this->activo = activo; }
};

#endif
#pragma once
```

## Profesor

```c++
#include <iostream>
#include <vector>
#include <string>
#include "Usuarios.h"

using namespace std;

class Profesor :public Usuario
{
private:
	int numEmpleado;

public:
	// Constructor

	Profesor(string nombre, string apellidoPaterno, string apellidoMaterno, int numUsuario, bool activo,
		int numEmpleado
	)
		: Usuario(nombre, apellidoPaterno, apellidoMaterno, numUsuario, activo),
		numEmpleado(numEmpleado)
	{}

	// Getters
	
	int getNumEmpleado() const { return numEmpleado; }

	// Setters 

	void setNumEmpleado(const int numEmpleado) { this->numEmpleado = numEmpleado; }
};
```

## Alumno

```c++
#include <iostream>
#include <vector>
#include <string>
#include "Usuarios.h"

using namespace std;

class Alumno :public Usuario
{
private:
	int numeroDeCuenta;

public:
	// Constructor

	Alumno(string nombre, string apellidoPaterno, string apellidoMaterno, int numUsuario, bool activo,
		int numeroDeCuenta
	)
		: Usuario(nombre, apellidoPaterno, apellidoMaterno, numUsuario, activo),
		numeroDeCuenta(numeroDeCuenta)
	{}

	// Getters

	int getNumeroDeCuenta() const { return numeroDeCuenta; }

	// Setters 

	void setNumeroDeCuenta(const int numeroDeCuenta) { this->numeroDeCuenta = numeroDeCuenta; }
};
```
