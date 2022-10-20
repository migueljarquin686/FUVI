// Autor Miguel Flores

#include<iostream>
#include<cmath>
using namespace std;

int main() {
	float lexema;
	float numx;
	float potenci;
	float potencia;
	cout << "Ingrese un numx" << endl;
	cin >> numx;
	if (numx<=0) {
		cout << "Error al ingresar numero" << endl;
	} else {
		potencia = pow(numx,2);
		lexema = sqrtf(numx);
		cout << "El numero es:" << numx << " " << endl;
		cout << "Su potencia es:" << potencia << " " << endl;
		cout << "Su raiz es: " << lexema << " " << endl;
	}
	cout << " Es un placer servirle " << endl;
	return 0;
}

