// Autor Miguel Angel

#include<iostream>
#include<cmath>
#include<conio.h>
using namespace std;

int main() {
	float a;
	float ar;
	int op;
	float v;
	do {
	system("cls");
	cout << "Menu de opciones del octaedro" << endl;
	cout << "1- calculo del area del octaedro" << endl;
	cout << "2- Calculo del volumen del octaedro" << endl;
	cout << "3- Salir" << endl;
	cout << "Ingrese una opcion" << endl;
	cin >> op;
	system("cls");
	switch (op) {
	case 1:
		cout << " Para calcular el area del octaedro ingrese el siguiente dato" << endl;
		cout << " Nota: Solo se permite un valor mayor que 0" << endl;
		ar = 0;
		while ((ar<=0)) {
			cout << " Ingrese el valor del arista o lados" << endl;
			cin >> ar;
		}
		a = 2*pow(ar,2)*sqrtf(3);
		cout << " ar = " << ar << "  " << endl;
		cout << " A = " << a << "  " << endl;
		break;
	case 2:
		cout << " Para calcular el volumen del hexaedro ingrese el siguiente dato" << endl;
		cout << " Nota: Solo se permite un valor mayor que 0" << endl;
		ar = 0;
		while ((ar<=0)) {
			cout << " Ingrese el valor del arista o lado" << endl;
			cin >> ar;
		}
		v = (sqrtf(2)/3)*pow(ar,3);
		cout << " ar = " << ar << "  " << endl;
		cout << " V = " << v << " " << endl;
		// La relaci�n de euler: c + v = a + 2
		// caras + vertices = aristas + 2
		  	break;
	case 3:
		break;
	default:
		cout << " No es opcion v�lida " << endl;
	}
		cout << "Presione una tecla para continuar>" << endl;
	_getch();
	} while (op!=3);
	cout << " Muchas gracias por preferirnos " << endl;
	return 0;
}

