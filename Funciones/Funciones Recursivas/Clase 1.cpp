#include <iostream>

using namespace std;

int suma1 = 0;
int ff;
int saludost = 0;
int dV;
int mP:


int saludos(int n)
{
	if (n == 0)
	{
		return 0;
	}
	else
	{
		saludost = saludos(n - 1) + (n - 1);
	}
	return saludost;
}

int dividir(int dividendo, int divisor) {

	if (dividendo < divisor) {
		return 0;
	}

	else {
		dV = 1 + dividir(dividendo - divisor, divisor);
	}
	return dV;
}

int multiplicar(int a, int b) {

	if (b == 0) {
		return 0;
	}
	else {
		mP = a + multiplicar(a, b - 1);
	}
	return mP;
}

int factorial(int n)
{
	if (n == 0)
	{
		return 1;
	}
	else
	{
		ff = n * factorial(n - 1);
	}
	return ff;
}

int suma(int num)
{
	if (num == 1)
	{
		cout << "Condición más simple: " << num << ", suma1: " << suma1 + 1 << endl;
		return 1;
	}
	else
	{
		suma1 = num + suma(num - 1);
		cout << "Retornando llamada de " << num << ", suma1: " << suma1 << endl;
	}
	return suma1;
}

int main()
{
	cout << "Resultado en main(): " << suma(5) << endl;
	cout << "Resultado en main(): " << factorial(5) << endl;
	cout << "Resultado en main(): " << saludos(1000) << endl;
	cout << "El resultado de la multiplicación es: " << multiplicar(5,4) << endl;
	cout << "El resultado de la división es: " << dividir(20,4) << endl;

}
