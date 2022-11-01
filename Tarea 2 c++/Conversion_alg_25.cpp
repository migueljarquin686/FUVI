// Autor Miguel Flores
//25. Crear un algoritmo que convierta de °C a °F o viceversa una temperatura
//ingresada por el usuario. De antemano, se le debe preguntar al usuario de
//qué sistema a qué sistema desea convertir.
#include<iostream>
using namespace std;

int main() {
	float c;
	float f;
	int opc;
	cout << "Este algoritmo te permite hacer conversion con grados Fahrenheit a grados celcius y viceversa, que lo disfrutes. " << endl;
	cout << "Menu de opciones de conversion" << endl;
	cout << "1-calculo de grados celcius a grados Fahrenheit" << endl;
	cout << "2-calculo de grados Fahrenheit a grados celcius" << endl;
	cout << "ingrese una opcion:" << endl;
	cin >> opc;
	switch (opc) {
	case 1:
		cout << "escribe los grados celcius" << endl;
		cin >> c;
		f = (c*(1.8))+32;
		cout << "Los grados Fahrenheit convertidos a Celcius son:" << f << endl;
		break;
	case 2:
		cout << "escribe los grados Fahrenheit" << endl;
		cin >> f;
		c = (f-32)*(0.5555555556);
		cout << "Los grados Fahrenheit convertidos a celsius son:" << c << endl;
		break;
	default:
		cout << " No es opcion válida" << endl;
	}
	cout << "Es un placer servirle" << endl;
	return 0;
}

