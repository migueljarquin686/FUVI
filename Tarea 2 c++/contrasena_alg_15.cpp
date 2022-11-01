// Autor Miguel Flores
//15. Teniendo en cuenta que la clave es “tuani”, escribir un algoritmo que nos
//pida una clave. Solo tenemos 3 intentos para acertar, si fallamos los 3
//intentos nos mostrará un mensaje indicándonos que hemos agotado esos 3
//intentos. Si acertamos la clave, saldremos directamente del programa.
#include<iostream>
using namespace std;

int main() {
	int contador;
	string contrasena;
		cout << "Este algoritmo te pide una clave y tienes 3 intentos para acertar, que lo disfrutes." << endl;
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

