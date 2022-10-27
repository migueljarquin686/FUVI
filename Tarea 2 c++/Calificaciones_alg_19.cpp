// Autor Miguel Flores
//19. Calcular las calificaciones de un grupo de alumnos. La nota final de cada
//alumno se calcula según el siguiente criterio: la parte práctica vale el 10%;
//la parte de problemas vale el 50% y la parte teórica el 40%. El algoritmo
//leerá el nombre del alumno, las tres notas, escribirá el resultado y volverá a
//pedir los datos del siguiente alumno hasta que el nombre sea una cadena
//vacía. Las notas deben estar entre 0 y 10, si no lo están, no imprimirá las
//notas, mostrará un mensaje de error y volverá a pedir otro alumno.


#include<iostream>
using namespace std;

int main() {
	float contador;
	string nombre;
	float notat;
	float npractica;
	float nproblemas;
	float nteoria;
	float num;
	cout << "Este algoritmo te calcula las notas de un grupo de estudiantes, que lo disfrute." << endl;
	cout << "¿Cuantos alumnos desea calcular? ingrese un numero:" << endl;
	cin >> num;
	contador = 0;
	do {
		cout << "Ingrese el nombre del estudiante por favor" << endl;
		cin >> nombre;
		cout << "Ingrese nota practica del 0.1 al 1 " << endl;
		cin >> npractica;
		cout << "Ingrese nota de ejercicios del 0.1 al 5" << endl;
		cin >> nproblemas;
		cout << "Ingrese nota de teoria del 0.1 al 4" << endl;
		cin >> nteoria;
		if ((npractica>0 && npractica<=1) && (nproblemas>0 && nproblemas<=5) && (nteoria>0 && nteoria<=4)) {
			notat = npractica+nproblemas+nteoria;
			cout << "Nota practica:" << npractica << endl;
			cout << "Nota de problemas:" << nproblemas << endl;
			cout << "Nota de teoría:" << nteoria << endl;
			cout << nombre << " Tiene una nota de:" << notat << endl;
		} else {
			cout << "Se ha producido un error lo sentimos" << endl;
			cout << "*********************************" << endl;
		}
		contador = contador+1;
	} while (contador!=num);
	cout << "Es un placer servirle" << endl;
	return 0;
}

