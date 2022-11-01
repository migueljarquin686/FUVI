//Autor Miguel Flores
//40.Crear un algoritmo que reciba a>=0 y b>=0 y que calcule:
//a!/((a-b)!*b!)

#include<iostream>
using namespace std;

int main() {
	float d;
	float f;
	float j;
	float l;
	float p;
	float s;
	float t;
	float w;
	float x;
	float z;
	cout << "ESTE ALGORITMO TE MUESTRA LOS RESULTADOS DE UNA FORMULA QUE CONTIENE FACTORIALES, QUE LO DISFRUTES" << endl;
	cout << "Ingrese el primer numero de la formula" << endl;
	cin >> p;
	cout << "Ingrese el segundo numero de la formula" << endl;
	cin >> s;
	if (p<=0) {
		cout << "ERROR VALORES NO PERMITIDOS" << endl;
	} else {
		f = 1;
		for (x=1;x<=p;x++) {
			f = f*x;
		}
	}
	if (s<=0) {
		cout << "ERROR VALORES NO PERMITIDOS" << endl;
	} else {
		d = 1;
		for (l=1;l<=s;l++) {
			d = d*l;
		}
	}
	if (s<=0) {
		cout << "ERROR VALORES NO PERMITIDOS" << endl;
	} else {
		t = p-s;
		z = 1;
		for (w=1;w<=t;w++) {
			z = z*w;
		}
	}
	if (f>0 && d>0) {
		j = f/((z)*d);
		cout << "El resultado de la operacion con factoriales es :" << j << endl;
	}
	cout << "Es un placer servirle" << endl;
	return 0;
}

