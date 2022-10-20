// Autor Miguel Flores

// Desarrolle un algoritmo para leer el nombre de un empleado, el salario
// básico por hora y el número de horas trabajadas durante una semana.
// Calcule el salario neto, teniendo en cuenta que, si el número de horas
// trabajadas durante la semana es mayor de 48 horas, esas horas demás
// se consideran horas extras y tienen un recargo del 35% (incentivo).
// Imprima el nombre del empleado y su salario neto
#include<iostream>
using namespace std;

#define SIN_TIPO string

int main() {
	float he;
	float nh;
	float nhs;
	SIN_TIPO nombre;
	float sh;
	float sn;
	float st;

	cout << "Ingrese el nombre del empleado" << endl;
	cin >> nombre;
	cout << "Ingrese su salario basico por hora" << endl;
	cin >> sh;
	cout << "Ingrese el numero de horas trabajadas en todo el día" << endl;
	cin >> nh;
	// se procede a calcular el numero de horas de la semana
	nhs = nh*6;
	// Se procede a calcular el salario neto del trabajador
	sn = nhs*sh;
	if (nhs>48) {
		he = ((sn*35)/100);
		st = sn+he;
		cout << "Nombre del empleado: " << nombre << endl;
		cout << "Salario Neto************************** " << sn << endl;
		cout << "Incentivo de horas extras************* " << he << endl;
		cout << "Salario total************************* " << st << endl;
	} else {
		cout << "Nombre del empleado: " << nombre << endl;
		cout << "Salario Neto************************** " << sn << endl;
	}
	cout << " " << endl;
	cout << "Es un placer servirle" << endl;
	return 0;
}

