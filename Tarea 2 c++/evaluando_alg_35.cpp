//Autor Miguel Flores
//35. Elabore un algoritmo que dado un valor X, calcule:
//f(x) = ((pow((x-2),2))/2)+((pow((x-4),4))/4)+((pow((x-6),6))/6);
//f(x) = ((pow((x+2),2))/2)+((pow((x+4),4))/4)+((pow((x+6),6))/6);
#include<iostream>
#include<cmath>
using namespace std;

int main() {
	float f;
	int x;
	cout << "Este algoritmo te calcula el valor de la ecuacion segun el numero ingresado" << endl;
	cout << "Ingrese el valor de de el numero X" << endl;
	cin >> x;
	if (x>0) {
		f = ((pow((x-2),2))/2)+((pow((x-4),4))/4)+((pow((x-6),6))/6);
		cout << "Para X positivo el valor es: " << f << endl;
	} else {
		if (x<0) {
			f = ((pow((x+2),2))/2)+((pow((x+4),4))/4)+((pow((x+6),6))/6);
			cout << f << endl;
			cout << "Para X negativo el valor es: " << f << endl;
		}
	}
	cout << "Es un placer servirle" << endl;
	return 0;
}

