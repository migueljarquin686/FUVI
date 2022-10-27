// Autor Miguel Flores
// Dados 3 números, determinar si la suma de dos de ellos es igual al tercero.
// Si se cumple, escribir "iguales", si no, escribir "distintos".
#include<iostream>
using namespace std;

int main() {
	float numx;
	float numy;
	float numz;

cout << "Este algoritmo te muestra si la suma del primer numero y el segundo es igual al tercero, que lo disfrutes." << endl;
	cout << "Ingrese el primer numero" << endl;
	cin >> numx;
	cout << "Ingrese elsegundo numero" << endl;
	cin >> numy;
	cout << "Ingrese el tercer numero" << endl;
	cin >> numz;
	if ((numx+numy==numz)) {
		cout << "Son iguales" << endl;
	} else {
		cout << "Son distintos" << endl;
	}
	cout << "Es un placer servirle" << endl;
	return 0;
}

