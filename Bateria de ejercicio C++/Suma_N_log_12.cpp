// Autor Miguel Flores
//12. Se pide representar el algoritmo que nos calcule la suma de los N primeros
//números naturales. N se leerá por teclado.
#include<iostream>
using namespace std;

int main() {
	int c;
	int n;
	float s;
	int suma;
	cout << "Este algoritmo te muestra la suma de los n primeros numeros naturales, que lo disfrutes." << endl;
	cout << "Ingrese hasta que numero desea la suma" << endl;
	cin >> n;
	c = 0;
	while (n>c) {
		c = c+1;
		s = s+c;
	}
	cout << "La suma es: " << s << endl;
	cout << "Es un placer servirle" << endl;
	return 0;
}

