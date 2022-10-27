//Autor Miguel Angel

#include<iostream>
#include<cmath>
using namespace std;

int main() {
	float ab;
	float al;
	float at;
	float g;
	float h;
	int op;
	float pb;
	float pi;
	float r;
	float v;
	float vcilindro;
	cout << "Menu de opciones del cono" << endl;
	cout << "1- calculo del volumen del cono respecto al del cilindro" << endl;
	cout << "2- calculo del area lateral del cono, primera formula" << endl;
	cout << "3- Calculo del area lateral del cono, segunda fórmula" << endl;
	cout << "4-Calculo de la generatriz del cono" << endl;
	cout << "5-Calculo del area total del cono, primera formula" << endl;
	cout << "6-Calculo del area total del cono, segunda formula" << endl;
	cout << "7-Calculo del volumen del cono primera formula" << endl;
	cout << "8-Calculo del volumen del cono segunda fórmula" << endl;
	cout << "Ingrese una opcion" << endl;
	cin >> op;
	switch (op) {
	case 1:
		do {
			cout << " Para calcular el volumen del cono respecto al cilindro ingrese los siguientes datos" << endl;
			cout << " Ingrese el valor del volumen del cilindro" << endl;
			cin >> vcilindro;
			if ((vcilindro>0)) {
				// Fórmula para el volumen del cono respecto al cilindro
				v = (0.3333333333)*vcilindro;
				cout << " Vcilindro = " << vcilindro << "  " << endl;
				cout << "El volumen del cono es:" << endl;
				cout << " V = " << v << "  " << endl;
			} else {
				cout << "Usted a ingresado un valor incorrecto" << endl;
			}
		} while (v<=0);
		break;
	case 2:
		do {
			cout << " Para calcular el area lateral de un cono ingrese los siguientes datos" << endl;
			cout << " Ingrese el valor del perimetro de la base" << endl;
			cin >> pb;
			cout << " Ingrese el valor de la generatriz " << endl;
			cin >> g;
			if ((pb>0) && (g>0)) {
				// Fórmula del area lateral de un cono
				al = (pb*g)/2;
				cout << " Pb = " << pb << "  " << endl;
				cout << " g = " << g << "  " << endl;
				cout << " AL = " << al << " " << endl;
			} else {
				cout << "Usted a ingresado valores incorrectos" << endl;
			}
		} while (al<=0);
		break;
	case 3:
		do {
			cout << " Para calcular el area lateral de un cono ingrese los siguientes datos" << endl;
			cout << " Ingrese el valor del radio de la base" << endl;
			cin >> r;
			cout << " Ingrese el valor de la generatriz " << endl;
			cin >> g;
			if ((r>0) && (g>0)) {
				// Fórmula del area lateral de un cono
				al = M_PI*r*g;
				cout << " r = " << r << "  " << endl;
				cout << " g = " << g << "  " << endl;
				cout << " AL = " << al << " " << endl;
			} else {
				cout << "Usted a ingresado valores incorrectos" << endl;
			}
		} while (al<=0);
		break;
	case 4:
		do {
			cout << " Para calcular la generatriz de un cono ingrese los siguientes datos" << endl;
			cout << " Ingrese el valor de la altura" << endl;
			cin >> h;
			cout << " Ingrese el valor del radio " << endl;
			cin >> r;
			if ((h>0) && (r>0)) {
				// Fórmula de la generatriz de un cono
				g = sqrtf(pow(h,2)+pow(r,2));
				cout << " h = " << h << "  " << endl;
				cout << " r = " << r << "  " << endl;
				cout << " g = " << g << " " << endl;
			} else {
				cout << "Usted a ingresado valores incorrectos" << endl;
			}
		} while (g<=0);
		break;
	case 5:
		do {
			cout << " Para calcular el area total de un cono ingrese los siguientes datos" << endl;
			cout << " Ingrese el valor del area lateral" << endl;
			cin >> al;
			cout << " Ingrese el valor del radio " << endl;
			cin >> r;
			if ((al>0) && (r>0)) {
				// Fórmula para el area total de un cono
				at = al+(M_PI*pow(r,2));
				cout << " AL = " << al << "  " << endl;
				cout << " r = " << r << "  " << endl;
				cout << " At = " << at << " " << endl;
			} else {
				cout << "Usted a ingresado valores incorrectos" << endl;
			}
		} while (at<=0);
		break;
	case 6:
		do {
			cout << " Para calcular el area total de un cono ingrese los siguientes datos" << endl;
			cout << " Ingrese el valor del radio" << endl;
			cin >> r;
			cout << " Ingrese el valor de la generatriz" << endl;
			cin >> g;
			if ((r>0) && (g>0)) {
				// Fórmula para el area total de un cono
				at = M_PI*r*(g+r);
				cout << " r = " << r << "  " << endl;
				cout << " g = " << g << "  " << endl;
				cout << " At = " << at << " " << endl;
			} else {
				cout << "Usted a ingresado valores incorrectos" << endl;
			}
		} while (at<=0);
		break;
	case 7:
		do {
			cout << " Para calcular el volumen de un cono ingrese los siguientes datos" << endl;
			cout << " Ingrese el valor del area de la base" << endl;
			cin >> ab;
			cout << " Ingrese el valor de la altura" << endl;
			cin >> h;
			if ((ab>0) && (h>0)) {
				// Fórmula para el volumen de un cono
				v = (ab*h)/3;
				cout << " Ab = " << ab << "  " << endl;
				cout << " h = " << h << "  " << endl;
				cout << " V = " << v << " " << endl;
			} else {
				cout << "Usted a ingresado valores incorrectos" << endl;
			}
		} while (v<=0);
		break;
	case 8:
		do {
			cout << " Para calcular el volumen de un cono ingrese los siguientes datos" << endl;
			cout << " Ingrese el valor del radio" << endl;
			cin >> r;
			cout << " Ingrese el valor de la altura" << endl;
			cin >> h;
			if ((r>0) && (h>0)) {
				// Fórmula para el volumen de un cono
				v = (M_PI*pow(r,2)*h)/3;
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

