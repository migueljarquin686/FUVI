// Autor Miguel Flores

#include<iostream>
using namespace std;

int main() {
	float numx;
	float numy;
	cout << "Ingrese su primer numx" << endl;
	cin >> numx;
	cout << "Ingrese su segundo numy" << endl;
	cin >> numy;
	if (numx<numy) {
		cout << " El numero mayor es: " << numy << " " << endl;
	}
	if ((numx>numy)) {
		cout << " El numero mayor es: " << numx << " " << endl;
	}
	if ((numx==numy)) {
		cout << " los números son iguales" << endl;
	}
	cout << " Es un placer servirle " << endl;
	return 0;
}

