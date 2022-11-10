// Autor Miguel Flores

#include<iostream>
#include<cmath>
#include<conio.h>
using namespace std;

int main() {
	float a;
	float ar;
	float d;
	int op;
	float v;
	do {
	system("cls");
	cout << "Menu de opciones del hexaedro" << endl;
	cout << "1- calculo del area del hexaedro" << endl;
	cout << "2- calculo de la diagonal del hexaedro" << endl;
	cout << "3- Calculo del volumen del hexaedro" << endl;
	cout << "4- Salir" << endl;
	cout << "Ingrese una opcion" << endl;
	cin >> op;
	system("cls");
	switch (op) {
	case 1:
		cout << " Para calcular el area del hexaedro ingrese el siguiente dato" << endl;
		cout << " Nota: Solo se permite un valor mayor que 0" << endl;
		ar = 0;
		while ((ar<=0)) {
			cout << " Ingrese el valor del arista o lados" << endl;
			cin >> ar;
		}
		a = 6*pow(ar,2);
		cout << " ar = " << ar << "  " << endl;
		cout << " A = " << a << "  " << endl;
		break;
	case 2:
		cout << " Para calcular la diagonal del hexaedro ingrese el siguiente dato" << endl;
		cout << " Nota: Solo se permite un valor mayor que 0" << endl;
		ar = 0;
		while ((ar<=0)) {
			cout << " Ingrese el valor del arista o lados" << endl;
			cin >> ar;
		}
		d = ar*(sqrtf(3));
		cout << " ar = " << ar << "  " << endl;
		cout << " D = " << d << " " << endl;
		break;
	case 3:
		cout << " Para calcular el volumen del hexaedro ingrese el siguiente dato" << endl;
		cout << " Nota: Solo se permite un valor mayor que 0" << endl;
		ar = 0;
		while ((ar<=0)) {
			cout << " Ingrese el valor del arista o lado" << endl;
			cin >> ar;
		}
		v = pow(ar,3);
		cout << " ar = " << ar << "  " << endl;
		cout << " V = " << v << " " << endl;
		// La relación de euler: c + v = a + 2
		// caras + vertices = aristas + 2
			break;
				case 4:
		break;
	default:
		cout << " No es opcion válida " << endl;
	}
		cout << "Presione una tecla para continuar>" << endl;
	getch();
	} while (op!=4);
	cout << " Muchas gracias por preferirnos " << endl;
	return 0;
}

