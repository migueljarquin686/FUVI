// Autor Miguel Flores

#include<iostream>
#include<cmath>
using namespace std;

int main() {
	float a;
	float b;
	float c;
	float disc;
	float parteimaginaria;
	float partereal;
	float r;
	float x1;
	float x2;
	// Algoritmo para calcular los valores de una ecuacion de segundo grado
	cout << "AX^2 + bx +C" << endl;
	cout << "Introduce el valor de A:";
	cin >> a;
	cout << endl; // no hay forma directa de borrar la pantalla con C++ estandar
	cout << a << "X^2 + BX +C" << endl;
	cout << "**********************" << endl;
	cout << "Introduce el valor de B:";
	cin >> b;
	cout << endl; // no hay forma directa de borrar la pantalla con C++ estandar
	cout << a << "X^2+" << b << "X + C" << endl;
	cout << "**********************" << endl;
	cout << "AX^2 + bx +C" << endl;
	cout << "Introduce el valor de C:";
	cin >> c;
	cout << endl; // no hay forma directa de borrar la pantalla con C++ estandar
	cout << a << "X^2+" << b << "X" << "+" << c << endl;
	cout << "**********************" << endl;
	disc = (pow(b,2))-4*(a*c);
	if (disc>0) {
		x1 = ((-b)+sqrtf(disc))/(2*a);
		x2 = ((-b)-sqrtf(disc))/(2*a);
		cout << "raiz 1:" << x1 << endl;
		cout << "raiz 2:" << x2 << endl;
	} else {
		if (disc<0) {
			partereal = (-b)/(2*a);
			parteimaginaria = sqrtf(abs(disc))/(2*a);
			cout << "raiz 1:" << partereal << "+" << parteimaginaria << " i" << endl;
			cout << "raiz 1:" << partereal << "-" << parteimaginaria << " i" << endl;
		} else {
			disc = 0;
			r = (-b)/(2*a);
			cout << "La raiz es igual a:" << r << endl;
		}
	}
	cout << "discriminante =" << disc << endl;
	cout << "Es un placer servirle" << endl;
	return 0;
}

