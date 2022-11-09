// Autor Miguel Flores

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
	// 42.Diseñar el algoritmo que, al introducir una cantidad de dinero expresado
	// en Córdobas, nos indique cuántos billetes y monedas se puede tener
	// según Billetes y monedas en circulación
	// (https://www.bcn.gob.ni/billetes_monedas/circulacion/circulacion.php )
	// del Banco Central de Nicaragua
	cout << "ESTE ALGORITMO TE MUESTRA UNA CANTIDAD INGRESADA EN LOS POSIBLES CAMBIOS DE BILLETES Y MONEDAS DEL PAIS" << endl;
	cout << "**********************************************" << endl;
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
	if (cant%1000==0) {
		cout << "Tiene una cantidad de " << cb1000 << " Billetes de 1000" << endl;
	}
	if (cant%500==0) {
		cout << "Tiene una cantidad de " << cb500 << " Billetes de 500" << endl;
	}
	if (cant%200==0) {
		cout << "Tiene una cantidad de " << cb200 << " Billetes de 200" << endl;
	}
	if (cant%100==0) {
		cout << "Tiene una cantidad de " << cb100 << " Billetes de 100" << endl;
	}
	if (cant%50==0) {
		cout << "Tiene una cantidad de " << cb50 << " Billetes de 50" << endl;
	}
	if (cant%20==0) {
		cout << "Tiene una cantidad de " << cb20 << " Billetes de 20" << endl;
	}
	if (cant%10==0) {
		cout << "Tiene una cantidad de " << cb10 << " Billetes de 10" << endl;
	}
	if (cant%5==0) {
		cout << "Tiene una cantidad de " << cb5 << " Billetes de 5" << endl;
	}
	if (cant%1==0) {
		cout << "Tiene una cantidad de " << cm1 << " Monedas de 1 cordoba" << endl;
	}
	cout << "Es un placer servile" << endl;
	return 0;
}

