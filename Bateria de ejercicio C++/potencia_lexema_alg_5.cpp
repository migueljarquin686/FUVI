// Autor Miguel Flores
/*5. Realizar un algoritmo que lea un número por teclado. En caso de que ese
número sea 0 o menor que 0, se saldrá del programa imprimiendo antes un
mensaje de error. Si es mayor que 0, se deberá calcular su cuadrado y la raíz
cuadrada del mismo, visualizando el número que ha tecleado el usuario y
su resultado (“Del numero X, su potencia es X y su raíz X”).
*/

#include<iostream>
#include<cmath>
using namespace std;

int main() {
	float lexema;
	float numx;
	float potenci;
	float potencia;
	cout <<"Este algoritmo te ejecuta un numero dandote la potencia su raiz y el numero que le pide, que lo disfrute."<<endl;
	cout << "Ingrese un numx" << endl;
	cin >> numx;
	if (numx<=0) {
		cout << "Error al ingresar numero" << endl;
	} else {
		potencia = pow(numx,2);
		lexema = sqrtf(numx);
		cout << "El numero es:" << numx << " " << endl;
		cout << "Su potencia es:" << potencia << " " << endl;
		cout << "Su raiz es: " << lexema << " " << endl;
	}
	cout << " Es un placer servirle " << endl;
	return 0;
}

