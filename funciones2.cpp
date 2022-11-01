/*
Nombre del archivo funciones.cpp
Autor Miguel Flores
Lugar ITV
Instrucciones: Introduccion a las funciones en c++
*/

#include<iostream>
using namespace std;
//1-prototipo de funciones
double sumarnumeros(double a, double b);

int main(){
	//3-Llamada o invocacion de funciones
	double /*suma,*/ a=15.0, b=8.5;
	
	//suma = sumarnumeros(a,b);
	cout << "La suma de " << a << " + " << b << " es " << sumarnumeros(a,b);
	return 0;
}
//2-Definicion de las funciones
double sumarnumeros(double a, double b) {
//double resultado
//resultado = a+b;
//return resultado;
return a + b;
}
