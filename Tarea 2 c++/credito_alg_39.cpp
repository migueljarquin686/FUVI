// Autor Miguel Flores

#include<iostream>
using namespace std;

#define SIN_TIPO string

int main() {
	SIN_TIPO nombre;
	float sueldo;
	cout << "Ingrese el nombre del solicitante de credito" << endl;
	cin >> nombre;
	cout << "Ingrese su sueldo por favor" << endl;
	cin >> sueldo;
	if (sueldo<200000) {
		cout << nombre << " Usted no tiene crédito, lo sentimos " << endl;
	}
	if (sueldo>=200000 && sueldo<500000) {
		cout << nombre << " Usted tiene derecho a un credito de 500,000 C$" << endl;
	}
	if (sueldo>=500000 && sueldo<=1000000) {
		cout << nombre << " Usted tiene derecho a un crédito de 2,000,000 C$" << endl;
	}
	cout << "Es un placer servirle" << endl;
	return 0;
}

