// Autor Miguel Flores
//39.Suponga que usted es un ejecutivo de una microfinanciera, encargado de
//entregar créditos a las personas. De acuerdo a las reglas del banco para
//el que usted trabaja, el monto del crédito al que una persona puede
//acceder depende de su sueldo. Para determinar el crédito al que una
//persona puede optar, debe utilizar la siguiente tabla entregada por el
//banco:

//Rangos de sueldos Monto de derecho a crédito
//Sueldo menor a C$200,000 C$0
//Sueldo entre C$200,000 y C$500,000 C$500,000
//Sueldo entre C$500,000 y C$1,000,000 C$2,000,000
//Escriba un algoritmo que, dado el sueldo de un cliente, le indique el valor
//del crédito al que puede optar.

#include<iostream>
using namespace std;

#define SIN_TIPO string

int main() {
	SIN_TIPO nombre;
	float sueldo;
	cout << "Este algoritmo te muestra si tienes credito con este banco de acuerdo a la informacion que se te pide, que lo disfrutes." << endl;
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

