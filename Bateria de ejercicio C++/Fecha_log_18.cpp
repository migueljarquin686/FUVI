// Autor Miguel Flores
//18. Leer tres n�meros que denoten una fecha (d�a, mes, a�o). Comprobar que
//es una fecha v�lida. Si no es v�lida escribir un mensaje de error. Si es v�lida
//escribir la fecha cambiando el n�mero del mes por su nombre. Ej. Si se
//introduce 1 2 2021, se deber� imprimir �1 de febrero de 2021�. El a�o debe
//ser mayor que 0.
#include<iostream>
using namespace std;

int main() {
	int a;
	int d;
	int m;
	string nombremes;
	cout << "Este algoritmo te muestra una fecha segun los datos que te pide, que lo disfrutes." << endl;
	cout << "Los valores que le pide ingreselos en numeros enteros" << endl;
	cout << "Ingrese el dia" << endl;
	cin >> d;
	cout << " Ingrese el mes" << endl;
	cin >> m;
	cout << "Ingrese el year" << endl;
	cin >> a;
	if (d<1 || d>31) {
		do {
			cout << "D�a fuera de rango" << endl;
			cout << "Ingrese un d�a" << endl;
			cin >> d;
		} while (!(d>0 && d<32));
	}
	if (m<1 || m>12) {
		do {
			cout << "Mes fuera de rango" << endl;
			cout << "Ingrese un mes" << endl;
			cin >> m;
		} while (!(m>0 && m<13));
	}
	if (a<1) {
		do {
			cout << "A�o fuera de rango" << endl;
			cout << "Ingrese un a�o" << endl;
			cin >> a;
		} while (a<=0);
	}
	switch (m) {
	case 1:
		nombremes = "Enero";
		break;
	case 2:
		nombremes = "Febrero";
		break;
	case 3:
		nombremes = "Marzo";
		break;
	case 4:
		nombremes = "Abril";
		break;
	case 5:
		nombremes = "Mayo";
		break;
	case 6:
		nombremes = "Junio";
		break;
	case 7:
		nombremes = "Julio";
		break;
	case 8:
		nombremes = "Agosto";
		break;
	case 9:
		nombremes = "Septiembre";
		break;
	case 10:
		nombremes = "Octubre";
		break;
	case 11:
		nombremes = "Noviembre";
		break;
	case 12:
		nombremes = "Diciembre";
		break;
	}
	cout << d << " de " << nombremes << " de " << a << endl;
	cout << "Es un placer servirle" << endl;
	return 0;
}

