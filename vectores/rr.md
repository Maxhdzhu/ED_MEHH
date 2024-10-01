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

![Imagen](![image](https://github.com/user-attachments/assets/98ea3fd1-b496-437b-af9f-99dca7854dfe)
)
