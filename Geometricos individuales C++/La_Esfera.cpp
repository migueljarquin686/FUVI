//Autor Miguel Flores

#include<iostream>
#include<cmath>
#include<conio.h>
using namespace std;

int main() {
	float a;
	float h;
	float ng;
	int op;
	float pi;
	float r;
	float rm;
	float v;
	float vc;
	do {
	system("cls");
	cout << "Menu de opciones de la esfera, seleccione un numero" << endl;
	cout << "1- calculo del volumen de la esfera respecto al del cilindro" << endl;
	cout << "2- calculo del area de una esfera" << endl;
	cout << "3- Calculo del volumen de una esfera" << endl;
	cout << "4-Calculo del area de la zona esférica " << endl;
	cout << "5-Calculo del area del casquete esferico" << endl;
	cout << "6-Calculo del volumen de la zona esferica" << endl;
	cout << "7-Calculo del volumen del casquete esferico" << endl;
	cout << "8-Calculo del area del huso esferico" << endl;
	cout << "9-Calculo del volumen de la cuña esferica" << endl;
	cout << "10- Salir" << endl;
	cout << "Ingrese una opcion" << endl;
	cin >> op;
	system("cls");
	switch (op) {
	case 1:
		do {
			cout << " Para calcular el volumen de la esfera respecto al cilindro ingrese los siguientes datos" << endl;
			cout << " Ingrese el valor del volumen del cilindro" << endl;
			cin >> vc;
			if ((vc>0)) {
				// Fórmula para el volumen de la eafera respecto al cilindro
				v = (0.6666666667)*vc;
				cout << " Vc = " << vc << "  " << endl;
				cout << " V = " << v << "  " << endl;
			} else {
				cout << "Usted a ingresado valores incorrectos" << endl;
			}
		} while (v<=0);
		break;
	case 2:
		do {
			cout << " Para calcular el area de una esfera ingrese los siguientes datos" << endl;
			cout << " Ingrese el valor del radio" << endl;
			cin >> r;
			if ((r>0)) {
				// Fórmula del area de una esfera
				a = 4*M_PI*(pow(r,2));
				cout << " r = " << r << "  " << endl;
				cout << " A = " << a << "  " << endl;
			} else {
				cout << "Usted a ingresado un valor incorrecto" << endl;
			}
		} while (a<=0);
		break;
	case 3:
		do {
			cout << " Para calcular el volumen de una esfera ingrese los siguientes datos" << endl;
			cout << " Ingrese el valor del radio" << endl;
			cin >> r;
			if ((r>0)) {
				// Fórmula para el volumen de una esfera
				v = (1.333333333)*M_PI*pow(r,3);
				cout << " r = " << r << "  " << endl;
				cout << " V = " << v << " " << endl;
			} else {
				cout << "Usted a ingresado un valor incorrecto" << endl;
			}
		} while (v<=0);
		break;
	case 4:
		do {
			cout << " Para calcular el area de la zona esferica de la esfera ingrese los siguientes datos" << endl;
			cout << " Ingrese el valor del Radio mayor" << endl;
			cin >> rm;
			cout << " Ingrese el valor de la altura" << endl;
			cin >> h;
			if ((rm>0) && (h>0)) {
				// Fórmula para el area de la zona esferica de la esfera
				a = 2*M_PI*rm*h;
				cout << " Rm = " << rm << "  " << endl;
				cout << " h = " << h << "  " << endl;
				cout << " A = " << a << " " << endl;
			} else {
				cout << "Usted a ingresado valores incorrectos" << endl;
			}
		} while (a<=0);
		break;
	case 5:
		do {
			cout << " Para calcular el area del casqueta esferico de la esfera ingrese los siguientes datos" << endl;
			cout << " Ingrese el valor del Radio mayor" << endl;
			cin >> rm;
			cout << " Ingrese el valor de la altura" << endl;
			cin >> h;
			if ((rm>0) && (h>0)) {
				// Fórmula para el area del casquete esferico de la esfera
				a = 2*M_PI*rm*h;
				cout << " Rm = " << rm << "  " << endl;
				cout << " h = " << h << "  " << endl;
				cout << " A = " << a << " " << endl;
			} else {
				cout << "Usted a ingresado valores incorrectos" << endl;
			}
		} while (a<=0);
		break;
	case 6:
		do {
			cout << " Para calcular el volumen de la zona esferica de la esfera ingrese los siguientes datos" << endl;
			cout << " Ingrese el valor del radio" << endl;
			cin >> r;
			cout << " Ingrese el valor de la altura" << endl;
			cin >> h;
			if ((h>0) && (r>0)) {
				// Fórmula para el volumen de la zona esferica de la esfera
				v = ((M_PI*h*(pow(h,2)+3*pow(r,2)+3*pow(r,2))))/6;
				cout << " h = " << h << "  " << endl;
				cout << " r = " << r << "  " << endl;
				cout << " V = " << v << " " << endl;
			} else {
				cout << "Usted a ingresado valores incorrectos" << endl;
			}
		} while (v<=0);
		break;
	case 7:
		do {
			cout << " Para calcular el volumen del casquete esferico de la esfera ingrese los siguientes datos" << endl;
			cout << " Ingrese el valor del radio" << endl;
			cin >> r;
			cout << " Ingrese el valor de la altura" << endl;
			cin >> h;
			if ((h>0) && (r>0)) {
				// Fórmula para el volumen de la zona esferica de la esfera
				v = ((M_PI*pow(h,2)*(3*r-h)))/3;
				cout << " h = " << h << "  " << endl;
				cout << " r = " << r << "  " << endl;
				cout << " V = " << v << " " << endl;
			} else {
				cout << "Usted a ingresado un valor incorrecto" << endl;
			}
		} while (v<=0);
		break;
	case 8:
		do {
			cout << "Para calcular el area del uso esferico ingrese los siguientes datos" << endl;
			cout << " Ingrese el valor del radio" << endl;
			cin >> r;
			cout << " Ingrese el valor del numero de grados" << endl;
			cin >> ng;
			if ((r>0) && (ng>0)) {
				// Fórmula del area de la cuña esferica 
				a = (4*M_PI*pow(r,2)*ng)/360;
				cout << " r = " << r << "  " << endl;
				cout << " ng = " << ng << " " << endl;
				cout << " A = " << a << "  " << endl;
			} else {
				cout << "Usted a ingresado valores incorrectos" << endl;
			}
		} while (a<=0);
		break;
	case 9:
		do {
			cout << "Para calcular del volumen de la cuña esferica ingrese los siguientes datos" << endl;
			cout << " Ingrese el valor del radio" << endl;
			cin >> r;
			cout << " Ingrese el valor del numero de grados" << endl;
			cin >> ng;
			if ((r>0) && (ng>0)) {
				// Fórmula del volumen de la cuña esferica 
				v = (1.333333333)*((M_PI*pow(r,3)*ng)/360);
				cout << " r = " << r << "  " << endl;
				cout << " ng = " << ng << " " << endl;
				cout << " V = " << v << "  " << endl;
			} else {
				cout << "Usted a ingresado valores incorrectos" << endl;
			}
		} while (v<=0);
		break;
	case 10:
		break;
	default:
		cout << " No es opcion válida" << endl;
	}
	cout << "Presione una tecla para continuar>" << endl;
	_getch();
	} while (op!=10);
	cout << " Muchas gracias por preferirnos " << endl;
	return 0;
}

