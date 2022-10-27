// Autor Mguel Flores
// Diseñar un algoritmo que, dados 10 números naturales, indique cuántos de
// ellos son números pares, nos muestre estos y calcule la media aritmética de
// los impares.
#include<iostream>
using namespace std;

int main() {
	float impares;
	float media;
	int n;
	float pares;
	float suma;
	float x;
cout << "Este algoritmo te indica cuantos numeros son pares y cuantos son impares" << endl;
	for (x=1;x<=10;x++) {
		cout << "Ingrese un numero" << endl;
		cin >> n;
		if (n%2==0) {
			pares = pares+1;
			cout << "el numero es par:" << n << endl;
			cout << "**************************" << endl;
		} else {
			if (n%2==1) {
				impares = impares+1;
				suma = suma+n;
				media = suma/impares;
			}
		}
	}
	cout << "Los numeros pares son:" << pares << endl;
	cout << "los numeros impares son:" << impares << endl;
	cout << "La media de los impares es:" << media << endl;
	cout << " " << endl;
	cout << "Es un placer servirle" << endl;
	return 0;
}

