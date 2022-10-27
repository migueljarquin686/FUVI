//Autor Miguel Flores
/*8. Realizar un algoritmo que, dado un número entero, visualice en pantalla si
es par o impar. En el caso de ser 0, debe visualizar “el número no es par ni
impar”.
*/
#include<iostream>
using namespace std;


int main() {
	int numx;
	cout << "Este algoritmo te muestra si un numero es par o impar" << endl;
	cout << " Ingrese su numx" << endl;
	cin >> numx;
	if ((numx==0)) {
		cout << " El numero no es par ni impar" << endl;
	}
	if ((numx>=1)) {
		if ((numx % 2== 0)) {
			cout << "Es un numero par" << endl;
		}
		if ((numx%2>0)) {
			cout << "Es un numero impar" << endl;
		}
	}
	cout << "Es un placer servirle" << endl;
	return 0;
}

