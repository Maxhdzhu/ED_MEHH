#include <iostream>
#include <vector>

using namespace std;

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


void iniciarTabla(vector<ISR> &v)
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

int main()
{
	vector<ISR> visr;
	vector<Empleados> vemp;

	iniciarTabla(visr);
	iniciarEmpleados(vemp);
	imprimeTabla(visr);

	calculaISR(vemp, visr);


}
