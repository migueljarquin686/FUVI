// Autor Miguel Flores
//Algoritmo Cuadrado de asterisco

#include<iostream>
using namespace std;

int main() {
	int a;
	float b;
	int lado;
	cout << "ESTE ALGORITMO TE MUESTRA EL LADO SUPERIOR EN INFERIOR DE UN CUADRADO." << endl;
	cout << "*******************************************" << endl;
	cout << "Escribe un numero o lado:" << endl;
	cin >> lado;
	for (a=1;a<=lado;a++) {
		for (b=1;b<=lado;b++) {
			if (a>1 && a<lado && b>1 && b<lado) {
				cout << "* ";
			} else {
				cout << "* ";
			}
		}
		cout << " " << endl;
	}
	cout << "Es un placer servirle" << endl;
	return 0;
}

