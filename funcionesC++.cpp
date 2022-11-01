/*
Nombre del archivo funciones.cpp
Autor Miguel Flores
Lugar ITV
Instrucciones: Introduccion a las funciones en c++
*/

#include<iostream>
//1-prototipo de la funcion
using namespace std;
void saludar(); //prototipo de funcion que no retorna ningun valor y no requiere datos de entrada
void otrosSaludos(string nombre);//prototipo de funcion que no retorna ningun valor pero requiere un dato de entrada

int main(){
	//3-Llamada invocacion La(s) funciones
	string nombre;
	//saludar();
	cout <<"Ingrese su nombre: ";
	cin >> nombre;
	otrosSaludos(nombre);
	
return 0;
}
//2-Definicion de la funciones
void saludar(){
cout << "Bienvenido a esta app, desde la funcion saludar()";
}
void otrosSaludos(string nombre){
cout << "Bienvenido a esta app, " << nombre << endl;
saludar();
}