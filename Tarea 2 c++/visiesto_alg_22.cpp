//Autor Miguel Flores

#include<iostream>
using namespace std;

int main() {
	int numx;
	cout << "Ingrese el year que desea conocer" << endl;
	cin >> numx;
	if (numx%4==0) {
		cout << "el year es visiesto" << endl;
	} else {
		cout << "El year no es visieto" << endl;
	}
	cout << "*********************" << endl;
	cout << "Es un placer servirle" << endl;
	return 0;
}

