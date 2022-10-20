//Autor Miguel Flores

#include<iostream>
using namespace std;


int main() {
	int numx;
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

