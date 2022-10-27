// Autor Miguel Flores
//32. Dados X e Y enteros positivos, diseña un algoritmo que dé el máximo común
//divisor.
#include<iostream>
using namespace std;

int main() {
	int a;
	int b;
	int c;
	int maximo;
	int x;
	int z;
	cout << "Este algoritmo te calcula el maximo comun divisor de dos numeros, que lo disfrutes." << endl;
	cout << "Ingresa sus dos numeros" << endl;
	cin >> x >> z;
	if (x>0 && z>0) {
		maximo = 1;
		c = 1;
		while (c<=x) {
			if (x%c==0 && z%c==0) {
				if (x>maximo) {
					maximo = c;
				}
			}
			c = c+1;
		}
		cout << "El maximo comun divisor es: " << maximo << endl;
	} else {
		cout << "Debes ingresar numeros mayores a cero" << endl;
	}
	return 0;
}

