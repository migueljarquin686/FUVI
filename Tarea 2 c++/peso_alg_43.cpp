// Autor Miguel Flores

#include<iostream>
using namespace std;
#define ARREGLO_MAX 100
#define SIN_TIPO string

int main() {
	float estatura[ARREGLO_MAX];
	int i;
	SIN_TIPO nombres[ARREGLO_MAX];
	SIN_TIPO num[ARREGLO_MAX];
	float peso[ARREGLO_MAX];
	float pideal[ARREGLO_MAX];
	int x;
	cout << "Este algoritmo te muestra el resultado de personas con sobre peso y obesidad, que lo disfrutes" << endl;
	cout << "Ingrese el numero de personas a atender hoy" << endl;
	cin >> x;
	for (i=1;i<=x;i++) {
		cout << "Inserte nombres " << i << ":" << endl;
		cin >> nombres[i-1];
		cout << "Inserte su telefono " << i << ":" << endl;
		cin >> num[i-1];
		cout << "Inserte su peso en kg " << i << ":" << endl;
		cin >> peso[i-1];
		cout << "Inserte su altura en metros " << i << ":" << endl;
		cin >> estatura[i-1];
		pideal[i-1] = peso[i-1]/(estatura[i-1]*estatura[i-1]);
	}
	cout << "" << endl;
	cout << "" << endl;
	cout << "**************Personas a ofrecer el producto****************" << endl;
	for (i=1;i<=x;i++) {
		if ((pideal[i-1]>=23 && pideal[i-1]<=26)) {
			cout << nombres[i-1] << " Tiene sobrepeso " << pideal[i-1] << " Kg" << ".......Telefono: " << num[i-1] << endl;
		}
		if ((pideal[i-1]>26)) {
			cout << nombres[i-1] << " Tiene Obesidad " << pideal[i-1] << " Kg" << ".......Telefono: " << num[i-1] << endl;
		}
	}
	return 0;
}


