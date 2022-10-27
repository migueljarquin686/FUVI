// Autor Miguel Flores
#include<iostream>
using namespace std;

int main() {
	float ab;
	float al;
	float at;
	float h;
	int op;
	float pb;
	float v;
	cout << "Menu de opciones del prisma" << endl;
	cout << "1- calculo del area lateral del prisma" << endl;
	cout << "2- calculo del area total del prisma" << endl;
	cout << "3- Calculo del volumen del prisma" << endl;
	cout << "Ingrese una opcion" << endl;
	cin >> op;
	switch (op) {
	case 1:
		do {
			cout << " Para calcular el area lateral de un prisma pentagonal ingrese los siguientes datos" << endl;
			cout << " Ingrese el valor del perimetro de la base " << endl;
			cin >> pb;
			cout << " Ingrese el valor de la altura " << endl;
			cin >> h;
			if ((pb>0) && (h>0)) {
				// Fórmula del área lateral del prisma
				al = pb*h;
				cout << " Pb = " << pb << "  " << endl;
				cout << " h = " << h << "  " << endl;
				cout << "AL = " << al << "  " << endl;
			} else {
				cout << "Usted a ingresado valores incorrectos" << endl;
			}
		} while (al<=0);
		break;
	case 2:
		do {
			cout << " Para calcular el area total de un prisma pentagonal ingrese los siguientes datos" << endl;
			cout << " Ingrese el valor del area lateral " << endl;
			cin >> al;
			cout << " Ingrese el valor del area base " << endl;
			cin >> ab;
			if ((al>0) && (ab>0)) {
				// Fórmula del área total del prisma
				at = al+(2*ab);
				cout << " AL = " << al << "  " << endl;
				cout << " Ab = " << ab << "  " << endl;
				cout << "At = " << at << "  " << endl;
			} else {
				cout << "Usted a ingresado valores incorrectos" << endl;
			}
		} while (at<=0);
		break;
	case 3:
		do {
			cout << " Para calcular el volumen de un prisma pentagonal ingrese los siguientes datos" << endl;
			cout << " Ingrese el valor del area de la base " << endl;
			cin >> ab;
			cout << " Ingrese el valor de la altura " << endl;
			cin >> h;
			if ((ab>0) && (h>0)) {
				// Fórmula del volumen del prisma
				v = ab*h;
				cout << " Ab = " << ab << "  " << endl;
				cout << " h = " << h << "  " << endl;
				cout << "V = " << v << "  " << endl;
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

