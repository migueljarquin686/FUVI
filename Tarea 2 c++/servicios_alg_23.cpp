// Miguel Flores

#include<iostream>
using namespace std;

int main() {
	float bjamon;
	float cerveza;
	float cuenta_1;
	float cuenta_2;
	float cuenta_3;
	float refresco;
	float total;
	cout << "¿Cuantos bocadillos de jamon consumio?" << endl;
	cin >> bjamon;
	cout << "¿Cuantos refrescos consumio?" << endl;
	cin >> refresco;
	cout << "¿Cuantas cervezas consumio?" << endl;
	cin >> cerveza;
	cuenta_1 = bjamon*1.5;
	cuenta_2 = refresco*1.05;
	cuenta_3 = cerveza*0.75;
	total = cuenta_1+cuenta_2+cuenta_3;
	cout << "********CUENTA*********" << endl;
	cout << "Bocadillos de jamon***********" << cuenta_1 << " $" << endl;
	cout << "Refrescos*********************" << cuenta_2 << " $" << endl;
	cout << "Cerveza***********************" << cuenta_3 << " $" << endl;
	cout << "TOTAL*************************" << total << " $" << endl;
	cout << "" << endl;
	cout << "Gracias por su compra" << endl;
	return 0;
}

