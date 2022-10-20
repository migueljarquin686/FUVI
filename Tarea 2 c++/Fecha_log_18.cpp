// Autor Miguel Flores

#include<iostream>
using namespace std;

int main() {
	int a;
	int d;
	int m;
	string nombremes;
	cout << "Ingrese el dia" << endl;
	cin >> d;
	cout << " Ingrese el mes" << endl;
	cin >> m;
	cout << "Ingres el year" << endl;
	cin >> a;
	if (d<1 || d>31) {
		do {
			cout << "Día fuera de rango" << endl;
			cout << "Ingrese un día" << endl;
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
			cout << "Año fuera de rango" << endl;
			cout << "Ingrese un año" << endl;
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

