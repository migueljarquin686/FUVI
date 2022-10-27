//Miguel Flores

#include<iostream>
#include<cmath>
using namespace std;

int main() {
	float ab;
	float al;
	float ap;
	float at;
	float h;
	int op;
	float pb;
	float v;
	cout << "Menu de opciones de la piramide" << endl;
	cout << "1- calculo del area lateral de la piramide" << endl;
	cout << "2- calculo del apotema de la piramide" << endl;
	cout << "3- Calculo del area total de la piramide" << endl;
	cout << "4-Calculo del volumen de la piramide" << endl;
	cout << "Ingrese una opcion" << endl;
	cin >> op;
	switch (op) {
	case 1:
		do {
			cout << " Para calcular el area lateral de una piramide ingrese los siguientes datos" << endl;
			cout << " Ingrese el valor del perimetro de la base " << endl;
			cin >> pb;
			cout << " Ingrese el valor del apotema " << endl;
			cin >> ap;
			if ((pb>0) && (ap>0)) {
				// Fórmula del area lateral de una piramide
				al = (pb*ap)/2;
				cout << " Pb = " << pb << "  " << endl;
				cout << " Ap = " << ap << "  " << endl;
				cout << " AL = " << al << " " << endl;
			} else {
				cout << "Usted a ingresado valores incorrectos" << endl;
			}
		} while (al<=0);
		break;
	case 2:
		do {
			cout << " Para calcular el apotema de una piramide ingrese los siguientes datos" << endl;
			cout << " Ingrese el valor del area de la base " << endl;
			cin >> ab;
			cout << " Ingrese el valor de la altura " << endl;
			cin >> h;
			if ((ab>0) && (h>0)) {
				// Fórmula del apotema de una piramide
				ap = sqrtf(pow(h,2)+pow(ab,2));
				cout << " Ab = " << ab << "  " << endl;
				cout << " h = " << h << "  " << endl;
				cout << " Ap = " << ap << " " << endl;
			} else {
				cout << "Usted a ingresado valores incorrectos" << endl;
			}
		} while (ap<=0);
		break;
	case 3:
		do {
			cout << " Para calcular el area total de una piramide ingrese los siguientes datos" << endl;
			cout << " Ingrese el valor del area lateral" << endl;
			cin >> al;
			cout << " Ingrese el valor del area de la base " << endl;
			cin >> ab;
			if ((al>0) && (ab>0)) {
				// Fórmula del area total de una piramide
				at = al+ab;
				cout << " AL = " << al << "  " << endl;
				cout << " Ab = " << ab << "  " << endl;
				cout << " At = " << at << " " << endl;
			} else {
				cout << "Usted a ingresado valores incorrectos" << endl;
			}
		} while (at<=0);
		break;
	case 4:
		do {
			cout << " Para calcular el volumen de una piramide ingrese los siguientes datos" << endl;
			cout << " Ingrese el valor del area de la base" << endl;
			cin >> ab;
			cout << " Ingrese el valor de la altura " << endl;
			cin >> h;
			if ((ab>0) && (h>0)) {
				// Fórmula del volumen de una piramide
				v = (ab*h)/3;
				cout << " Ab = " << ab << "  " << endl;
				cout << " h = " << h << "  " << endl;
				cout << " V = " << v << " " << endl;
			} else {
				cout << "Usted a ingresado un valor incorrecto" << endl;
			}
		} while (v<=0);
		break;
	default:
		cout << " No es opcion válida" << endl;
	}
	cout << " Muchas gracias por preferirnos " << endl;
	return 0;
}

