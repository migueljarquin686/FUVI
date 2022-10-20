// Autor Miguel Angel

#include<iostream>
#include<cmath>
using namespace std;

int main() {
	float a;
	float area;
	float b;
	float c;
	float d;
	int op;
	float v;
	cout << "Menu de opciones del Ortoedro" << endl;
	cout << "1- calculo de la diagonal del ortoedro" << endl;
	cout << "2- calculo del volumen del ortoedro" << endl;
	cout << "3- Calculo del area del ortoedro" << endl;
	cout << "Ingrese una opcion" << endl;
	cin >> op;
	switch (op) {
	case 1:
		do {
			cout << " Para calcular la diagonal del ortoedro ingrese los siguientes datos" << endl;
			cout << " Ingrese el valor del lado mayor " << endl;
			cin >> a;
			cout << " Ingrese el valor del lado menor " << endl;
			cin >> b;
			cout << " ingrese el valor de la altura " << endl;
			cin >> c;
			if ((a>0) && (b>0) && (c>0)) {
				// Fórmulas de la diagonal del  ortoedro
				d = sqrtf(pow(a,2)+pow(b,2)+pow(c,2));
				cout << " a = " << a << "  " << endl;
				cout << " b = " << b << "  " << endl;
				cout << " c = " << c << " " << endl;
				cout << "Resultado de la diagonal" << endl;
				cout << " D = " << d << " " << endl;
			} else {
				cout << "Usted a ingresado valores incorrectos" << endl;
			}
		} while (d<=0);
		break;
	case 2:
		do {
			cout << " Para calcular el volumen del ortoedro ingrese los siguientes datos" << endl;
			cout << " Ingrese el valor del lado mayor " << endl;
			cin >> a;
			cout << " Ingrese el valor del lado menor " << endl;
			cin >> b;
			cout << " ingrese el valor de la altura " << endl;
			cin >> c;
			if ((a>0) && (b>0) && (c>0)) {
				// Fórmulas del volumen del ortoedro
				v = a*b*c;
				cout << " a = " << a << "  " << endl;
				cout << " b = " << b << "  " << endl;
				cout << " c = " << c << " " << endl;
				cout << "Resultado del volumen" << endl;
				cout << " V = " << v << " " << endl;
			} else {
				cout << "Usted a ingresado valores incorrectos" << endl;
			}
		} while (v<=0);
		break;
	case 3:
		do {
			cout << " Para calcular el area ingrese los siguientes datos" << endl;
			cout << " Ingrese el valor del lado mayor " << endl;
			cin >> a;
			cout << " Ingrese el valor del lado menor " << endl;
			cin >> b;
			cout << " ingrese el valor de la altura " << endl;
			cin >> c;
			if ((a>0) && (b>0) && (c>0)) {
				// Fórmulas del area del ortoedro
				area = 2*(a*b+a*c+b*c);
				cout << " a = " << a << "  " << endl;
				cout << " b = " << b << "  " << endl;
				cout << " c = " << c << " " << endl;
				cout << " Resultado del area " << endl;
				cout << " Area = " << area << " " << endl;
			} else {
				cout << "Usted a ingresado valores incorrectos" << endl;
			}
		} while (a<=0);
		break;
	default:
		cout << " No es opcion válida" << endl;
	}
	cout << " Muchas gracias por preferirnos " << endl;
	return 0;
}

