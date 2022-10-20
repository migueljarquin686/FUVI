//Autor Miguel Flores

#include<iostream>
using namespace std;

int main() {
	int cant;
	float cb10;
	float cb100;
	float cb1000;
	float cb20;
	float cb200;
	float cb5;
	float cb50;
	float cb500;
	float cm1;
	do {
		cout << "Ingrese una cantidad" << endl;
		cin >> cant;
	} while (cant<=0);
	cb1000 = (cant/1000);
	cb500 = (cant/500);
	cb200 = (cant/200);
	cb100 = (cant/100);
	cb50 = (cant/50);
	cb20 = (cant/20);
	cb10 = (cant/10);
	cb5 = (cant/5);
	cm1 = (cant/1);
	if (cb1000>=1) {
		cout << "Tiene una cantidad de " << cb1000 << " Billetes de 1000" << endl;
	}
	if (cb500>=1) {
		cout << "Tiene una cantidad de " << cb500 << " Billetes de 500" << endl;
	}
	if (cb200>=1) {
		cout << "Tiene una cantidad de " << cb200 << " Billetes de 200" << endl;
	}
	if (cb100>=1) {
		cout << "Tiene una cantidad de " << cb100 << " Billetes de 100" << endl;
	}
	if (cb50>=1) {
		cout << "Tiene una cantidad de " << cb50 << " Billetes de 50" << endl;
	}
	if (cb20>=1) {
		cout << "Tiene una cantidad de " << cb20 << " Billetes de 20" << endl;
	}
	if (cb10>=1) {
		cout << "Tiene una cantidad de " << cb10 << " Billetes de 10" << endl;
	}
	if (cb5>=1) {
		cout << "Tiene una cantidad de " << cb5 << " Billetes de 5" << endl;
	}
	if (cm1>=1) {
		cout << "Tiene una cantidad de " << cm1 << " Monedas de 1 cordoba" << endl;
	}
	cout << "Es un placer servile" << endl;
	return 0;
}

