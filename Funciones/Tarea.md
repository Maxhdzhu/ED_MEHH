## Cajero 

```c++
#include <iostream>

using namespace std;

// Variables Globales
int opcion;
double saldoActual = 5000, retiro, deposito;

// Funciones prototipo
void menu();
void imprimeSaldo(double saldo1);
void retirar(double& saldo1);
void depositar(double& saldo1);

int main()
{
	do
	{

		menu();

		switch (opcion){

		case 1:
			imprimeSaldo(saldoActual);
			break;

		case 2:
			retirar(saldoActual);
			break;

		case 3:
			depositar(saldoActual);
			break;

		default:
			cout << "Opcion Incorrecta" << endl;
		}

	} while (opcion != 4);
}

// Definicion de la funcion

void depositar (double& saldo1) {

	cout << "Ingrese el monto a depositar: ";
	cin >> deposito;
	saldoActual = saldoActual + deposito;
	cout << "Su saldo actual es: " << saldoActual << endl;
}

void retirar (double& saldoActual) {

	cout << "Ingrese el monto a retirar: ";
	cin >> retiro;
	if (retiro > saldoActual)
	{
		cout << "Saldo insuficiente" << endl;
	}
	else
	{
		saldoActual = saldoActual - retiro;
	}
	cout << "Su saldo actual es: " << saldoActual << endl;
}

void imprimeSaldo (double saldo1){

	cout << "El saldo actual es: " << saldo1 << endl;
}

void menu() {

	cout << "Bienvenido al cajero automatico" << endl;
	cout << "1. Consultar saldo" << endl;
	cout << "2. Retirar" << endl;
	cout << "3. Depositar" << endl;
	cout << "4. Salir" << endl;
	cout << "Seleccione una opcion: ";
	cin >> opcion;

}

```

## Calculadora

```c++
#include <iostream>

using namespace std;

// Función para ingresar los dos números

void ingreseNumeros(int& num1, int& num2);
void ingreseNumeros(double& num1, double& num2);

// Función para sumar dos números
void sumar(int num1, int num2);

// Función para restar dos números
void restar(int num1, int num2);

// Función para multiplicar dos números
void multiplicar(int num1, int num2);

// Función para dividir dos números, regresa un valor de tipo double
void dividir(int num1, int num2);

int main() {
    int num1 = 0, num2 = 0;
    double num3 = 0, num4 = 0;
    int opcion;

    cout << "CALCULADORA";

    // Solicitar los dos números

    ingreseNumeros(num1, num2);

    // Menú para seleccionar la operación

    cout << "Seleccione la operación a realizar: ";
    cout << "1. Sumar";
    cout << "2. Restar";
    cout << "3. Multiplicar";
    cout << "4. Dividir";
    cout << "Ingrese su opción: ";
    cin >> opcion;

    switch (opcion) {

    case 1:
        ingreseNumeros(num1, num2);
        cout << "Resultado de la suma: " << endl;
        sumar(num1, num2);
        break;

    case 2:
        ingreseNumeros(num1, num2);
        cout << "Resultado de la resta: " << endl;
        multiplicar(num1, num2);
        break;

    case 3:
        ingreseNumeros(num1, num2);
        cout << "Resultado de la multiplicacion: " << endl;
        multiplicar(num1, num2);
        break;

    case 4:
        ingreseNumeros(num3, num4);
        cout << "Resultado de la division: " << endl;
        dividir(num3, num4);
        break;

    default:
        cout << "Opción no válida.";
        break;
    }
}

double dividir(int num1, int num2) {
    if (num2 == 0) {
        cout << "Error" << endl;
    }

    else {
        cout << (num1) / num2;
    }
}

int multiplicar(int num1, int num2) {
    cout << num1 * num2;
}

int restar(int num1, int num2) {
    cout << num1 - num2;
}

int sumar(int num1, int num2) {
    cout << = num1 + num2;
}

void ingreseNumeros(int& num1, int& num2) {
    cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;
}

void ingreseNumeros(double& num1, double& num2) {
    cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;
}
```

## Calculadora de Areas

```c++
#include <iostream>

using namespace std;

// Sobrecarga de la función calculaArea para diferentes figuras geométricas

// Área de un cuadrado (lado)
void calculaArea(double lado);

// Área de un triángulo equilátero (base, altura)
void calculaArea(double base, double altura);

// Área de un círculo (radio)
void calculaArea(int radio);

// Área de un rectángulo (base, altura)
void calculaArea(int base, int altura);

int main() {
    int opcion;

    cout << "Calculadora de áreas\n";
    cout << "Seleccione la figura geométrica:\n";
    cout << "1. Cuadrado\n";
    cout << "2. Triángulo equilátero\n";
    cout << "3. Círculo\n";
    cout << "4. Rectángulo\n";
    cout << "Ingrese su opción: ";
    cin >> opcion;

    switch (opcion) {
    case 1: {
        double lado;
        cout << "Ingrese el valor del lado del cuadrado: ";
        cin >> lado;
        cout << "El área del cuadrado es: " << calculaArea(lado) << endl;
        break;
    }
    case 2: {
        double base, altura;
        cout << "Ingrese el valor de la base del triángulo: ";
        cin >> base;
        cout << "Ingrese el valor de la altura del triángulo: ";
        cin >> altura;
        cout << "El área del triángulo equilátero es: " << calculaArea(base, altura) << endl;
        break;
    }
    case 3: {
        int radio;
        cout << "Ingrese el valor del radio del círculo: ";
        cin >> radio;
        cout << "El área del círculo es: " << calculaArea(radio) << endl;
        break;
    }
    case 4: {
        int base, altura;
        cout << "Ingrese el valor de la base del rectángulo: ";
        cin >> base;
        cout << "Ingrese el valor de la altura del rectángulo: ";
        cin >> altura;
        cout << "El área del rectángulo es: " << calculaArea(base, altura) << endl;
        break;
    }
    default:
        cout << "Opción no válida.\n";
        break;
    }

    cout << "Gracias por usar la calculadora de áreas.\n";
    return 0;
}

void calculaArea(double lado) {
    cout << lado * lado;
}

void calculaArea(double base, double altura) {
    cout << (base * altura) / 2;
}

void calculaArea(int radio) {
    cout << (3.14) * radio * radio;
}

void calculaArea(int base, int altura) {
    cout << base * altura;
}
```
