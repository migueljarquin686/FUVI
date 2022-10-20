// Autor Miguel Flores

#include<iostream>
using namespace std;

int main() {
	int producto;
	int res;
	int x;
	cout << "El programa finaliza si se ingresa un cero" << endl;
	x = 1;
	producto = 0;
	res = 1;
	while (x!=0) {
		cout << "Ingresa un numero" << endl;
		cin >> x;
		if (x!=0) {
			res = res*x;
			producto = res;
		}
	}
	cout << "El producto de los numeros es:" << producto << endl;
	cout << "Es un placer servirle" << endl;
	return 0;
}

