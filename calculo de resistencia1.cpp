// Autor Miguel Flores

#include<iostream>
using namespace std;

#define SIN_TIPO string

int main() {
	int amarillo;
	int azul;
	int blanco;
	int cafe;
	int gris;
	int naranja;
	int negro;
	int oro;
	float p;
	int plata;
	int rojo;
	SIN_TIPO s;
	int sin_color;
	SIN_TIPO t;
	SIN_TIPO to;
	int verde;
	int violeta;
	cout << "Este algoritmo solo resuelve resistencias de 4 colores" << endl;
	cout << "Bienvenido" << endl;
	cout << "*****Presione una tecla*****" << endl;
	cin.get(); // a diferencia del pseudocódigo, espera un Enter, no cualquier tecla
	cout << endl; // no hay forma directa de borrar la pantalla con C++ estandar
	negro = 0;
	cafe = 1;
	rojo = 2;
	naranja = 3;
	amarillo = 4;
	verde = 5;
	azul = 6;
	violeta = 7;
	gris = 8;
	blanco = 9;
	cout << "Negro=0" << endl;
	cout << "Café=1" << endl;
	cout << "Rojo=2" << endl;
	cout << "Naranja=3" << endl;
	cout << "Amarillo=4" << endl;
	cout << "Verde=5" << endl;
	cout << "Azul=6" << endl;
	cout << "Violeta=7" << endl;
	cout << "Gris=8" << endl;
	cout << "Blanco=9" << endl;
	cout << "" << endl;
	cout << "Ingrese el primer color en digito de la resistencia" << endl;
	cin >> p;
	cout << endl; // no hay forma directa de borrar la pantalla con C++ estandar
	cout << "Negro=0" << endl;
	cout << "Café=1" << endl;
	cout << "Rojo=2" << endl;
	cout << "Naranja=3" << endl;
	cout << "Amarillo=4" << endl;
	cout << "Verde=5" << endl;
	cout << "Azul=6" << endl;
	cout << "Violeta=7" << endl;
	cout << "Gris=8" << endl;
	cout << "Blanco=9" << endl;
	cout << "" << endl;
	cout << "Ingrese el segundo color en digito de la resistencia" << endl;
	cin >> s;
	cout << endl; // no hay forma directa de borrar la pantalla con C++ estandar
	cout << "Negro=0" << endl;
	cout << "Café=1" << endl;
	cout << "Rojo=2" << endl;
	cout << "Naranja=3" << endl;
	cout << "Amarillo=4" << endl;
	cout << "Verde=5" << endl;
	cout << "Azul=6" << endl;
	cout << "Violeta=7" << endl;
	cout << "Gris=8" << endl;
	cout << "Blanco=9" << endl;
	cout << "" << endl;
	cout << "Ingrese el tercer color en digito de la resistencia" << endl;
	cin >> t;
	cout << endl; // no hay forma directa de borrar la pantalla con C++ estandar
	oro = 5;
	plata = 10;
	sin_color = 20;
	cout << " Oro=5" << endl;
	cout << "Plata=10" << endl;
	cout << "Sin_color=20" << endl;
	cout << "" << endl;
	cout << "Ingrese el color de la tolerancia en digitos presentados" << endl;
	cin >> to;
	cout << endl; // no hay forma directa de borrar la pantalla con C++ estandar
	if (p==0) {
		cout << "El valor de la resistencia es:" << endl;
		cout << "1" << s << " X 10^" << t << " Ohm" << " Con tolerancia de: " << to << " %" << endl;
	} else {
		cout << "El valor de la resistencia es:" << endl;
		cout << p << s << " X 10^" << t << " Ohm" << " Con tolerancia de: " << to << " %" << endl;
	}
	return 0;
}

