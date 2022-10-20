// Autor Miguel Flores

#include<iostream>
using namespace std;

int main() {
	int a;
	int b;
	int m;
	m = 1;
	a = 0;
	b = 0;
	while (m<=100) {
		if (m%2==0) {
			cout << "Numero multiplo de 2:" << m << endl;
			a = a+1;
		}
		if (m%3==0) {
			cout << "Numero multiplo de 3:" << m << endl;
			b = b+1;
		}
		m = m+1;
	}
	cout << "Los numeros multiplos de 2: " << a << endl;
	cout << "Los numeros multiplos de 3: " << b << endl;
	cout << "Es un placer servirle" << endl;
	return 0;
}

