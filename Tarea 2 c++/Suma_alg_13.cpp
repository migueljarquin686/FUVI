// Autor Miguel Flores
//13. Se pide representar el algoritmo que nos calcule la suma de los N primeros
//números pares. Es decir, si insertamos un 5, nos haga la suma de
//6+8+10+12+14.
#include<iostream>
using namespace std;

int main() {
	int num1;
	int num2;
	int num3;
	int num4;
	int num5;
	int p;
	int suma1;
	int suma2;
	int x;
	cout << "Este algoritmo te muestra la suma de 5 n numeros pares cercanos, que lo disfrutes" << endl;
	cout << "Ingrese un numero" << endl;
	cin >> x;
	p = x;
	if (x % 2==1) {
		num1 = (x+1);
		num2 = (x+1+2);
		num3 = (x+1+4);
		num4 = (x+1+6);
		num5 = (x+1+8);
		cout << num1 << endl;
		cout << num2 << endl;
		cout << num3 << endl;
		cout << num4 << endl;
		cout << num5 << endl;
		suma2 = num1+num2+num3+num4+num5;
		cout << "La suma total de los primeros cinco numeros pares es:" << suma2 << " " << endl;
	}

	if (x % 2== 0) {
		num1 = (x+2);
		num2 = (x+4);
		num3 = (x+6);
		num4 = (x+8);
		num5 = (x+10);
		cout << num1 << endl;
		cout << num2 << endl;
		cout << num3 << endl;
		cout << num4 << endl;
		cout << num5 << endl;
		suma1 = num1+num2+num3+num4+num5;
		cout << "La suma de los cinco  primeros numeros pares es: " << suma1 << endl;
	}
	return 0;
}

