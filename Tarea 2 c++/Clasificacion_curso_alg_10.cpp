// Autor Miguel Flores
//10. Algoritmo que nos diga si una persona puede acceder a cursar un ciclo
//formativo de grado superior o no. Para acceder a un grado superior, si se
//tiene un título de bachiller, en caso de no tenerlo, se puede acceder si
//hemos superado una prueba de acceso (admisión).


#include<iostream>
using namespace std;

int main() {
	string nombre;
	float resp1;
	float resp2;
	cout << "Este algoritmo te indica si una persona puede entrar al curso de tecnico superior, que lo disfrute." << endl;
	cout << " Ingrese su Nombre" << endl;
	cin >> nombre;
	cout << " ¿ USTED A CURSADO SU BACHILLERATO ?  " << endl;
	cout << " INGRESE 1 SI ES VERDADERO  Y SI ES FALSO INGRESE OTRO NUMERO" << endl;
	cin >> resp1;
	if (resp1==1) {
		cout << " Felicidades " << nombre << " " << "usted entro al curso de TECNICO SUPERIOR" << endl;
	} else {
		cout << "Lo lamento " << nombre << " " << "usted no puede entrar al curso" << endl;
	}
	cout << "Presione una tecla para continuar" << endl;
	cin.get(); // a diferencia del pseudocódigo, espera un Enter, no cualquier tecla
	cout << endl; // no hay forma directa de borrar la pantalla con C++ estandar
	if (resp1>1 || resp1<1) {
		cout << "¿ USTED APROBO LA PRUEBA DE ADMISION ?  " << endl;
		cout << " INGRESE 1 SI ES VERDADERO Y SI ES FALSO INGRESE OTRO NUMERO" << endl;
		cin >> resp2;
		if (resp2==1) {
			cout << " Felicidades " << nombre << " " << "usted entro al curso de TECNICO SUPERIOR" << endl;
		} else {
			cout << "Lo lamento " << nombre << " " << "usted no puede ingresar al curso de tecnico superior" << endl;
		}
	}
	cout << "Es un placer servirle" << endl;
	return 0;
}

