//Autor Miguel Flores
#include<iostream>
#include<cmath>
using namespace std;

int main() {
	float al;
	float at;
	float h;
	int op;
	float pi;
	float r;
	float v;
	cout << "Menu de opciones del Cilindro" << endl;
	cout << "1- calculo del area lateral del cilindro" << endl;
	cout << "2- calculo del area total del cilindro" << endl;
	cout << "3- Calculo del volumen del cilindro" << endl;
	cout << "Ingrese una opcion" << endl;
	cin >> op;
	switch (op) {
	case 1:
		do {
			cout << " Para calcular el area lateral de un cilindro ingrese los siguientes datos" << endl;
			cout << " Ingrese el valor del radio " << endl;
			cin >> r;
			cout << " Ingrese el valor de la altura " << endl;
			cin >> h;
			if ((r>0) && (h>0)) {
				// Fórmula del area lateral de un cilindro
				al = 2*M_PI*r*h;
				cout << " r = " << r << "  " << endl;
				cout << " h = " << h << "  " << endl;
				cout << " AL = " << al << " " << endl;
			} else {
				cout << "Usted a ingresado valores incorrectos" << endl;
			}
		} while (al<=0);
		break;
	case 2:
		do {
			cout << " Para calcular el area total de un cilindro ingrese los siguientes datos" << endl;
			cout << " Ingrese el valor del radio " << endl;
			cin >> r;
			cout << " Ingrese el valor de la altura " << endl;
			cin >> h;
			if ((h>0) && (r>0)) {
				// Fórmula del area total de un cilindro
				at = 2*M_PI*r*(h+r);
				cout << " r = " << r << "  " << endl;
				cout << " h = " << h << "  " << endl;
				cout << " At = " << at << " " << endl;
			} else {
				cout << "Usted a ingresado valores incorrectos" << endl;
			}
		} while (at<=0);
		break;
	case 3:
		do {
			cout << " Para calcular el volumen de un cilindro ingrese los siguientes datos" << endl;
			cout << " Ingrese el valor del radio " << endl;
			cin >> r;
			cout << " Ingrese el valor de la altura " << endl;
			cin >> h;
			if ((h>0) && (r>0)) {
				// Fórmula del volumen de un cilindro
				v = M_PI*pow(r,2)*h;
				cout << " r = " << r << "  " << endl;
				cout << " h = " << h << "  " << endl;
				cout << " V = " << v << " " << endl;
			} else {
				cout << "Usted a ingresado valores incorrectos" << endl;
			}
		} while (v<=0);
		break;
	default:
		cout << " No es opcion válida" << endl;
	}
	cout << " Muchas gracias por preferirnos " << endl;
	return 0;
}

