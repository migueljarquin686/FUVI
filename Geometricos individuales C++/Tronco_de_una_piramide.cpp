// Autor Miguel Flores

#include<iostream>
#include<cmath>
#include<conio.h>
using namespace std;

int main() {
	float ab;
	float abm;
	float al;
	float ap;
	float at;
	float h;
	int op;
	float pb;
	float pbm;
	float v;
	do {
	system("cls");
	cout << "Menu de opciones del tronco de una piramide" << endl;
	cout << "1- calculo del area lateral del tronco de la piramide " << endl;
	cout << "2- calculo del area total del tronco de la piramide" << endl;
	cout << "3- Calculo del volumen del tronco de la priramide" << endl;
	cout << "4- Salir" << endl;
	cout << "Ingrese una opcion" << endl;
	cin >> op;
	system("cls");
	switch (op) {
	case 1:
		cout << "Para calcular el area lateral del tronco de una piramide ingrese los siguientes datos" << endl;
		cout << " Nota: Solo se permiten valores mayores que 0" << endl;
		pb = 0;
		while ((pb<=0)) {
			cout << " Ingrese el valor del perimetro de la base mayor" << endl;
			cin >> pb;
		}
		cout << " Nota: Solo se permiten valores mayores que 0" << endl;
		pbm = 0;
		while ((pbm<=0)) {
			cout << " Ingrese el valor del perimetro de la base menor" << endl;
			cin >> pbm;
		}
		cout << " Nota: Solo se permiten valores mayores que 0" << endl;
		ap = 0;
		while ((ap<=0)) {
			cout << " Ingrese el valor del apotema " << endl;
			cin >> ap;
		}
		// Fórmula del area lateral del tronco de una piramide
		al = ((pb+pbm)/2)*ap;
		cout << " PB = " << pb << "  " << endl;
		cout << " Pbm = " << pbm << "  " << endl;
		cout << " Ap = " << ap << " " << endl;
		cout << " AL = " << al << "  " << endl;
		break;
	case 2:
		cout << "Para calcular el area total del tronco de una piramide ingrese los siguientes datos" << endl;
		cout << " Nota: Solo se permiten valores mayores que 0" << endl;
		al = 0;
		while ((al<=0)) {
			cout << " Ingrese el valor del area lateral" << endl;
			cin >> al;
		}
		cout << " Nota: Solo se permiten valores mayores que 0" << endl;
		ab = 0;
		while ((ab<=0)) {
			cout << " Ingrese el valor del area de la base mayor" << endl;
			cin >> ab;
		}
		cout << " Nota: Solo se permiten valores mayores que 0" << endl;
		abm = 0;
		while ((abm<=0)) {
			cout << " Ingrese el valor del area de la base menor " << endl;
			cin >> abm;
		}
		// Fórmula del area total del tronco de una piramide
		at = al+ab+abm;
		cout << " AL = " << al << "  " << endl;
		cout << " AB = " << ab << "  " << endl;
		cout << " Abm = " << abm << " " << endl;
		cout << " At = " << at << "  " << endl;
		break;
	case 3:
		cout << "Para calcular el volumen del tronco de una piramide ingrese los siguientes datos" << endl;
		cout << " Nota: Solo se permiten valores mayores que 0" << endl;
		h = 0;
		while ((h<=0)) {
			cout << " Ingrese el valor de la altura" << endl;
			cin >> h;
		}
		cout << " Nota: Solo se permiten valores mayores que 0" << endl;
		ab = 0;
		while ((ab<=0)) {
			cout << " Ingrese el valor del area de la base mayor" << endl;
			cin >> ab;
		}
		cout << " Nota: Solo se permiten valores mayores que 0" << endl;
		abm = 0;
		while ((abm<=0)) {
			cout << " Ingrese el valor del area de la base menor " << endl;
			cin >> abm;
		}
		// Fórmula del volumen del tronco de una piramide
		v = (0.3333333333)*h*(ab+abm+sqrtf(ab*abm));
		cout << " h = " << h << "  " << endl;
		cout << " AB = " << ab << "  " << endl;
		cout << " Abm = " << abm << " " << endl;
		cout << " V = " << v << "  " << endl;
		break;
	case 4:
		break;
	default:
		cout << " No es opcion válida " << endl;
	}
	cout << "Presione una tecla para continuar>" << endl;
	_getch();
	} while (op!=4);
	cout << " Muchas gracias por preferirnos " << endl;
	return 0;
}

