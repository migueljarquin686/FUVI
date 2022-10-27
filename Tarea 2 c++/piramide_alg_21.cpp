// Autor Miguel Flores
//21. Algoritmo que lea un número entero (altura) y a partir de él, cree una
//escalera invertida de asteriscos con esa altura.
#include<iostream>
using namespace std;

int main() {
	int altura;
	int i;
	int j;
	cout << "Este algoritmo te muestra una escalera invertida de acuerdo al numero que ingresa" << endl;
	cout << "Ingrese el valor que desea la escalera invertida" << endl;
	cin >> altura;
	for (i=altura;i>=1;i--) {
		for (j=0;j<=(altura-i-1);j++) {
			cout << "";
		}
		for (j=1;j<=i;j++) {
			cout << "*";
		}
		cout << "" << endl;
	}
	return 0;
}

