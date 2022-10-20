//Autor Miguel Flores

#include<iostream>
using namespace std;

int main() {
	int numx;
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

