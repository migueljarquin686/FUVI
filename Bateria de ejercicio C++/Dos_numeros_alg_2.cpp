// Autor Miguel Flores
//2. Algoritmo que lea dos números y nos diga cuál de ellos es mayor o bien si
//son iguales
#include<iostream>
using namespace std;

int main() {
	float numx;
	float numy;
	cout << "Este algoritmo te dice si dos numeros son iguales y quien de ellos es el mayor, que lo disfrutes." << endl;
	cout << "Ingrese su primer numx" << endl;
	cin >> numx;
	cout << "Ingrese su segundo numy" << endl;
	cin >> numy;
	if (numx<numy) {
		cout << " El numero mayor es: " << numy << " " << endl;
	}
	if ((numx>numy)) {
		cout << " El numero mayor es: " << numx << " " << endl;
	}
	if ((numx==numy)) {
		cout << " los numeros son iguales" << endl;
	}
	cout << " Es un placer servirle " << endl;
	return 0;
}

