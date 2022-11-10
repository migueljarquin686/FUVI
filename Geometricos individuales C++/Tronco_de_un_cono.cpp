// Miguel Flores

#include<iostream>
#include<cmath>
#include<conio.h>
using namespace std;

int main() {
	float ab;
	float abm;
	float al;
	float at;
	float g;
	float h;
	int op;
	float pi;
	float r;
	float rmn;
	float rmy;
	float v;
	do {
	system("cls");
	cout << "Menu de opciones del tronco de un cono" << endl;
	cout << "1- calculo del area lateral del tronco del cono " << endl;
	cout << "2- calculo del area total del tronco del cono" << endl;
	cout << "3- Calculo del volumen del tronco de un cono" << endl;
	cout << "4- Salir" << endl;
	cout << "Ingrese una opcion" << endl;
	cin >> op;
	system("cls");
	switch (op) {
	case 1:
		cout << " Para calcular el area lateral del tronco de un cono ingrese los siguientes datos" << endl;
		cout << " Nota: Solo se permiten valores mayores que 0" << endl;
		g = 0;
		while ((g<=0)) {
			cout << " Ingrese el valor de la generatriz" << endl;
			cin >> g;
		}
		r = 0;
		while ((r<=0)) {
			cout << " Ingrese el valor del radio " << endl;
			cin >> r;
		}
		rmy = 0;
		while ((rmy<=0)) {
			cout << " Ingrese el valor del radio mayor " << endl;
			cin >> rmy;
		}
		// Fórmula del área lateral del tronco de un cono
		al = M_PI*g*(rmy+r);
		cout << " g = " << g << "  " << endl;
		cout << " r = " << r << "  " << endl;
		cout << " Rmy = " << rmy << " " << endl;
		cout << "AL = " << al << "  " << endl;
		break;
	case 2:
		cout << "Para calcular el area total del tronco de un cono ingrese los siguientes datos" << endl;
		cout << " Nota: Solo se permiten valores mayores que 0" << endl;
		al = 0;
		while ((al<=0)) {
			cout << " Ingrese el valor del area lateral" << endl;
			cin >> al;
		}
		ab = 0;
		while ((ab<=0)) {
			cout << " Ingrese el valor del area de la base mayor" << endl;
			cin >> ab;
		}
		abm = 0;
		while ((abm<=0)) {
			cout << " Ingrese el valoR de la base menor " << endl;
			cin >> abm;
		}
		// Fórmula del área total del tronco de un cono
		at = al+ab+abm;
		cout << " AL = " << al << "  " << endl;
		cout << " AB = " << ab << "  " << endl;
		cout << " Abm = " << abm << " " << endl;
		cout << "At = " << at << "  " << endl;
		break;
	case 3:
		cout << "Para calcular el volumen del tronco de un cono ingrese los siguientes datos" << endl;
		cout << " Nota: Solo se permiten valores mayores que 0" << endl;
		h = 0;
		while ((h<=0)) {
			cout << " Ingrese el valor de la altura" << endl;
			cin >> h;
		}
		rmy = 0;
		while ((rmy<=0)) {
			cout << " Ingrese el valor del radio mayor" << endl;
			cin >> rmy;
		}
		rmn = 0;
		while ((rmn<=0)) {
			cout << " Ingrese el valor del radio menor " << endl;
			cin >> rmn;
		}
		// Fórmula del volumen del tronco de un cono
		v = (0.3333333333)*M_PI*h*(pow(rmy,2)+pow(rmn,2)+(rmy*rmn));
		cout << " h = " << h << "  " << endl;
		cout << " Rmy = " << rmy << "  " << endl;
		cout << " rmn = " << rmn << " " << endl;
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

