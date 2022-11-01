// Autor Miguel Flores
//3. Algoritmo que lea tres números distintos y nos diga cuál de ellos es el
//mayor.

#include<iostream>
using namespace std;

int main() {
	float numx;
	float numy;
	float numz;
	cout << "Este algoritmo te muestra cual de los tres numeros que te pide es mayor, que lo disfrutes" << endl;
	cout << "Ingrese su primer numx" << endl;
	cin >> numx;
	cout << "Ingrese su segundo numy" << endl;
	cin >> numy;
	cout << "Ingrese su segundo numz" << endl;
	cin >> numz;
	if (numx>numy) {
		if (numx>numz) {
			cout << "El mumero mayor es:" << numx << " " << endl;
		}
	}
	if (numy>numx) {
		if (numy>numz) {
			cout << "El mumero mayor es:" << numy << " " << endl;
		}
	}
	if (numz>numx) {
		if (numz>numy) {
			cout << "El mumero mayor es:" << numz << " " << endl;
		}
	}
	cout << "Es un placer servirle" << endl;
	return 0;
}

