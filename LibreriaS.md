## Prestamo
```c++
#include <iostream>
#include <iomanip>
#include <ctime>
#include <sstream>
#include <vector>
#include <string>
#include "Usuarios.h"
#include "Material.h"

using namespace std;

class Prestamo :public Usuario, Material
{
private:
    int idPrestamo;
    string fechaInicio;
    string fechaFin;
    bool devuelto;
    double multa;
    string estadoPrestamo;


public:
    // Constructor

    Prestamo(string nombre, string apellidoPaterno, string apellidoMaterno, int numUsuario, bool activo,
        string id, string titulo, string genero, string tipo, string region, int cantidad, bool referenciaLimitada, int annio,
        int idPrestamo,
        string fechaInicio,
        string fechaFin,
        bool devuelto,
        double multa,
        string estadoPrestamo
    )
        : Usuario(nombre, apellidoPaterno, apellidoMaterno, numUsuario, activo),
        Material(id, titulo, genero, tipo, region, cantidad, referenciaLimitada, annio),
        idPrestamo(idPrestamo),
        fechaInicio(fechaInicio),
        fechaFin(fechaFin),
        devuelto(devuelto),
        multa(multa),
        estadoPrestamo(estadoPrestamo)
    {
    }

    // Getters

    int getIdPrestamo() const { return idPrestamo; }
    string getFechaInicio() const { return fechaInicio; }
    string getFechaFin() const { return fechaFin; }
    bool getDevuelto() const { return devuelto; }
    double getMulta() const { return multa; }
    string getEstadoPrestamo() const { return estadoPrestamo; }

    // Setters 

    void setIdPrestamo(const int idPrestamo) { this->idPrestamo = idPrestamo; }
    void setFechaInicio(const string& fechaInicio) { this->fechaInicio = fechaInicio; }
    void setFechaFin(const string& fechaFin) { this->fechaFin = fechaFin; }
    void setDevuelto(const bool devuelto) { this->devuelto = devuelto; }
    void setMulta(const double multa) { this->multa = multa; }
    void setEstadoPrestamo(const string& estadoPrestamo) { this->estadoPrestamo = estadoPrestamo; }

    //Funciones

    static void ingresarDatosPrestamos(vector<Prestamo>& prestamos) {
        string nombre, apellidoPaterno, apellidoMaterno, fechaInicio, fechaFin, estadoPrestamo, id, titulo, genero, tipo, region;
        int numUsuario, idPrestamo, cantidad, annio;
        bool devuelto, referenciaLimitada;
        double multa;

        cout << "Ingrese el Nombre del usuario: ";
        cin >> nombre;
        cout << endl;
        cout << "Ingrese el Apellido Paterno: ";
        cin >> apellidoPaterno;
        cout << endl;
        cout << "Ingrese el Apellido Materno: ";
        cin >> apellidoMaterno;
        cout << endl;
        cout << "Ingrese el Numero de Usuario: ";
        cin >> numUsuario;
        cout << endl;

        cout << "Ingrese el ID del Material a Prestamo: ";
        cin >> id;
        cout << endl;

        cout << "Ingrese el Título del Material a Prestamo: ";
        cin >> titulo;
        cout << endl;

        cout << "Ingrese el género: ";
        cin >> genero;
        cout << endl;

        cout << "Ingrese el tipo: ";
        cin >> tipo;
        cout << endl;

        cout << "Ingrese la región: ";
        cin >> region;
        cout << endl;

        cout << "Ingrese la cantidad: ";
        cin >> cantidad;
        cout << endl;

        cout << "¿Es de referencia limitada? (1 para sí, 0 para no): ";
        cin >> referenciaLimitada;
        cout << endl;

        cout << "Ingrese el año del Material: ";
        cin >> annio;
        cout << endl;


        cout << "Ingrese el ID del Prestamo: ";
        cin >> idPrestamo;
        cout << endl;
        cout << "Ingrese la Fecha de Inicio (YYYY-MM-DD): ";
        cin >> fechaInicio;
        cout << endl;
        cout << "Ingrese la Fecha de Fin (YYYY-MM-DD): ";
        cin >> fechaFin;
        cout << endl;

        cout << "¿El material fue devuelto? (1 para sí, 0 para no): ";
        cin >> devuelto;
        cout << endl;
        cout << "Ingrese el estado del prestamo (Activo, Finalizado): ";
        cin >> estadoPrestamo;
        cout << endl;

        multa = 0.0; 

        prestamos.emplace_back(nombre, apellidoPaterno, apellidoMaterno, numUsuario, true, id, titulo, genero, tipo, region, cantidad, referenciaLimitada, annio,
            idPrestamo, fechaInicio, fechaFin, devuelto, multa, estadoPrestamo);
    }

    static void imprimirDatosPrestamo(const vector<Prestamo>& prestamos) {
        for (const auto& prestamo : prestamos) {
            cout << "---------------------------------" << endl;
            cout << "ID del Prestamo: " << prestamo.getIdPrestamo() << endl;
            cout << "Nombre del Usuario: " << prestamo.getNombre() << " " << prestamo.getApellidoPaterno() << " " << prestamo.getApellidoMaterno() << endl;
            cout << "Numero de Usuario: " << prestamo.getNumUsuario() << endl;
            cout << "Titulo del Material: " << prestamo.getTitulo() << endl;
            cout << "ID del Material: " << prestamo.getId() << endl;
            cout << "Fecha de Inicio: " << prestamo.getFechaInicio() << endl;
            cout << "Fecha de Fin: " << prestamo.getFechaFin() << endl;
            cout << "Devuelto: " << (prestamo.getDevuelto() ? "Sí" : "No") << endl;
            cout << "Multa: $" << fixed << setprecision(2) << prestamo.getMulta() << endl;
            cout << "Estado del Prestamo: " << prestamo.getEstadoPrestamo() << endl;
            cout << "---------------------------------" << endl;
        }
    }
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
	{
	}

	// Getters

	int getNumeroDeCuenta() const { return numeroDeCuenta; }

	// Setters 

	void setNumeroDeCuenta(const int numeroDeCuenta) { this->numeroDeCuenta = numeroDeCuenta; }

    //Funciones

    static void ingresarDatosAlumno(vector<Alumno>& alumno) {
        string nombre, apellidoPaterno, apellidoMaterno;
        int numUsuario, numeroDeCuenta;
        bool activo;

        cout << "Ingrese el Nombre: ";
        cin >> nombre;
        cout << endl;

        cout << "Ingrese el Apellido Paterno: ";
        cin >> apellidoPaterno;
        cout << endl;

        cout << "Ingrese el Apellido Materno: ";
        cin >> apellidoMaterno;
        cout << endl;

        cout << "Ingrese el numero de usuario (Biblioteca): ";
        cin >> numUsuario;
        cout << endl;

        cout << "¿El alumno esta activo (1 para sí, 0 para no)?: ";
        cin >> activo;
        cout << endl;

        cout << "Ingrese el numero de cuenta: ";
        cin >> numeroDeCuenta;
        cout << endl;

        alumno.emplace_back(nombre, apellidoPaterno, apellidoMaterno, numUsuario, activo, numeroDeCuenta);
    }

    static void imprimirDatosAlumno(const vector<Alumno>& alumno) {
        for (const auto& alumno : alumno) {
            cout << "---------------------------------" << endl;
            cout << "Nombre: " << alumno.getNombre() << endl;
            cout << "Apellido Paterno: " << alumno.getApellidoPaterno() << endl;
            cout << "Apellido Materno: " << alumno.getApellidoMaterno() << endl;
            cout << "Numero de Usuario: " << alumno.getNumUsuario() << endl;
            cout << "¿Alumno Activo?: " << (alumno.getActivo() ? "Sí" : "No") << endl;
            cout << "Numero de Cuenta: " << alumno.getNumeroDeCuenta() << endl;
            cout << "---------------------------------" << endl;
        }
    }
};
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
	{
	}

	// Getters

	int getNumEmpleado() const { return numEmpleado; }

	// Setters 

	void setNumEmpleado(const int numEmpleado) { this->numEmpleado = numEmpleado; }

    //Funciones

    static void ingresarDatosProfesor(vector<Profesor>& profesor) {
        string nombre, apellidoPaterno, apellidoMaterno;
        int numUsuario, numEmpleado;
        bool activo;

        cout << "Ingrese el Nombre: ";
        cin >> nombre;
        cout << endl;

        cout << "Ingrese el Apellido Paterno: ";
        cin >> apellidoPaterno;
        cout << endl;

        cout << "Ingrese el Apellido Materno: ";
        cin >> apellidoMaterno;
        cout << endl;

        cout << "Ingrese el numero de usuario (Biblioteca): ";
        cin >> numUsuario;
        cout << endl;

        cout << "¿El empleado esta activo (1 para sí, 0 para no)?: ";
        cin >> activo;
        cout << endl;

        cout << "Ingrese el numero de Empleado: ";
        cin >> numEmpleado;
        cout << endl;

        profesor.emplace_back(nombre, apellidoPaterno, apellidoMaterno, numUsuario, activo, numEmpleado);
    }

    static void imprimirDatosProfesor(const vector<Profesor>& profesor) {
        for (const auto& profesor : profesor) {
            cout << "---------------------------------" << endl;
            cout << "Nombre: " << profesor.getNombre() << endl;
            cout << "Apellido Paterno: " << profesor.getApellidoPaterno() << endl;
            cout << "Apellido Materno: " << profesor.getApellidoMaterno() << endl;
            cout << "Numero de Usuario: " << profesor.getNumUsuario() << endl;
            cout << "¿Empleado Activo?: " << (profesor.getActivo() ? "Sí" : "No") << endl;
            cout << "Numero de Empleado: " << profesor.getNumEmpleado() << endl;
            cout << "---------------------------------" << endl;
        }
    }
};
```

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
        : nombre(nombre), apellidoPaterno(apellidoPaterno), apellidoMaterno(apellidoMaterno), numUsuario(numUsuario), activo(activo) {
    }

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

## Material.h
```c++
#ifndef MATERIAL_H
#define MATERIAL_H

#include <string>
using namespace std;

class Material {
protected:
    string id;
    string titulo;
    string genero;
    string tipo;
    string region;
    int cantidad;
    bool referenciaLimitada;
    int annio;

public:

    // Constructor
    Material(string id, string titulo, string genero, string tipo, string region, int cantidad, bool referenciaLimitada, int annio)
        : id(id), titulo(titulo), genero(genero), tipo(tipo), region(region), cantidad(cantidad), referenciaLimitada(referenciaLimitada), annio(annio) {
    }

    // Getters
    string getId() const { return id; }
    string getTitulo() const { return titulo; }
    string getGenero() const { return genero; }
    string getTipo() const { return tipo; }
    string getRegion() const { return region; }
    int getCantidad() const { return cantidad; }
    bool getReferenciaLimitada() const { return referenciaLimitada; }
    int getannio() const { return annio; }

    // Setters
    void setId(const string& id) { this->id = id; }
    void setTitulo(const string& titulo) { this->titulo = titulo; }
    void setGenero(const string& genero) { this->genero = genero; }
    void setTipo(const string& tipo) { this->tipo = tipo; }
    void setRegion(const string& region) { this->region = region; }
    void setCantidad(int cantidad) { this->cantidad = cantidad; }
    void setReferenciaLimitada(bool referenciaLimitada) { this->referenciaLimitada = referenciaLimitada; }
    void setAnnio(int annio) { this->annio = annio; }
};

#endif
#pragma once
```

## Pelicula
```c++
#include <iostream>
#include <vector>
#include <string>
#include "Material.h"
using namespace std;

class Pelicula :public Material
{
private:
	int duracion;
	vector<string> actores;
	vector<string> directores;

public:
	Pelicula(string id, string titulo, string genero, string tipo, string region, int cantidad, bool referenciaLimitada, int annio,
		int duracion,
		vector<string> actores,
		vector<string> directores)
		: Material(id, titulo, genero, tipo, region, cantidad, referenciaLimitada, annio),
		duracion(duracion),
		actores(actores),
		directores(directores)
	{
	}

	// Getters 
	int getDuracion() const { return duracion; }
	vector<string> getActores() const { return actores; }
	vector<string> getDirectores() const { return directores; }

	// Setters 
	void setDuracion(const int  duracion) { this->duracion = duracion; }
	void setActores(const vector<string>& actores) { this->actores = actores; }
	void setDirectores(const vector<string>& directores) { this->directores = directores; }

    //Funciones

    static void ingresarDatosPeliculas(vector<Pelicula>& pelicula) {
        string id, titulo, genero, tipo, region;
        int cantidad, annio, duracion;
        bool referenciaLimitada;
        vector<string> actores, directores;

        cout << "Ingrese el ID: ";
        cin >> id;
        cout << endl;

        cout << "Ingrese el título: ";
        cin >> titulo;
        cout << endl;

        cout << "Ingrese el género: ";
        cin >> genero;
        cout << endl;

        cout << "Ingrese el tipo: ";
        cin >> tipo;
        cout << endl;

        cout << "Ingrese la región: ";
        cin >> region;
        cout << endl;

        cout << "Ingrese la cantidad: ";
        cin >> cantidad;
        cout << endl;

        cout << "¿Es de referencia limitada? (1 para sí, 0 para no): ";
        cin >> referenciaLimitada;
        cout << endl;

        cout << "Ingrese el año: ";
        cin >> annio;
        cout << endl;

        int numActores;
        cout << "Ingrese la cantidad de actores: ";
        cin >> numActores;
        cout << endl;

        for (int i = 0; i < numActores; ++i) {
            cout << "Ingrese el nombre del actor " << (i + 1) << ": ";
            cin >> actores[i];
            cout << endl;
        }

        int numDirectores;
        cout << "Ingrese la cantidad de directores: ";
        cin >> numDirectores;
        cout << endl;

        for (int i = 0; i < numDirectores; ++i) {
            cout << "Ingrese el nombre del director " << (i + 1) << ": ";
            cin >> directores[i];
            cout << endl;
        }

        pelicula.emplace_back(id, titulo, genero, tipo, region, cantidad, referenciaLimitada, annio, duracion, actores, directores);
    }

    static void imprimirDatosPeliculas(const vector<Pelicula>& pelicula) {
        for (const auto& pelicula : pelicula) {
            cout << "---------------------------------" << endl;
            cout << "ID: " << pelicula.getId() << endl;
            cout << "Título: " << pelicula.getTitulo() << endl;
            cout << "Género: " << pelicula.getGenero() << endl;
            cout << "Tipo: " << pelicula.getTipo() << endl;
            cout << "Región: " << pelicula.getRegion() << endl;
            cout << "Cantidad: " << pelicula.getCantidad() << endl;
            cout << "¿Referencia Limitada?: " << (pelicula.getReferenciaLimitada() ? "Sí" : "No") << endl;
            cout << "Año: " << pelicula.getannio() << endl;

            cout << "Actores: ";
            for (const auto& cancion : pelicula.getActores()) {
                cout << cancion << ", ";
            }
            cout << endl;

            cout << "Directores: ";
            for (const auto& cancion : pelicula.getDirectores()) {
                cout << cancion << ", ";
            }
            cout << endl;

            cout << "---------------------------------" << endl;
        }
    }
};
```

## Musica
```c++
#include <iostream>
#include <vector>
#include <string>
#include "Material.h"
using namespace std;

class Musica :public Material
{
private:
	string artista;
	string album;
	vector<string> canciones;

public:
	Musica(string id, string titulo, string genero, string tipo, string region, int cantidad, bool referenciaLimitada, int annio,
		string artista,
		string album,
		vector<string> canciones) : Material(id, titulo, genero, tipo, region, cantidad, referenciaLimitada, annio),
		album(album), canciones(canciones), artista(artista) {
	}

	// Getters 
	string getArtista() const { return artista; }
	string getAlbum() const { return album; }
	vector<string> getCanciones() const { return canciones; }

	// Setters 
	void setArtista(const string& artista) { this->artista = artista; }
	void setAlbum(const string& album) { this->album = album; }
	void setCanciones(const vector<string>& canciones) { this->canciones = canciones; }

    //Funciones

    static void ingresarDatosMusica(vector<Musica>& musica) {
        string id, titulo, genero, tipo, region, artista, album;
        int cantidad, annio;
        bool referenciaLimitada;
        vector<string> canciones;

        cout << "Ingrese el ID: ";
        cin >> id;
        cout << endl;

        cout << "Ingrese el título: ";
        cin >> titulo;
        cout << endl;

        cout << "Ingrese el género: ";
        cin >> genero;
        cout << endl;

        cout << "Ingrese el tipo: ";
        cin >> tipo;
        cout << endl;

        cout << "Ingrese la región: ";
        cin >> region;
        cout << endl;

        cout << "Ingrese la cantidad: ";
        cin >> cantidad;
        cout << endl;

        cout << "¿Es de referencia limitada? (1 para sí, 0 para no): ";
        cin >> referenciaLimitada;
        cout << endl;

        cout << "Ingrese el año: ";
        cin >> annio;
        cout << endl;

        cout << "Ingrese el artista: ";
        cin >> artista;
        cout << endl;

        cout << "Ingrese el almbum: ";
        cin >> album;
        cout << endl;

        int numCanciones;
        cout << "Ingrese la cantidad de autores: ";
        cin >> numCanciones;
        cout << endl;

        for (int i = 0; i < numCanciones; ++i) {
            cout << "Ingrese el nombre de la canción " << (i + 1) << ": ";
            cin >> canciones[i];
            cout << endl;
        }

        musica.emplace_back(id, titulo, genero, tipo, region, cantidad, referenciaLimitada, annio, artista, album, canciones);
    }

    static void imprimirDatosMusica(const vector<Musica>& musica) {
        for (const auto& musica : musica) {
            cout << "---------------------------------" << endl;
            cout << "ID: " << musica.getId() << endl;
            cout << "Título: " << musica.getTitulo() << endl;
            cout << "Género: " << musica.getGenero() << endl;
            cout << "Tipo: " << musica.getTipo() << endl;
            cout << "Región: " << musica.getRegion() << endl;
            cout << "Cantidad: " << musica.getCantidad() << endl;
            cout << "¿Referencia Limitada?: " << (musica.getReferenciaLimitada() ? "Sí" : "No") << endl;
            cout << "Año: " << musica.getannio() << endl;
            cout << "Artista: " << musica.getArtista() << endl;
            cout << "Album: " << musica.getAlbum() << endl;

            cout << "Canciones: ";
            for (const auto& cancion : musica.getCanciones()) {
                cout << cancion << ", ";
            }
            cout << endl;

            cout << "---------------------------------" << endl;
        }
    }
};

```

## Libro
```c++
#include <iostream>
#include <vector>
#include <string>
#include "Material.h"
using namespace std;

class Libro :public Material
{
private:
	string isbn;
	int numeroPaginas;
	vector<string> autores;
	string editorial;

public:
	// Constructor
	Libro(string id, string titulo, string genero, string tipo, string region, int cantidad, bool referenciaLimitada, int annio,
		string isbn,
		int numeroPaginas,
		vector<string> autores,
		string editorial
	)
		: Material(id, titulo, genero, tipo, region, cantidad, referenciaLimitada, annio),
		isbn(isbn),
		numeroPaginas(numeroPaginas),
		autores(autores),
		editorial(editorial)
	{
	}

	// Getters
	string getIsbn() const { return isbn; }
	int getNumeroPaginas() const { return numeroPaginas; }
	vector<string> getAutores() const { return autores; }
	string getEditorial() const { return editorial; }
	int getAnnioPublicacion() const { return annio; }

	// Setters 
	void setIsbn(const string& isbn) { this->isbn = isbn; }
	void setNumeroPaginas(int numeroPaginas) { this->numeroPaginas = numeroPaginas; }
	void setAutores(const vector<string>& autores) { this->autores = autores; }
	void setEditorial(const string& editorial) { this->editorial = editorial; }
	void setAnnioPublicacion(int annio) { this->annio = annio; }

	//Funciones

    static void ingresarDatosLibro(vector<Libro>& libros) {
        string id, titulo, genero, tipo, region, isbn, editorial;
        int cantidad, annio, numeroPaginas;
        bool referenciaLimitada;
        vector<string> autores;

        cout << "Ingrese el ID: ";
        cin >> id;
        cout << endl;

        cout << "Ingrese el título: ";
        cin >> titulo;
        cout << endl;

        cout << "Ingrese el género: ";
        cin >> genero;
        cout << endl;

        cout << "Ingrese el tipo: ";
        cin >> tipo;
        cout << endl;

        cout << "Ingrese la región: ";
        cin >> region;
        cout << endl;

        cout << "Ingrese la cantidad: ";
        cin >> cantidad;
        cout << endl;

        cout << "¿Es de referencia limitada? (1 para sí, 0 para no): ";
        cin >> referenciaLimitada;
        cout << endl;

        cout << "Ingrese el año: ";
        cin >> annio;
        cout << endl;

        cout << "Ingrese el ISBN: ";
        cin >> isbn;
        cout << endl;

        cout << "Ingrese el número de páginas: ";
        cin >> numeroPaginas;
        cout << endl;

        int numAutores;
        cout << "Ingrese la cantidad de autores: ";
        cin >> numAutores;
        cout << endl;

        for (int i = 0; i < numAutores; ++i) {
            cout << "Ingrese el nombre del autor " << (i + 1) << ": ";
            cin >> autores[i];
            cout << endl;
        }

        cout << "Ingrese la editorial: ";
        cin >> editorial;
        cout << endl;


        libros.emplace_back(id, titulo, genero, tipo, region, cantidad, referenciaLimitada, annio, isbn, numeroPaginas, autores, editorial);
    }

    static void imprimirDatosLibro(const vector<Libro>& libros) {
        for (const auto& libro : libros) {
            cout << "---------------------------------" << endl;
            cout << "ID: " << libro.getId() << endl;
            cout << "Título: " << libro.getTitulo() << endl;
            cout << "Género: " << libro.getGenero() << endl;
            cout << "Tipo: " << libro.getTipo() << endl;
            cout << "Región: " << libro.getRegion() << endl;
            cout << "Cantidad: " << libro.getCantidad() << endl;
            cout << "¿Referencia Limitada?: " << (libro.getReferenciaLimitada() ? "Sí" : "No") << endl;
            cout << "Año: " << libro.getAnnioPublicacion() << endl;
            cout << "ISBN: " << libro.getIsbn() << endl;
            cout << "Número de Páginas: " << libro.getNumeroPaginas() << endl;

            cout << "Autores: ";
            for (const auto& autor : libro.getAutores()) {
                cout << autor << ", ";
            }
            cout << endl;

            cout << "Editorial: " << libro.getEditorial() << endl;
            cout << "---------------------------------" << endl;
        }
    }
};
```

## Libro
```c++
//Principales
#include <iostream>
#include <vector>
#include <string>

//Material
#include "Material.h"
#include "Libro.cpp"
#include "Musica.cpp"
#include "Pelicula.cpp"

//Usuarios
#include "Usuarios.h"
#include "Alumno.cpp"
#include "Profesor.cpp"

//Prestamo
#include "Prestamo.cpp"

using namespace std;

int main()
{
    vector<Libro> libros;
    vector<Musica> musica;
    vector<Pelicula> pelicula;
    vector<Profesor> profesor;
    vector<Alumno> alumno;
    vector<Prestamo> prestamos;
    int opcion;

    do {
        cout << "Menu:" << endl;
        cout << "1. Material" << endl;
        cout << "2. Usuarios" << endl;
        cout << "3. Prestamos" << endl;
        cout << "4. Salir" << endl;
        cout << "Ingrese una opcion: ";
        cin >> opcion;

        switch (opcion) {
        case 1: {
            int op1;
            do {
                cout << "Menu Material:" << endl;
                cout << "1. Libro" << endl;
                cout << "2. Musica" << endl;
                cout << "3. Pelicula" << endl;
                cout << "4. Regresar" << endl;
                cout << "Ingrese una opcion: ";
                cin >> op1;

                switch (op1) {
                case 1: {
                    int op2;
                    do {
                        cout << "Libros:" << endl;
                        cout << "1. Ingresar datos" << endl;
                        cout << "2. Imprimir datos" << endl;
                        cout << "3. Regresar" << endl;
                        cout << "Ingrese una opcion: ";
                        cin >> op2;

                        switch (op2) {
                        case 1:
                            Libro::ingresarDatosLibro(libros);
                            break;
                        case 2:
                            Libro::imprimirDatosLibro(libros);
                            break;
                        case 3:
                            cout << "Regresando..." << endl;
                            break;
                        default:
                            cout << "Opcion no valida." << endl;
                        }
                    } while (op2 != 3);
                    break;
                }
                case 2: {
                    int op3;
                    do {
                        cout << "Musica:" << endl;
                        cout << "1. Ingresar datos" << endl;
                        cout << "2. Imprimir datos" << endl;
                        cout << "3. Regresar" << endl;
                        cout << "Ingrese una opcion: ";
                        cin >> op3;

                        switch (op3) {
                        case 1:
                            Musica::ingresarDatosMusica(musica);
                            break;
                        case 2:
                            Musica::imprimirDatosMusica(musica);
                            break;
                        case 3:
                            cout << "Regresando..." << endl;
                            break;
                        default:
                            cout << "Opcion no valida." << endl;
                        }
                    } while (op3 != 3);
                    break;
                }
                case 3: {
                    int op4;
                    do {
                        cout << "Pelicula:" << endl;
                        cout << "1. Ingresar datos" << endl;
                        cout << "2. Imprimir datos" << endl;
                        cout << "3. Regresar" << endl;
                        cout << "Ingrese una opcion: ";
                        cin >> op4;

                        switch (op4) {
                        case 1:
                            Pelicula::ingresarDatosPeliculas(pelicula);
                            break;
                        case 2:
                            Pelicula::imprimirDatosPeliculas(pelicula);
                            break;
                        case 3:
                            cout << "Regresando..." << endl;
                            break;
                        default:
                            cout << "Opcion no valida." << endl;
                        }
                    } while (op4 != 3);
                    break;
                }
                case 4:
                    cout << "Regresando al menu principal..." << endl;
                    break;
                default:
                    cout << "Opcion no valida." << endl;
                }
            } while (op1 != 4);
            break;
        }
        case 2: {
            int op5;
            do {
                cout << "Menu Usuarios:" << endl;
                cout << "1. Profesores" << endl;
                cout << "2. Alumnos" << endl;
                cout << "3. Regresar" << endl;
                cout << "Ingrese una opcion: ";
                cin >> op5;

                switch (op5) {
                case 1: {
                    int op6;
                    do {
                        cout << "Profesor:" << endl;
                        cout << "1. Ingresar datos" << endl;
                        cout << "2. Imprimir datos" << endl;
                        cout << "3. Regresar" << endl;
                        cout << "Ingrese una opcion: ";
                        cin >> op6;

                        switch (op6) {
                        case 1:
                            Profesor::ingresarDatosProfesor(profesor);
                            break;
                        case 2:
                            Profesor::imprimirDatosProfesor(profesor);
                            break;
                        case 3:
                            cout << "Regresando..." << endl;
                            break;
                        default:
                            cout << "Opcion no valida." << endl;
                        }
                    } while (op6 != 3);
                    break;
                }
                case 2: {
                    int op7;
                    do {
                        cout << "Alumno:" << endl;
                        cout << "1. Ingresar datos" << endl;
                        cout << "2. Imprimir datos" << endl;
                        cout << "3. Regresar" << endl;
                        cout << "Ingrese una opcion: ";
                        cin >> op7;

                        switch (op7) {
                        case 1:
                            Alumno::ingresarDatosAlumno(alumno);
                            break;
                        case 2:
                            Alumno::imprimirDatosAlumno(alumno);
                            break;
                        case 3:
                            cout << "Regresando..." << endl;
                            break;
                        default:
                            cout << "Opcion no valida." << endl;
                        }
                    } while (op7 != 3);
                    break;
                }
                case 3:
                    cout << "Regresando al menu principal..." << endl;
                    break;
                default:
                    cout << "Opcion no valida." << endl;
                }
            } while (op5 != 3);
            break;
        }

        case 3:
            int op6;
            do
            {
                cout << "Menu Prestamos:" << endl;
                cout << "1. Ingresar Datos" << endl;
                cout << "2. Imprimir Datos" << endl;
                cout << "3. Regresar" << endl;
                cout << "Ingrese una opcion: ";
                cin >> op6;

                switch (op6)
                {
                case 1:
                    Prestamo::ingresarDatosPrestamos(prestamos);
                    break;
                case 2:
                    Prestamo::imprimirDatosPrestamo(prestamos);
                    break;
                case 3:
                    cout << "Regresando al menu principal..." << endl;
                    break;
                default:
                    cout << "Opcion no valida." << endl;
                }
            } while (op6 != 3);
            break;

        case 4:
            cout << "Saliendo del programa..." << endl;
            break;
        default:
            cout << "Opcion no valida." << endl;
        }
    } while (opcion != 4);
}

```
