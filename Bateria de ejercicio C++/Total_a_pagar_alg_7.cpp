// Autot Miguel Flores
//7. Una tienda ofrece un descuento del 15% sobre el total de la compra durante
//el mes de febrero. Dado un mes y un importe (monto), calcular cuál es la
//cantidad que se debe cobrar al cliente.

#include<iostream>
using namespace std;

int main() {
	float a_pagar;
	float cantidad;
	float mes;
	float monto;
	cout << "Este algoritmo te da un descuento especial si ingresas 2 en mes, que lo disfrutes." << endl;
	cout << " Ingrese el monto de su cuenta" << endl;
	cin >> monto;
	cout << " Ingrese su numero de mes " << endl;
	cin >> mes;
	if ((monto>0)) {
		if ((mes==2)) {
			cantidad = (monto*15)/100;
			a_pagar = monto-cantidad;
			cout << " cantidad a pagar: " << a_pagar << " " << endl;
		} else {
			cout << "total a pagar:" << monto << " " << endl;
		}
	}
	cout << " Es un placer servirle" << endl;
	return 0;
}

