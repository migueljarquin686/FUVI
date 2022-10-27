// Autor Miguel Flores
//17. Algoritmo que visualice la cuenta de los números que son múltiplos de 2 o
//de 3 que hay entre 1 y 100.
#include<iostream>
using namespace std;

int main() {
	int a;
	int b;
	int m;
	m = 1;
	a = 0;
	b = 0;
	cout << "Este algoritmo te muestra los numeros multiplos de 2 y de 3 que hay del 1 al 100" << endl;
	while (m<=100) {
		if (m%2==0) {
			cout << "Numero multiplo de 2:" << m << endl;
			a = a+1;
		}
		if (m%3==0) {
			cout << "Numero multiplo de 3:" << m << endl;
			b = b+1;
		}
		m = m+1;
	}
	cout << "Los numeros multiplos de 2: " << a << endl;
	cout << "Los numeros multiplos de 3: " << b << endl;
		cout << "Este algoritmo te mostro los numeros multiplos de 2 y de 3 que hay del 1 al 100" << endl;
	cout << "Es un placer servirle" << endl;
	return 0;
}

