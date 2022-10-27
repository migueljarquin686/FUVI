// Autor Miguel Flores
//11. Desarrollar un algoritmo que nos calcule el cuadrado de los 9 primeros
//números naturales.

#include<iostream>
using namespace std;

int main() {
	float multiplicador;
	float r;
cout << "Este algoritmo te calcula el cuadrado de los 9 primeros numeros naturales" << endl;
	cout << "El cuadrado de los 9 primeros numeros son:" << endl;
	for (multiplicador=1;multiplicador<=9;multiplicador++) {
		r = multiplicador*multiplicador;
		cout << multiplicador << " x " << multiplicador << " = " << multiplicador*multiplicador << endl;
	}
	cout << "Es un placer servirle" << endl;
	return 0;
}

