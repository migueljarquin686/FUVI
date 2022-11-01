// Autor Miguel Flores
//16. Algoritmo que lea números enteros hasta teclear 0, y nos muestre el
//máximo, el mínimo y la media de todos ellos.

#include<iostream>
using namespace std;

#define SIN_TIPO string

int main() {
	bool band;
	float SIN_TIPO_false;
	float max;
	float media;
	float min;
	float num;
	float p;
	float suma;
	band = true;
	suma = 0;
	p = 0;
	do {
		cout << "Este algoritmo te lee numeros hasta teclear cero y te muetra el maximo,minimo y la media, que lo disfrutes" << endl;
		cout << "Ingrese un numero:" << endl;
		cin >> num;
		suma = suma+num;
		p = p+1;
		media = suma/p;
		if (band==true) {
			max = num;
			min = num;
			band = false;
		} else {
			if (num>max) {
				max = num;
			} else {
				if (num<min) {
					min = num;
				}
			}
		}
	} while (num!=0);
	cout << "El numero mayor es: " << max << endl;
	cout << "El numero minimo es: " << min << endl;
	cout << "La media es: " << media << endl;
	cout << "Es un placer servirle" << endl;
	return 0;
}

