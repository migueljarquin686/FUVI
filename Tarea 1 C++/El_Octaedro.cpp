// Autor Miguel Angel

#include<iostream>
#include<cmath>
using namespace std;

int main() {
	float a;
	float ar;
	int op;
	float v;
	cout << "Menu de opciones del octaedro" << endl;
	cout << "1- calculo del area del octaedro" << endl;
	cout << "2- Calculo del volumen del octaedro" << endl;
	cout << "Ingrese una opcion" << endl;
	cin >> op;
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
		// La relación de euler: c + v = a + 2
		// caras + vertices = aristas + 2
		break;
	default:
		cout << " No es opcion válida " << endl;
	}
	cout << " Muchas gracias por preferirnos " << endl;
	return 0;
}

