// Miguel Flores

#include<iostream>
using namespace std;

int main() {
	float media;
	float n;
	float p;
	float suma;
	float total;
	cout << "Ingresa el total de numeros" << endl;
	cin >> total;
	p = 1;
	suma = 0;
	while (p<=total) {
		cout << "Ingresa el numero " << p << endl;
		cin >> n;
		if (n>=0) {
			suma = suma+n;
			p = p+1;
		}
	}
	media = suma/total;
	cout << "La media es: " << media << endl;
	cout << "Es un placer servirle" << endl;
	return 0;
}

