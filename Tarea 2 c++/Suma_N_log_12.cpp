// Autor Miguel Flores

#include<iostream>
using namespace std;

int main() {
	int c;
	int n;
	float s;
	int suma;
	cout << "Ingrese hasta que numero desea la suma" << endl;
	cin >> n;
	c = 0;
	while (n>c) {
		c = c+1;
		s = s+c;
	}
	cout << "La suma es: " << s << endl;
	cout << "Es un placer servirle" << endl;
	return 0;
}

