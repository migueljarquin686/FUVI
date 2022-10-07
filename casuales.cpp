/*
Nombre del archivo: aleatorios.cpp
Autor: Miguel Flores
Lugar: ITV
Instrucciones: Generar numeros aleatorios
*/
#include<iostream>
#include<cstdlib> //C Standard Library
#include<ctime>

using namespace std;

int main(){
	
	//long tiempoTranscurrido = time(nullptr); // 1 Enero 1970
	
	srand(time(nullptr)); // seed random, semilla de inicio
	int aleatorio = rand() % 10;
	int num;
	
	cout << "Adivine el numero  entre 0 y 10";
	cin >> num;

	if(num == aleatorio){
		cout << "En hora buena, acertaste! ";
	} else {
		cout << "Que mal, no acertaste! ";
	}
	
	return 0;
}