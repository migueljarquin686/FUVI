// Autor Miguel Flores

#include<iostream>
using namespace std;

int main() {
	int contador;
	string contrasena;
	contador = 1;
	while (contador<=3) {
		cout << "Ingrese la contrasena por favor" << endl;
		cin >> contrasena;
		if (contrasena=="tuani") {
			cout << "La contrasena es correcta" << endl;
			contador = 4;
		} else {
			if (contador==3) {
				cout << " Lo sentimos usted a fallado sus tres intentos el sistema finalizo" << endl;
			} else {
				cout << "La contraseña es incorrecta" << endl;
			}
			contador = contador+1;
		}
	}
	cout << "Es un placer servirle" << endl;
	return 0;
}

