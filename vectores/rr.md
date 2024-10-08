# Titulo 1
## Titulo 2
### Titulo 3
#### Titulo 4

* uno
* dos
* tres

1. Punto 1
2. Punto 2
3. Punto 3

**negrita**
_italica_
***negrita italica***

 ```c++
#include <iostream>
#include <vector>

using namespace std;

void imprime(vector<int> v) {
	for (auto elemento : v)
	{
		cout << elemento << ", ";
	}
	cout << endl;
	system("pause");
	system("cls");
}

int main()
{
	
	vector<int> v;

	//llenar el vector con 0, cinco veces

	v.assign(5, 0);
	imprime(v);


	//inserta 15 en la ultima posición

	v.push_back(15);
	imprime(v);


	//quitar el ultimo elemento

	v.pop_back();
	imprime(v);


	//inserta al principio un 5 en el vector
	
	v.insert(v.begin(), 5);
	imprime(v);


	//borra el primer elemento del vector

	v.erase(v.begin());
	imprime(v);


	//emplace() inserta 25 al principio

	v.emplace(v.begin(), 25);
	imprime(v);


	//emplace_back() inserta 20 al final
	
	v.emplace_back(20);
	imprime(v);


	//Borrar el vector

	v.clear(); 
	imprime(v);
	


	//swap entre dos vectores

	vector<int> v1, v2;

	v1.push_back(1);
	v1.push_back(2);

	v2.push_back(3);
	v2.push_back(4);

	v1.swap(v2);

	imprime(v1);
	imprime(v2);
}
```

M4

```c++
#include <iostream>
#include <vector>

using namespace std;

//Funciones Prototipo

void imprime(vector<int> v);
void cargaValores(vector<int>& v);

int main()
{

    vector<int> v;

    //llenar el vector con 0, cinco veces

    v.assign(5, 0);
    imprime(v);

    cargaValores(v);
    imprime(v);
}

void cargaValores(vector<int>& v) {
    for (int i = 0; i <= 4; i++) {
        v[i] = i + 1;
    }
}

void imprime(vector<int> v) {
    for (auto elemento : v)
    {
        cout << elemento << ", ";
    }
    cout << endl;
    system("pause");
    system("cls");
}  
```
```c++
#include <iostream>
#include <vector>
#include <random>
#include <chrono>

using namespace std;
using namespace std::chrono;

//Funcion Prototipo

void burbuja(vector<double>& v);

void seleccion(vector<double>& v);

void imprime(vector<double> v);


int main()
{
	//Vector con 1000 elementos

	vector<double> v1000;
	random_device rd;
	default_random_engine gen(rd());
	uniform_real_distribution<double> distribution(1.5, 1.90);

	//Generar 1000 datos con una instrucción cíclica

	for (int i = 0; i < 1000000; i++) {
		double num = distribution(gen);
		v1000.push_back(num);
	}

	imprime(v1000);

	auto start1000 = high_resolution_clock::now();
	seleccion(v1000);
	auto stop1000 = high_resolution_clock::now();
	auto duration1000 = duration_cast<milliseconds>(stop1000 - start1000);

	cout << "Duración " << duration1000.count();
	
	cout << endl;

	imprime(v1000);

}

void seleccion(vector<double>& v) {
	int indiceMin = 0;

	for (int i = 0; i < v.size(); i++) {
		indiceMin = i;
		
		for (int j = i; j < v.size(); j++) {
			
			if (v[j] < v[indiceMin]) {
				indiceMin = j;
			}
		}

		double temp = v[indiceMin];
		v[indiceMin] = v[i];
		v[i] = temp;
	}
}

void burbuja(vector<double>& v) {
	double temp = 0;
	bool swapp = true;

	while(swapp) {
		swapp = false;
		
		for (int i = 0; i < v.size() - 1; i++) {
			
			if (v[i] > v[i + 1]) {
				temp = v[i + 1];
				v[i + 1] = v[i];
				v[i] = temp;
				swapp = true;
			}
		}
	}
}


void imprime(vector<double> v) {
	for (auto elemento : v)
	{
		cout << elemento << ", ";
	}
	cout << endl;
	system("pause");
	system("cls");
}

```
