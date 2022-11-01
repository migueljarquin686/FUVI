//Auto Miguel Flores
//4. Diseñar un algoritmo que pida por teclado tres números; si el primero es
//negativo, debe imprimir el producto de los tres y si no lo es, imprimirá la
//suma.
#include<iostream>
using namespace std;

int main() {
	float numx;
	float numy;
	float numz;
	float producto;
	float suma;
	cout << "Este algoritmo te pide tres numeros y si el primero es negativo de imprime el producto y si no te imprime la suma, que lo disfrutes" << endl;
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

