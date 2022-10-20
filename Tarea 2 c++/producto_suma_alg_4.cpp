//Auto Miguel Flores

#include<iostream>
using namespace std;


int main() {
	float numx;
	float numy;
	float numz;
	float producto;
	float suma;
	cout << "Ingrese su primer numx" << endl;
	cin >> numx;
	cout << "Ingrese su segundo numy" << endl;
	cin >> numy;
	cout << "Ingrese su segundo numz" << endl;
	cin >> numz;
	if (numx<0) {
		producto = numx*numy*numz;
		cout << " La multiplicación de los tres numeros es:" << producto << " " << endl;
	}
	if (numx>=0) {
		suma = numx+numy+numz;
		cout << "La suma de los tres numeros es:" << suma << " " << endl;
	}
	cout << "Es un placer servirle" << endl;
	return 0;
}

