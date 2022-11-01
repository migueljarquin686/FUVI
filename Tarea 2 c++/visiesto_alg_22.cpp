//Autor Miguel Flores
//22. Algoritmo que, dado un año, nos diga si es bisiesto o no. Un año es bisiesto
//bajo las siguientes condiciones:
//• Un año divisible por 4 es bisiesto y no debe ser divisible entre 100.
//• Si un año es divisible entre 100 y además es divisible entre 400, también
//resulta bisiesto.

#include<iostream>
using namespace std;

int main() {
	int numx;
	cout << "Este algoritmo te muestra si un year es visiesto" << endl;
	cout << "Ingrese el year que desea conocer" << endl;
	cin >> numx;
	if (numx%4==0) {
		cout << "el year es visiesto" << endl;
	} else {
		cout << "El year no es visieto" << endl;
	}
	cout << "*********************" << endl;
	cout << "Es un placer servirle" << endl;
	return 0;
}

