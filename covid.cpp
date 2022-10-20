/*
Nombre del archivo: sumanumeros.cpp
Autor: Miguel Flores
Lugar: ITV
Instrucciones: Esto solo es una plantilla
*/
#include<iostream>
using namespace std;

int main() {
	string nombre;
	int num;
	cout << "Ingrese el nombre del paciente" << endl;
	cin >> nombre;
	cout << "Se presentan los siguientes sintomas del covid" << endl;
	cout << "1.goteo nasal, 2.tos seca, 3.dolor de garganta, 4.fiebre, 5.cansancio 6.dificultad para respirar" << endl;
	cout << "" << endl;
	cout << "Ingrese el numero de sintomas que usted tiene" << endl;
	cin >> num;
	if (num>2 && num<=4) {
		cout << "El pasciente " << nombre << " es sospechoso de covid" << endl;
		cout << "Estara bajo observacion" << endl;
	}
	if (num>=5 && num<=6) {
		cout << "El pasciente " << nombre << " tiene covid" << endl;
		cout << "Necesita atencion medica" << endl;
	}
	cout << "Servicio de salud" << endl;
	return 0;
}