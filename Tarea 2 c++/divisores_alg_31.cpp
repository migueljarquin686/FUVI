// Autor Miguel Flores

#include<iostream>
using namespace std;

int main() {
	int n;
	int x;
	cout << "Ingresa un numero" << endl;
	cin >> n;
	x = 1;
	while (x<=n) {
		if (n%x==0) {
			cout << "El numero " << n << " es divisible entre " << x << endl;
		}
		x = x+1;
	}
	cout << "Es un placer servirle" << endl;
	return 0;
}

