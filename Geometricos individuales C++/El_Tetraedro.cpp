// Miguel Flores

#include<iostream>
#include<cmath>
#include<conio.h>
using namespace std;

int main() {
	float a;
	float ar;
	float h;
	int op;
	float v;
	do {
	system("cls");
	cout << "Menu de opciones del tetraedro" << endl;
	cout << "1- calculo del area del tetraedro" << endl;
	cout << "2- calculo de la altura del tetraedro" << endl;
	cout << "3- Calculo del volumen del tetraedro" << endl;
	cout << "4- Salir" << endl;
	cout << "Ingrese una opcion" << endl;
	cin >> op;
	system("cls");
	switch (op) {
	case 1:
		cout << " Para calcular el area del tetraedro ingrese el siguiente dato" << endl;
		cout << " Nota: Solo se permite un valor mayor que 0" << endl;
		ar = 0;
		while ((ar<=0)) {
			cout << " Ingrese el valor del arista o lados" << endl;
			cin >> ar;
		}
		a = pow(ar,2)*(sqrtf(3));
		cout << " ar = " << ar << "  " << endl;
		cout << " A = " << a << "  " << endl;
		break;
	case 2:
		cout << " Para calcular la altura del tetraedro ingrese el siguiente dato" << endl;
		cout << " Nota: Solo se permite un valor mayor que 0" << endl;
		ar = 0;
		while ((ar<=0)) {
			cout << " Ingrese el valor del arista o lados" << endl;
			cin >> ar;
		}
		h = ar*(sqrtf(6)/3);
		cout << " ar = " << ar << "  " << endl;
		cout << " h = " << h << " " << endl;
		break;
	case 3:
		cout << " Para calcular el volumen del tetraedro ingrese el siguiente dato" << endl;
		cout << " Nota: Solo se permite un valor mayor que 0" << endl;
		ar = 0;
		while ((ar<=0)) {
			cout << " Ingrese el valor del arista o lado" << endl;
			cin >> ar;
		}
		v = (sqrtf(2)/12)*pow(ar,3);
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
	_getch();
	} while (op!=4);
	cout << " Muchas gracias por preferirnos " << endl;
	return 0;
}

