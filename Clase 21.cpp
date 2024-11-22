//Libreria 

inventario.push_back(new Libro("ID123", "Cien A#os de soledad", "Realismo Magico", "Libro", "Argentina", 10, true, 1923, "9786070728792", 464, autores, "Editorial Diana"));
 inventario.push_back(new Musica("CD001", "The Returner", "Folk Funk Soul", "Musica", "US", 2, true, 2023, "Allison Russell", "The Returner", canciones));
 inventario.push_back(new Pelicula("ID001", "Zootopia", "Comedia, Familia, Animacion", "Película", "México", 2, false, 2014, 108, actores, directores));
 cout << "===================================================================" << endl;

 for (auto& material : inventario)
 {
     cout << "Polimorfismo: " << endl;
     material->mostrarInfo();
     cout << endl;
     cout << "===================================================================" << endl;
 }

//Override Libro

void mostrarInfo() const override
{
	Material::mostrarInfo();
	cout << "ISBN: " << isbn << endl;
	cout << "Numero Paginas: " << numeroPaginas << endl;
	cout << "Autores: " << endl;
	for (auto autores : autores)
	{
		cout << autores;
	}

	cout << "Editorial: " << editorial << endl;
}

//Override Musica

void mostrarInfo() const override
{
	Material::mostrarInfo();
	cout << "Artista: " << artista << endl;
	cout << "Album: " << album << endl;
	cout << "Canciones: " << endl;
	for (auto canciones : canciones)
	{
		cout << canciones;
	}
}

//Override Pelicula

void mostrarInfo() const override
{
	Material::mostrarInfo();
	cout << "Duracion: " << duracion << endl;
	cout << "Actores: " << endl;
	for (auto actores : actores)
	{
		cout << actores;
	}
	cout << endl;
	cout << "Directores: " << endl;
	for (auto directores : directores)
	{
		cout << directores;
	}
}
