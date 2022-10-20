// Autor Miguel Flores

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

