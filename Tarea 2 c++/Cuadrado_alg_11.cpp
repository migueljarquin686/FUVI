// Autor Miguel Flores
#include<iostream>
using namespace std;

int main() {
	float multiplicador;
	float r;
	cout << "Presione una tecla" << endl;
	cin.get(); // a diferencia del pseudocódigo, espera un Enter, no cualquier tecla
	cout << "El cuadrado de los 9 primeros numeros son:" << endl;
	for (multiplicador=1;multiplicador<=9;multiplicador++) {
		r = multiplicador*multiplicador;
		cout << multiplicador << " x " << multiplicador << " = " << multiplicador*multiplicador << endl;
	}
	cout << "Es un placer servirle" << endl;
	return 0;
}

