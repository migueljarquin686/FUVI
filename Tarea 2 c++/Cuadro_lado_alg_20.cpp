// Autor Miguel Flores
//20. Algoritmo que lea un n�mero entero (lado) y a partir de �l, cree un cuadrado
//de asteriscos con ese tama�o.
//Ejemplo, para lado = 4 escribir�a:
//****
//****
#include<iostream>
using namespace std;

int main() {
	int a;
	float b;
	int lado;
	cout << "Este algoritmo te muestra lados superiores e inferiores de un cuadrado de asterisco con un numero, que lo disfrutes." << endl;
	cout << "Escribe un numero o lado:" << endl;
	cin >> lado;
	for (a=1;a<=lado;a++) {
		for (b=1;b<=lado;b++) {
			if (a>1 && a<lado) {
				cout << "  ";
			} else {
				cout << " * ";
			}
		}
		cout << "" << endl;
	}
	cout << "Es un placer servirle" << endl;
	return 0;
}

