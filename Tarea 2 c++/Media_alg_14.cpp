// Miguel Flores
//14. Dada una secuencia de números leídos por teclado, que acabe con un –1,
//por ejemplo: 5,3,0,2,4,4,0,0,2,3,6,0,……,-1; Realizar el algoritmo que calcule
//la media aritmética. Suponemos que el usuario no insertará número
//negativos.
#include<iostream>
using namespace std;

int main() {
	float media;
	float n;
	float p;
	float suma;
	float total;
	cout <<"Este algoritmo de calcula la media de una secuencia de numeros" << endl;
	cout << "Ingresa el total de numeros" << endl;
	cin >> total;
	p = 1;
	suma = 0;
	while (p<=total) {
		cout << "Ingresa el numero " << p << endl;
		cin >> n;
		if (n>=0) {
			suma = suma+n;
			p = p+1;
		}
	}
	media = suma/total;
	cout << "La media es: " << media << endl;
	cout << "Es un placer servirle" << endl;
	return 0;
}

