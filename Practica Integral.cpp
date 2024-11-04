#include <iostream>
#include <vector>

using namespace std;

//Ejercicio 9.

struct ISR
{
	double li;
	double cf;
	double tasa;


};

struct Empleados
{
	string nomCom;
	double salario;
};


void iniciarTabla(vector<ISR>& v)
{
	v.push_back({ 0.01, 0.00, 1.92 });
	v.push_back({ 578.53, 11.11, 6.40 });
	v.push_back({ 4910.19, 288.33, 10.88 });
	v.push_back({ 8629.21, 692.96, 16.00 });
	v.push_back({ 10031.08, 917.26, 17.92 });
	v.push_back({ 12009.95, 1271.87, 21.36 });
	v.push_back({ 24222.32, 3880.44, 23.52 });
	v.push_back({ 38177.70, 7162.74, 30.00 });
	v.push_back({ 72887.51, 17575.69, 32.00 });
	v.push_back({ 97183.34, 25350.35, 34.00 });
	v.push_back({ 291550.01, 91435.02, 35.00 });
}

void iniciarEmpleados(vector<Empleados>& v)
{
	v.push_back({ "Rodrigo Franco Piña", 86500.56 });
	v.push_back({ "Lizzete Karina Garcia Mora", 78000.45 });
	v.push_back({ "Luca Maximiliano Leon Villafaña", 91000.12 });
	v.push_back({ "Lucía Martínez", 75000.30 });
	v.push_back({ "Diego Ramírez", 82000.75 });
	v.push_back({ "Claudia López", 88000.90 });
	v.push_back({ "Fernando Castro", 92000.65 });
	v.push_back({ "Sofía Herrera", 83000.25 });
	v.push_back({ "Carlos Ruiz", 84000.55 });
	v.push_back({ "Isabel Pérez", 77000.80 });
}



void imprimeTabla(vector<ISR> v) {
	for (auto renglon : v) {
		cout << renglon.li << ", ";
		cout << renglon.cf << ", ";
		cout << renglon.tasa << endl;
	}
	cout << endl;
}

void calculaISR(vector<Empleados> v1, vector<ISR> v) {
	for (auto renglon : v1) {
		for (auto renglon2 : v) {
			if (renglon.salario >= renglon2.li) {
				//Calcular el salario

				int sueldoBase, resultado, impuesto;

				sueldoBase = renglon.salario - renglon2.li;
				resultado = sueldoBase * renglon2.tasa;
				impuesto = resultado + renglon2.cf;

				cout << "Nombre: " << renglon.nomCom << endl;
				cout << "Impuesto: " << impuesto << endl;
				cout << endl;

				break;
			}
		}
	}
}

//Funciones Protipo

void intercambio(int& n1, int& n2);
int producto(int a, int b, int c);
void incremento(int& n1);
void incremento(double& n1);
void incremento(float& n1);
void calcula(int n1, int& cuadrado, int& cubo);

int main()
{
/*	
1. Elabore el programa en C++ declare un vector de tipo entero con identificador v1, mediante
una instrucción while ingrese un número de edades indeterminado y solicite la edad hasta
que se ingrese cero en la edad, guarde cada una de las edades en el vector e imprima las
edades, utilizando una segunda instrucción for. Adicionalmente:
a. Calcule el promedio de las edades, use la función size() para determinar el tamaño
del vector.
b. Determine el número de personas que son menores de edad.
c. Determine el número de personas que son de la tercera edad.
*/

	vector<int> v1;
	int edad = -1;
	int suma = 0;
	double promedio;
	int mE = 0;
	int tE = 0;

	while (edad != 0) {
		cout << "Ingrese la edad: " << endl;
		cin >> edad;
		cout << endl;

		if (edad != 0) {
			v1.push_back(edad);
		}
	}


	for (int i = 0; i < v1.size(); i++) {
		cout << "Edad: " << v1[i] << endl;

		//Promedio
		suma = suma + v1[i];

		//Menores de edad
		if (v1[i] < 18) {
			mE = mE + 1;
		}

		//Tercera edad
		if (v1[i] > 60) {
			tE = tE + 1;
		}
	}

	promedio = suma / (v1.size() * 1.0);
	cout << "Promedio: " << promedio << endl;
	cout << "Hay " << mE << " menores de Edad" << endl;
	cout << "Hay " << tE << " personas de la Tercera Edad" << endl;


/*
2. Elabore un programa en C++ que declare un vector de tipo entero con identificador v2,
elabore los siguientes incisos:
i) Usando la función assign() inicializa el vector v2 con valor -1 cincuenta veces.
ii) Genere 50 números aleatorios entre 0 y 1 usando la clase rand(), guarde los valores en
v2.
iii) Declare dos variables con identificadores hombres y mujeres de tipo entero, inicialice
en cero ambas variables y conforme genere los números aleatorios vaya
incrementando los contadores dependiendo del valor, si es cero incremente hombres,
si es 1 incremente mujeres.
iv) Imprima los contadores al final del ciclo. (hombres y mujeres).
*/

	vector<int> v2;
	int hombres = 0;
	int mujeres = 0;

	v2.assign(50, -1);

	srand(time(0));

	for (int i = 0; i <= 79; i++) {
		int num = rand() % 2;
		v2.push_back(num);

		if (v2[i + 50] == 0) {
			hombres = hombres + 1;
		}

		if (v2[i + 50] == 1) {
			mujeres = mujeres + 1;
		}
	}

	cout << "Hay " << hombres << " hombres" << endl;
	cout << "Hay " << mujeres << " mujeres" << endl;

/*
3. Elabore un programa en C++ que declare y reverse un vector que contenga los números
naturales. Usar funciones de vector o iterables
*/

	vector<int> v3{ 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int n = v3.size();

	for (int i = 0; i < n / 2; ++i) {
		int temp = v3[i];
		v3[i] = v3[n - i - 1];
		v3[n - i - 1] = temp;
	}
	for (int num : v3) {
		cout << num << " ";
	}
	cout << endl;

/*
4. Elabore un programa en C++ que declare un vector con los valores del 1 al 8, e invierta los 4
primeros números al final y los últimos cuatro números al inicio. Puede usar un segundo	
vector para guardar el resultado.
*/

	vector<int> v4 = { 1, 2, 3, 4, 5, 6, 7, 8 };
	vector<int> v5;

	for (int i = 0; i < 4; ++i) {
		v5[i] = v4[i + 4];
	}

	for (int i = 0; i < 4; ++i) {
		v5[i + 4] = v4[i];
	}

	cout << "Vector resultado: ";
	for (int num : v5) {
		cout << num << " ";
	}
	cout << endl;

/*
5. Crear una funcion llamada intercambio que reciba dos parámetros de tipo entero, e
intercambie los valores de estas variables usando parametros por referencia, en la función
main() asigne dos valores arbitrarios e imprimalos, después llame a la función y vuelva a
imprimir los valores para validar que ya estan intercambiados los valores.
*/

	int num1;
	int num2;

	cout << "Ingrese el primer numero: ";
	cin >> num1;
	cout << "Ingrese el segundo numero: ";
	cin >> num2;
	cout << endl;

	cout << "Numero 1: " << num1 << " Numero 2: " << num2;
	cout << endl;
	intercambio(num1, num2);
	cout << endl;
	cout << "Numeros Intercambiados" << endl;
	cout << "Numero 1: " << num1 << " Numero 2: " << num2 << endl;

/*
6. Crear una función llamada producto, donde inicialmente se soliciten tres números en la
función main() y mande a llamar a la función y esta retorne el producto de los tres números
usando la instrucción return.
*/
	int a, b, c;

	cout << "Ingrese tres numeros" << endl;
	cin >> a;
	cin >> b;
	cin >> c;
	cout << endl;
	cout << producto(a, b, c) << endl;

/*
7. Crear una función llamada incremento, usando parametro por referencia, solicite un
número, que puede ser entero, flotante o doble. Genere tres funciones llamadas igual, que
incremente el número en 1. e imprima el resultado en la función main(). Utilice las
funciones overloading para contestar el ejercicio. Puede usar la función auto, para solicitar
el número.
*/

	int opcion;
	cout << "Seleccione el tipo de numero: 1. Int, 2. Float, 3. Double ";
	cin >> opcion;

	if (opcion == 1) {
		auto numero = 0;
		cout << "Ingrese un numero: ";
		cin >> numero;
		cout << endl;
		incremento(numero);
	}
	else if (opcion == 2) {
		auto numero = 0.0;
		cout << "Ingrese un numero duble: ";
		cin >> numero;
		cout << endl;
		incremento(numero);
	}
	else if (opcion == 3) {
		auto numero = 0.0f;
		cout << "Ingrese un numero float: ";
		cin >> numero;
		cout << endl;
		incremento(numero);
	}
	else {
		cout << "Opcion no valida." << endl;
	}



/*
8. Crear una función llamada calcula, esta deberá recibir tres parametros, el número a elevar
al cubo y cuadrado, así como los resultados de ambas operaciones en otros dos
parámetros, solicite el número a la función main, y declare los resultados de las
operaciones y llame a la función, imprima los resultados en la función main()
*/

	int nC;
	int cuadrado, cubo;

	cout << "Introduce un numero: ";
	cin >> nC;

	calcula(nC, cuadrado, cubo);

	cout << "El cuadrado de " << nC << " es: " << cuadrado << endl;
	cout << "El cubo de " << nC << " es: " << cubo << endl;

/*
Usando Vectores (Vector) y Estructuras (Structs). Crear un programa en C++ que calcule el
ISR de un sueldo (cuelquier sueldo). Abajo se muestra un ejemplo de calculo, entre
paréntesis tienes una sugerencia de como llamar a las variables.
*/

	vector<ISR> visr;
	vector<Empleados> vemp;

	iniciarTabla(visr);
	iniciarEmpleados(vemp);
	imprimeTabla(visr);

	calculaISR(vemp, visr);
}

//Funciones

void intercambio(int& n1, int& n2) {
	int temp;
	temp = n2;
	n2 = n1;
	n1 = temp;
}
int producto(int a, int b, int c) {
	return a * b * c;
}
void incremento(int& n1) {
	n1 = n1 + 1;
	cout << "Numero (int) +1: " << n1;
}
void incremento(double& n1) {
	n1 = n1 + 1;
	cout << "Numero (double) +1: " << n1;
}
void incremento(float& n1) {
	n1 = n1 + 1;
	cout << "Numero (float) +1: " << n1;
}

void calcula(int n1, int& cuadrado, int& cubo) {
	cuadrado = n1 * n1;
	cubo = n1 * n1 * n1;
}
