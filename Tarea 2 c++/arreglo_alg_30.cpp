// Autor Miguel Flores

// Realizar un programa que cree un arreglo de 10 enteros cuyos valores son
// introducidos por el usuario. También debe pedir un valor que se deberá
// buscar en el arreglo. El algoritmo debe decir en cuál posición se encuentra
// el valor que queríamos buscar
#include<iostream>
using namespace std;

int main() {
	int c;
	int n;
	int vector[10];
	int x;

	for (x=1;x<=10;x++) {
		cout << "Ingrese un numero" << endl;
		cin >> vector[x-1];
	}
	cout << "Ingresa un numero a buscar por favor" << endl;
	cin >> n;
	c = 0;
	for (x=1;x<=10;x++) {
		if (n==vector[x-1]) {
			cout << "El numero " << n << " Se encuentra en la posicion " << x << endl;
			c = 1;
		}
		if (c==0) {
			cout << "El numero " << n << " no se encuentra en el vector" << endl;
		}
	}
	cout << "Es un placer servirle" << endl;
	return 0;
}

