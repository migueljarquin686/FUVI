// Autot Miguel Flores

#include<iostream>
using namespace std;

int main() {
	float a_pagar;
	float cantidad;
	float mes;
	float monto;
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

