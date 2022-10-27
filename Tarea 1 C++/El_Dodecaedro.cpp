//Autor Miguel Flores

#include<iostream>
#include<cmath>
using namespace std;

int main() {
	float a;
	float ap;
	float apen;
	float apent;
	float ar;
	int op;
	float v;
	cout << "Menu de opciones del Dodecaedro" << endl;
	cout << "1- calculo del area del Dodecaedro" << endl;
	cout << "2- calculo del volumen del Dodecaedro" << endl;
	cout << "3- Calculo del area pentagonal del Dodecaedro" << endl;
	cout << "Ingrese una opcion" << endl;
	cin >> op;
	switch (op) {
	case 1:
		cout << " Para calcular el area del Dodecaedro ingrese el siguiente datos" << endl;
		cout << " Nota: Solo se permite un valor mayor que 0" << endl;
		ar = 0;
		while ((ar<=0)) {
			cout << " Ingrese el valor del arista o lados" << endl;
			cin >> ar;
		}
		a = 3*pow(ar,2)*sqrtf(25+(10*sqrtf(5)));
		cout << " ar = " << ar << "  " << endl;
		cout << " A = " << a << "  " << endl;
		break;
	case 2:
		cout << " Para calcular el volumen del Dodecaedro ingrese el siguiente dato" << endl;
		cout << " Nota: Solo se permite un valor mayor que 0" << endl;
		ar = 0;
		while ((ar<=0)) {
			cout << " Ingrese el valor del arista o lados" << endl;
			cin >> ar;
		}
		v = (0.25)*(15+7*sqrtf(5))*pow(ar,3);
		cout << " ar = " << ar << "  " << endl;
		cout << " V = " << v << " " << endl;
		break;
	case 3:
		cout << " Para calcular el area pentagonal del dodecaedro ingrese los siguientes datos" << endl;
		cout << " Nota: Solo se permite un valor mayor que 0" << endl;
		ar = 0;
		while ((ar<=0)) {
			cout << " Ingrese el valor del arista o lado" << endl;
			cin >> ar;
		}
		cout << " Nota: Solo se permite un valor mayor que 0" << endl;
		ap = 0;
		while ((ap<=0)) {
			cout << " Ingrese el valor del apotema" << endl;
			cin >> ap;
		}
		apen = (2.5)*ar*ap;
		cout << " ar = " << ar << "  " << endl;
		cout << " ap = " << ap << "  " << endl;
		cout << " Apen = " << apen << " " << endl;
		// La relación de euler: c + v = a + 2
		// caras + vertices = aristas + 2
		break;
	default:
		cout << " No es opcion válida " << endl;
	}
	cout << " Muchas gracias por preferirnos " << endl;
	return 0;
}

