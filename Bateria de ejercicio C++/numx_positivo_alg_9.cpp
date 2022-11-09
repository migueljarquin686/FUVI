//Autor Miguel Flores
/*9. Modificar el algoritmo anterior, de forma que,si se teclea un cero, se vuelva
a pedir el número por teclado (así hasta que se teclee un número mayor
que cero).
*/

#include<iostream>
using namespace std;

int main() {
	int numx;
		cout << "Este algoritmo esta basado en el anterior de los pares e impares " << endl;
	do {
		cout << " Ingrese su numx" << endl;
		cin >> numx;
		if (numx>0) {
			cout << "el numero es aceptable: " << numx << " " << endl;
		}
	} while (numx==0);
	if ((numx>=1)) {
		if ((numx%2==0)) {
			cout << "Es un numero par" << endl;
		}
		if ((numx%2>0)) {
			cout << "Es un numero impar" << endl;
		}
	}
	cout << "Es un placer servirle" << endl;
	return 0;
}

