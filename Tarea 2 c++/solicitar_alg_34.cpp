// Autor Miguel Flores
//34. Elabore un algoritmo que determine la cantidad a pedir para un artículo,
//según su inventario, se conoce para cada artículo su tipo (1,2,3)

#include<iostream>
using namespace std;

int main() {
	float cant;
	string nombre;
	float opc;
	cout << "Este algoritmo te muestra la cantidad a solicitar de productos 1,2,3 " << endl;
	cout << "Ingrese su nombre" << endl;
	cin >> nombre;
	cout << " Ingrese una opcion 1,2,3 del producto que desea solicitar" << endl;
	cin >> opc;
	cout << " Ingrese la cantidad que desea solicitar" << endl;
	cin >> cant;
	if (cant>=1 && cant<10) {
		cout << "La cantidad que usted solicito es de 20 % del producto :" << opc << endl;
	}
	if (cant>=10 && cant<20) {
		cout << "La cantidad que usted solicito es de 15 % del producto :" << opc << endl;
	}
	if (cant>=20) {
		cout << "La cantidad que usted solicito es de 10 % del producto :" << opc << endl;
	}
	cout << "Es un placer servirle " << nombre << endl;
	return 0;
}

