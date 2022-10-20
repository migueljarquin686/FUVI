// Autor Miguel Flores

#include<iostream>
#include<cmath>
using namespace std;

#define SIN_TIPO string

int main() {
	float e;
	SIN_TIPO n;
	SIN_TIPO num;
	float p;
	float pl;
	float x;
	float z;
	cout << "Ingrese el numeros de personas" << endl;
	cin >> z;
	for (x=1;x<=z;x++) {
		cout << "Bienvenido a SeaFitya S.A" << endl;
		cout << " ingrese el nombre de la persona" << endl;
		cin >> n;
		cout << "Ingrese el numero de telefono de " << n << endl;
		cin >> num;
		cout << "Ingrese la estatura en metros de " << n << endl;
		cin >> e;
		cout << "Ingrese el peso en KG de " << n << endl;
		cin >> p;
		pl = p/(pow(e,2));
		if (pl==20) {
			cout << n << " es delgado(a)" << endl;
		}
		if (pl>=20 && pl<23) {
			cout << n << " tiene un peso normal" << endl;
		}
		if (pl>=23 && pl<=26) {
			cout << n << " tiene sobre peso" << endl;
		}
		if (pl>26) {
			cout << n << " tiene obesidad" << endl;
		}
	}
	return 0;
}

