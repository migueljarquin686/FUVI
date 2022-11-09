// Autor Miguel Flores
//14. Dada una secuencia de números leídos por teclado, que acabe con un –1,
//por ejemplo: 5,3,0,2,4,4,0,0,2,3,6,0,……,-1; Realizar el algoritmo que calcule
//la media aritmética. Suponemos que el usuario no insertará número
//negativos.
#include<iostream>
using namespace std;

int main() {
	double c;
	double m;
	double suma;
	m = 1;
	suma = 0;
	c = 0;
	cout << "ESTE PROGRAMA TE CALCULA LA MEDIA ARITMETICA DE UNA SERIE DE NUMEROS INGRESADOS" << endl;
	cout << "Nota: Cuando desee finalizar el programa ingrese menos 1" << endl;
	cout << " " << endl;
	while (m!=-1) {
		cout << "Ingrese un numero" << endl;
		cin >> m;
		if (m<-1) {
			cout << "Ingrese numeros positivos por favor" << endl;
			cout << "*************************************" << endl;
		} else {
			if (m!=-1) {
				suma = suma+m;
				c = c+1;
			}
		}
	}
	if (c>0) {
		cout << "La media de los numeros es: " << suma/c << endl;
		cout << "******** Es un placer servirle *******" << endl;
	}
	return 0;
}

