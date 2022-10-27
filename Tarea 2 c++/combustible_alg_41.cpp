// Autor Miguel Flores
// Diseñar un algoritmo que solicite la cantidad (en litros) de combustible a
// echar a un vehículo, y muestre el monto a pagar según la cantidad y el
// tipo de combustible solicitado, tomando como referencia la siguiente
// tabla:
#include<iostream>
using namespace std;

int main() {
	float c;
	float diesel;
	float gasolina_regular;
	float gasolina_super;
	float l;
	float t;
	
	gasolina_regular = 32.85;
	gasolina_super = 33.48;
	diesel = 28.45;
	cout << "Este algoritmo te calcula el total a pagar por el tipo de combustible para un carro, que lo disfrute." << endl;
	cout << "Ingrese la cantidad de litros de combustible que necesita" << endl;
	cin >> l;
	cout << "Tipos de combustible " << endl;
	cout << " 1 Gasolina_regular" << endl;
	cout << " 2 gasolina_super" << endl;
	cout << " 3 Diesel" << endl;
	cout << "Ingrese el tipo de combustible " << endl;
	cin >> c;
	if (c==1) {
		t = l*32.85;
		cout << "Usted compro " << l << " litros de gasolina regular" << endl;
		cout << "Total= " << t << " $" << endl;
	}
	if (c==2) {
		t = l*33.48;
		cout << "Usted compro " << l << " litros de gasolina super" << endl;
		cout << "Total= " << t << " $" << endl;
	}
	if (c==3) {
		t = l*28.45;
		cout << "Usted compro " << l << " litros de Diesel" << endl;
		cout << "Total= " << t << " $" << endl;
	}
	cout << "Es un placer servirle" << endl;
	return 0;
}

