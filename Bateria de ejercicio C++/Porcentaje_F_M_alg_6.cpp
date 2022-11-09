// Autor Miguel Flores
//6. Un colegio desea saber qué porcentaje de niños y qué porcentaje de niñas
//hay en el curso actual. Diseñar un algoritmo para este propósito.
#include<iostream>
using namespace std;

int main() {
	float jovencitas;
	float jovencitos;
	float porcentajef;
	float porcentajem;
	float suma;
	cout << "Este algoritmo te muestra el porcentaje de ninos y ninas" << endl;
	cout << "Ingrese el numero de jovencitos" << endl;
	cin >> jovencitos;
	cout << "Ingrese el numero de jovencitas" << endl;
	cin >> jovencitas;
	if (jovencitos>=0) {
		if (jovencitas>=0) {
			suma = jovencitos+jovencitas;
			porcentajem = (jovencitos*100)/suma;
			porcentajef = (jovencitas*100)/suma;
			cout << "El porcentaje de jovencitos es: " << porcentajem << " " << endl;
			cout << "El porcentaje de jovencitas es: " << porcentajef << " " << endl;
		} else {
			cout << "Los numeros que usted ingreso no son admitidos" << endl;
		}
	}
	cout << "Es un placer servirle" << endl;
	return 0;
}

