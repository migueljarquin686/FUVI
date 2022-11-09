// Autor Miguel Flores
//37.Considere el siguiente pseudocódigo:
#include<iostream>
using namespace std;


int main() {
	int i;
	int n;
	cout << "Ingrese un numero" << endl;
	cin >> n;
	i = 0;
	while ((n>1)) {
		if (((n%2)==0)) {
			n = n/2;
		} else {
			n = n*3+1;
			i = i+1;
			cout << i << endl;
		}
	}
	cout << "¿Cuando se detiene este algoritmo?" << endl;
	cout << "R= El algoritmo se detiene cuando el numero procesado es igual a 1" << endl;
	cout << "" << endl;
	cout << "¿Para que sirve la variable i?" << endl;
	cout << "R= Sirve para contar las veces en que el numero es procesado en la condicion sino" << endl;
	cout << "" << endl;
	cout << "¿Se debe recibir alguna entrada del usuario?" << endl;
	cout << "R= Si cuando esta iniciando le pide un numero n" << endl;
	cout << "" << endl;
	cout << "¿Que resultado entrega el algoritmo?" << endl;
	cout << "R= Con la variable i impresa entrega una serie de numeros del 1 hasta la cantidad de veces que un numero impar paso por alli, como un contador" << endl;
	cout << "" << endl;
	cout << " Suponga que el usuario ingresa el numero 3, ¿Que resultado entrega el algoritmo?" << endl;
	cout << "R= entrega como resultado un 1 y un 2, lo que significa que va aumentando de 1 en 1 hasta que ya no queden numeros impares y n=1" << endl;
	cout << "" << endl;
	cout << "Es un placer servirle" << endl;
	return 0;
}

