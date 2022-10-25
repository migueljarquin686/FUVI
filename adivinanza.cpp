/* 
nombredel archivo: Adivinanza.cpp
Autor:Miguel Flores
Lugar: ITV
Instrucciones:juego de adivinanza de un numero
*/

#include<iostream>
#include<cstdlib> //C Standar Library
#include<ctime>

using namespace std;

int main(){
	srand(time(nullptr));
	int aleatorio = rand() % 10;
	int num, intento=1;
do {

		cout << "Adivine un numero entre 0 y 10 ";
		cin >> num;
		if (num == aleatorio){
			cout << "Felicidades, acertaste." << endl;
			intento = 4;
		} else {
			cout << "NUMERO INCORRECTO" << endl;
			if(intento == 3){
				cout << "Usted ha agotado todos sus intentos" << endl;
			}
			intento++;
		}
	}	while(intento < 4);
	

	cout << "Fin de la aplicacion" << endl;
	return 0;
}