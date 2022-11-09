//Autor Miguel Flores
//Titulo Algoritmo de los cuerpos geometricos
//Lugar ITV
#include<iostream>
#include<cmath>
#include<conio.h>
using namespace std;

int main() {
	float a;
	float ab;
	float abm;
	float al;
	float ap;
	float apen;
	float apent;
	float ar;
	float area;
	float at;
	float b;
	float c;
	float d;
	float g;
	float h;
	float ng;
	int num;
	int op;
	float pb;
	float pbm;
	float pi;
	float r;
	float rm;
	float rmn;
	float rmy;
	float v;
	float vc;
	float vcilindro;
	cout << "> PRESIONE UNA TECLA PARA INICIAR" << endl;
	_getch();
	do {
		system("cls");
		cout << "_________MENU DE OPCIONES DE LOS CUERPOS GEOMETRICOS_________" << endl;
		cout << "*************************************************************" << endl;
		cout << "1- EL CILINDRO" << endl;
		cout << "2- EL CONO" << endl;
		cout << "3- EL DODECAEDRO" << endl;
		cout << "4- EL HEXAEDRO" << endl;
		cout << "5- EL ICOSAEDRO" << endl;
		cout << "6- EL OCTAEDRO" << endl;
		cout << "7- EL ORTOEDRO" << endl;
		cout << "8- EL PRISMA PENTAGONAL" << endl;
		cout << "9- EL TETRAEDRO" << endl;
		cout << "10- LA ESFERA" << endl;
		cout << "11- LA PIRAMIDE" << endl;
		cout << "12- TRONCO DE UN CONO" << endl;
		cout << "13- TRONCO DE UNA PIRAMIDE" << endl;
		cout << "14- FINALIZAR" << endl;
		cout << "***INGRESE UNA OPCION POR FAVOR***" << endl;
		cin >> num;
		system("cls");
		switch (num) {
		case 1:
			cout << "MENU DE OPCIONES DEL CILINDRO" << endl;
			cout << "1- calculo del area lateral del cilindro" << endl;
			cout << "2- calculo del area total del cilindro" << endl;
			cout << "3- Calculo del volumen del cilindro" << endl;
			cout << "Ingrese una opcion" << endl;
			cin >> op;
			switch (op) {
			case 1:
				do {
					cout << " Para calcular el area lateral de un cilindro ingrese los siguientes datos" << endl;
					cout << " Ingrese el valor del radio " << endl;
					cin >> r;
					cout << " Ingrese el valor de la altura " << endl;
					cin >> h;
					if ((r>0) && (h>0)) {
						// Fórmula del area lateral de un cilindro
						al = 2*M_PI*r*h;
						cout << " r = " << r << "  " << endl;
						cout << " h = " << h << "  " << endl;
						cout << " AL = " << al << " " << endl;
					} else {
						cout << "Usted a ingresado valores incorrectos" << endl;
					}
				} while (al<=0);
				break;
			case 2:
				do {
					cout << " Para calcular el area total de un cilindro ingrese los siguientes datos" << endl;
					cout << " Ingrese el valor del radio " << endl;
					cin >> r;
					cout << " Ingrese el valor de la altura " << endl;
					cin >> h;
					if ((h>0) && (r>0)) {
						// Fórmula del area total de un cilindro
						at = 2*M_PI*r*(h+r);
						cout << " r = " << r << "  " << endl;
						cout << " h = " << h << "  " << endl;
						cout << " At = " << at << " " << endl;
					} else {
						cout << "Usted a ingresado valores incorrectos" << endl;
					}
				} while (at<=0);
				break;
			case 3:
				do {
					cout << " Para calcular el volumen de un cilindro ingrese los siguientes datos" << endl;
					cout << " Ingrese el valor del radio " << endl;
					cin >> r;
					cout << " Ingrese el valor de la altura " << endl;
					cin >> h;
					if ((h>0) && (r>0)) {
						// Fórmula del volumen de un cilindro
						v = M_PI*pow(r,2)*h;
						cout << " r = " << r << "  " << endl;
						cout << " h = " << h << "  " << endl;
						cout << " V = " << v << " " << endl;
					} else {
						cout << "Usted a ingresado valores incorrectos" << endl;
					}
				} while (v<=0);
				break;
			default:
				cout << " No es opcion válida" << endl;
			}
			break;
		case 2:
			cout << "MENU DE OPCIONES DEL CONO" << endl;
			cout << "1- calculo del volumen del cono respecto al del cilindro" << endl;
			cout << "2- calculo del area lateral del cono, primera formula" << endl;
			cout << "3- Calculo del area lateral del cono, segunda fórmula" << endl;
			cout << "4-Calculo de la generatriz del cono" << endl;
			cout << "5-Calculo del area total del cono, primera formula" << endl;
			cout << "6-Calculo del area total del cono, segunda formula" << endl;
			cout << "7-Calculo del volumen del cono primera formula" << endl;
			cout << "8-Calculo del volumen del cono segunda formula" << endl;
			cout << "Ingrese una opcion" << endl;
			cin >> op;
			switch (op) {
			case 1:
				do {
					cout << " Para calcular el volumen del cono respecto al cilindro ingrese los siguientes datos" << endl;
					cout << " Ingrese el valor del volumen del cilindro" << endl;
					cin >> vcilindro;
					if ((vcilindro>0)) {
						// Fórmula para el volumen del cono respecto al cilindro
						v = (0.3333333333)*vcilindro;
						cout << " Vcilindro = " << vcilindro << "  " << endl;
						cout << "El volumen del cono es:" << endl;
						cout << " V = " << v << "  " << endl;
					} else {
						cout << "Usted a ingresado un valor incorrecto" << endl;
					}
				} while (v<=0);
				break;
			case 2:
				do {
					cout << " Para calcular el area lateral de un cono ingrese los siguientes datos" << endl;
					cout << " Ingrese el valor del perimetro de la base" << endl;
					cin >> pb;
					cout << " Ingrese el valor de la generatriz " << endl;
					cin >> g;
					if ((pb>0) && (g>0)) {
						// Fórmula del area lateral de un cono
						al = (pb*g)/2;
						cout << " Pb = " << pb << "  " << endl;
						cout << " g = " << g << "  " << endl;
						cout << " AL = " << al << " " << endl;
					} else {
						cout << "Usted a ingresado valores incorrectos" << endl;
					}
				} while (al<=0);
				break;
			case 3:
				do {
					cout << " Para calcular el area lateral de un cono ingrese los siguientes datos" << endl;
					cout << " Ingrese el valor del radio de la base" << endl;
					cin >> r;
					cout << " Ingrese el valor de la generatriz " << endl;
					cin >> g;
					if ((r>0) && (g>0)) {
						// Fórmula del area lateral de un cono
						al = M_PI*r*g;
						cout << " r = " << r << "  " << endl;
						cout << " g = " << g << "  " << endl;
						cout << " AL = " << al << " " << endl;
					} else {
						cout << "Usted a ingresado valores incorrectos" << endl;
					}
				} while (al<=0);
				break;
			case 4:
				do {
					cout << " Para calcular la generatriz de un cono ingrese los siguientes datos" << endl;
					cout << " Ingrese el valor de la altura" << endl;
					cin >> h;
					cout << " Ingrese el valor del radio " << endl;
					cin >> r;
					if ((h>0) && (r>0)) {
						// Fórmula de la generatriz de un cono
						g = sqrtf(pow(h,2)+pow(r,2));
						cout << " h = " << h << "  " << endl;
						cout << " r = " << r << "  " << endl;
						cout << " g = " << g << " " << endl;
					} else {
						cout << "Usted a ingresado valores incorrectos" << endl;
					}
				} while (g<=0);
				break;
			case 5:
				do {
					cout << " Para calcular el area total de un cono ingrese los siguientes datos" << endl;
					cout << " Ingrese el valor del area lateral" << endl;
					cin >> al;
					cout << " Ingrese el valor del radio " << endl;
					cin >> r;
					if ((al>0) && (r>0)) {
						// Fórmula para el area total de un cono
						at = al+(M_PI*pow(r,2));
						cout << " AL = " << al << "  " << endl;
						cout << " r = " << r << "  " << endl;
						cout << " At = " << at << " " << endl;
					} else {
						cout << "Usted a ingresado valores incorrectos" << endl;
					}
				} while (at<=0);
				break;
			case 6:
				do {
					cout << " Para calcular el area total de un cono ingrese los siguientes datos" << endl;
					cout << " Ingrese el valor del radio" << endl;
					cin >> r;
					cout << " Ingrese el valor de la generatriz" << endl;
					cin >> g;
					if ((r>0) && (g>0)) {
						// Fórmula para el area total de un cono
						at = M_PI*r*(g+r);
						cout << " r = " << r << "  " << endl;
						cout << " g = " << g << "  " << endl;
						cout << " At = " << at << " " << endl;
					} else {
						cout << "Usted a ingresado valores incorrectos" << endl;
					}
				} while (at<=0);
				break;
			case 7:
				do {
					cout << " Para calcular el volumen de un cono ingrese los siguientes datos" << endl;
					cout << " Ingrese el valor del area de la base" << endl;
					cin >> ab;
					cout << " Ingrese el valor de la altura" << endl;
					cin >> h;
					if ((ab>0) && (h>0)) {
						// Fórmula para el volumen de un cono
						v = (ab*h)/3;
						cout << " Ab = " << ab << "  " << endl;
						cout << " h = " << h << "  " << endl;
						cout << " V = " << v << " " << endl;
					} else {
						cout << "Usted a ingresado valores incorrectos" << endl;
					}
				} while (v<=0);
				break;
			case 8:
				do {
					cout << " Para calcular el volumen de un cono ingrese los siguientes datos" << endl;
					cout << " Ingrese el valor del radio" << endl;
					cin >> r;
					cout << " Ingrese el valor de la altura" << endl;
					cin >> h;
					if ((r>0) && (h>0)) {
						// Fórmula para el volumen de un cono
						v = (M_PI*pow(r,2)*h)/3;
						cout << " r = " << r << "  " << endl;
						cout << " h = " << h << "  " << endl;
						cout << " V = " << v << " " << endl;
					} else {
						cout << "Usted a ingresado valores incorrectos" << endl;
					}
				} while (v<=0);
				break;
			default:
				cout << " No es opcion válida" << endl;
			}
			break;
		case 3:
			cout << "MENU DE OPCIONES DEL DODECAEDRO" << endl;
			cout << "1- calculo del area del Dodecaedro" << endl;
			cout << "2- calculo del volumen del Dodecaedro" << endl;
			cout << "3- Calculo del area pentagonal del Dodecaedro" << endl;
			cout << "Ingrese una opcion" << endl;
			cin >> op;
			switch (op) {
			case 1:
				cout << " Para calcular el area del Dodecaedro ingrese el siguiente datos" << endl;
				cout << " Nota: Solo se permite un valor mayor que 0" << endl;
				ar = 0;
				while ((ar<=0)) {
					cout << " Ingrese el valor del arista o lados" << endl;
					cin >> ar;
				}
				a = 3*pow(ar,2)*sqrtf(25+(10*sqrtf(5)));
				cout << " ar = " << ar << "  " << endl;
				cout << " A = " << a << "  " << endl;
				break;
			case 2:
				cout << " Para calcular el volumen del Dodecaedro ingrese el siguiente dato" << endl;
				cout << " Nota: Solo se permite un valor mayor que 0" << endl;
				ar = 0;
				while ((ar<=0)) {
					cout << " Ingrese el valor del arista o lados" << endl;
					cin >> ar;
				}
				v = (0.25)*(15+7*sqrtf(5))*pow(ar,3);
				cout << " ar = " << ar << "  " << endl;
				cout << " V = " << v << " " << endl;
				break;
			case 3:
				cout << " Para calcular el area pentagonal del dodecaedro ingrese los siguientes datos" << endl;
				cout << " Nota: Solo se permite un valor mayor que 0" << endl;
				ar = 0;
				while ((ar<=0)) {
					cout << " Ingrese el valor del arista o lado" << endl;
					cin >> ar;
				}
				cout << " Nota: Solo se permite un valor mayor que 0" << endl;
				ap = 0;
				while ((ap<=0)) {
					cout << " Ingrese el valor del apotema" << endl;
					cin >> ap;
				}
				apen = (2.5)*ar*ap;
				cout << " ar = " << ar << "  " << endl;
				cout << " ap = " << ap << "  " << endl;
				cout << " Apen = " << apen << " " << endl;
				// La relación de euler: c + v = a + 2
				// caras + vertices = aristas + 2
				break;
			default:
				cout << " No es opcion válida " << endl;
			}
			break;
		case 4:
			cout << "MENU DE OPCIONES DEL HEXAEDRO" << endl;
			cout << "1- calculo del area del hexaedro" << endl;
			cout << "2- calculo de la diagonal del hexaedro" << endl;
			cout << "3- Calculo del volumen del hexaedro" << endl;
			cout << "Ingrese una opcion" << endl;
			cin >> op;
			switch (op) {
			case 1:
				cout << " Para calcular el area del hexaedro ingrese el siguiente dato" << endl;
				cout << " Nota: Solo se permite un valor mayor que 0" << endl;
				ar = 0;
				while ((ar<=0)) {
					cout << " Ingrese el valor del arista o lados" << endl;
					cin >> ar;
				}
				a = 6*pow(ar,2);
				cout << " ar = " << ar << "  " << endl;
				cout << " A = " << a << "  " << endl;
				break;
			case 2:
				cout << " Para calcular la diagonal del hexaedro ingrese el siguiente dato" << endl;
				cout << " Nota: Solo se permite un valor mayor que 0" << endl;
				ar = 0;
				while ((ar<=0)) {
					cout << " Ingrese el valor del arista o lados" << endl;
					cin >> ar;
				}
				d = ar*(sqrtf(3));
				cout << " ar = " << ar << "  " << endl;
				cout << " D = " << d << " " << endl;
				break;
			case 3:
				cout << " Para calcular el volumen del hexaedro ingrese el siguiente dato" << endl;
				cout << " Nota: Solo se permite un valor mayor que 0" << endl;
				ar = 0;
				while ((ar<=0)) {
					cout << " Ingrese el valor del arista o lado" << endl;
					cin >> ar;
				}
				v = pow(ar,3);
				cout << " ar = " << ar << "  " << endl;
				cout << " V = " << v << " " << endl;
				// La relación de euler: c + v = a + 2
				// caras + vertices = aristas + 2
				break;
			default:
				cout << " No es opcion válida " << endl;
			}
			break;
		case 5:
			cout << "MENU DE OPCIONES DEL ICOSAEDRO" << endl;
			cout << "1- calculo del area del Icosaedro" << endl;
			cout << "2- Calculo del volumen del Icosaedro" << endl;
			cout << "Ingrese una opcion" << endl;
			cin >> op;
			switch (op) {
			case 1:
				cout << " Para calcular el area del Icosaedro ingrese el siguiente dato" << endl;
				cout << " Nota: Solo se permite un valor mayor que 0" << endl;
				ar = 0;
				while ((ar<=0)) {
					cout << " Ingrese el valor del arista o lados" << endl;
					cin >> ar;
				}
				a = 5*pow(ar,2)*sqrtf(3);
				cout << " ar = " << ar << "  " << endl;
				cout << " A = " << a << "  " << endl;
				break;
			case 2:
				cout << " Para calcular el volumen del Icosaedro ingrese el siguiente dato" << endl;
				cout << " Nota: Solo se permite un valor mayor que 0" << endl;
				ar = 0;
				while ((ar<=0)) {
					cout << " Ingrese el valor del arista o lado" << endl;
					cin >> ar;
				}
				v = (0.4166666667)*(3+sqrtf(5))*pow(ar,3);
				cout << " ar = " << ar << "  " << endl;
				cout << " V = " << v << " " << endl;
				// La relación de euler: c + v = a + 2
				// caras + vertices = aristas + 2
				break;
			default:
				cout << " No es opcion válida " << endl;
			}
			break;
		case 6:
			cout << "MENU DE OPCIONES DEL OCTAEDRO" << endl;
			cout << "1- calculo del area del octaedro" << endl;
			cout << "2- Calculo del volumen del octaedro" << endl;
			cout << "Ingrese una opcion" << endl;
			cin >> op;
			switch (op) {
			case 1:
				cout << " Para calcular el area del octaedro ingrese el siguiente dato" << endl;
				cout << " Nota: Solo se permite un valor mayor que 0" << endl;
				ar = 0;
				while ((ar<=0)) {
					cout << " Ingrese el valor del arista o lados" << endl;
					cin >> ar;
				}
				a = 2*pow(ar,2)*sqrtf(3);
				cout << " ar = " << ar << "  " << endl;
				cout << " A = " << a << "  " << endl;
				break;
			case 2:
				cout << " Para calcular el volumen del hexaedro ingrese el siguiente dato" << endl;
				cout << " Nota: Solo se permite un valor mayor que 0" << endl;
				ar = 0;
				while ((ar<=0)) {
					cout << " Ingrese el valor del arista o lado" << endl;
					cin >> ar;
				}
				v = (sqrtf(2)/3)*pow(ar,3);
				cout << " ar = " << ar << "  " << endl;
				cout << " V = " << v << " " << endl;
				// La relación de euler: c + v = a + 2
				// caras + vertices = aristas + 2
				break;
			default:
				cout << " No es opcion válida " << endl;
			}
			break;
		case 7:
			cout << "MENU DE OPCIONES DEL ORTOEDRO" << endl;
			cout << "1- calculo de la diagonal del ortoedro" << endl;
			cout << "2- calculo del volumen del ortoedro" << endl;
			cout << "3- Calculo del area del ortoedro" << endl;
			cout << "Ingrese una opcion" << endl;
			cin >> op;
			switch (op) {
			case 1:
				do {
					cout << " Para calcular la diagonal del ortoedro ingrese los siguientes datos" << endl;
					cout << " Ingrese el valor del lado mayor " << endl;
					cin >> a;
					cout << " Ingrese el valor del lado menor " << endl;
					cin >> b;
					cout << " ingrese el valor de la altura " << endl;
					cin >> c;
					if ((a>0) && (b>0) && (c>0)) {
						// Fórmulas de la diagonal del  ortoedro
						d = sqrtf(pow(a,2)+pow(b,2)+pow(c,2));
						cout << " A = " << a << "  " << endl;
						cout << " b = " << b << "  " << endl;
						cout << " c = " << c << " " << endl;
						cout << "Resultado de la diagonal" << endl;
						cout << " D = " << d << " " << endl;
					} else {
						cout << "Usted a ingresado valores incorrectos" << endl;
					}
				} while (d<=0);
				break;
			case 2:
				do {
					cout << " Para calcular el volumen del ortoedro ingrese los siguientes datos" << endl;
					cout << " Ingrese el valor del lado mayor " << endl;
					cin >> a;
					cout << " Ingrese el valor del lado menor " << endl;
					cin >> b;
					cout << " ingrese el valor de la altura " << endl;
					cin >> c;
					if ((a>0) && (b>0) && (c>0)) {
						// Fórmulas del volumen del ortoedro
						v = a*b*c;
						cout << " A = " << a << "  " << endl;
						cout << " b = " << b << "  " << endl;
						cout << " c = " << c << " " << endl;
						cout << "Resultado del volumen" << endl;
						cout << " V = " << v << " " << endl;
					} else {
						cout << "Usted a ingresado valores incorrectos" << endl;
					}
				} while (v<=0);
				break;
			case 3:
				do {
					cout << " Para calcular el area ingrese los siguientes datos" << endl;
					cout << " Ingrese el valor del lado mayor " << endl;
					cin >> a;
					cout << " Ingrese el valor del lado menor " << endl;
					cin >> b;
					cout << " ingrese el valor de la altura " << endl;
					cin >> c;
					if ((a>0) && (b>0) && (c>0)) {
						// Fórmulas del area del ortoedro
						area = 2*(a*b+a*c+b*c);
						cout << " A = " << a << "  " << endl;
						cout << " b = " << b << "  " << endl;
						cout << " c = " << c << " " << endl;
						cout << " Resultado del area " << endl;
						cout << " Area = " << area << " " << endl;
					} else {
						cout << "Usted a ingresado valores incorrectos" << endl;
					}
				} while (a<=0);
				break;
			default:
				cout << " No es opcion válida" << endl;
			}
			break;
		case 8:
			cout << "MENU DE OPCIONES DEL PRISMA PENTAGONAL" << endl;
			cout << "1- calculo del area lateral del prisma" << endl;
			cout << "2- calculo del area total del prisma" << endl;
			cout << "3- Calculo del volumen del prisma" << endl;
			cout << "Ingrese una opcion" << endl;
			cin >> op;
			switch (op) {
			case 1:
				do {
					cout << " Para calcular el area lateral de un prisma pentagonal ingrese los siguientes datos" << endl;
					cout << " Ingrese el valor del perimetro de la base " << endl;
					cin >> pb;
					cout << " Ingrese el valor de la altura " << endl;
					cin >> h;
					if ((pb>0) && (h>0)) {
						// Fórmula del área lateral del prisma
						al = pb*h;
						cout << " Pb = " << pb << "  " << endl;
						cout << " h = " << h << "  " << endl;
						cout << "AL = " << al << "  " << endl;
					} else {
						cout << "Usted a ingresado valores incorrectos" << endl;
					}
				} while (al<=0);
				break;
			case 2:
				do {
					cout << " Para calcular el area total de un prisma pentagonal ingrese los siguientes datos" << endl;
					cout << " Ingrese el valor del area lateral " << endl;
					cin >> al;
					cout << " Ingrese el valor del area base " << endl;
					cin >> ab;
					if ((al>0) && (ab>0)) {
						// Fórmula del área total del prisma
						at = al+(2*ab);
						cout << " AL = " << al << "  " << endl;
						cout << " Ab = " << ab << "  " << endl;
						cout << "At = " << at << "  " << endl;
					} else {
						cout << "Usted a ingresado valores incorrectos" << endl;
					}
				} while (at<=0);
				break;
			case 3:
				do {
					cout << " Para calcular el volumen de un prisma pentagonal ingrese los siguientes datos" << endl;
					cout << " Ingrese el valor del area de la base " << endl;
					cin >> ab;
					cout << " Ingrese el valor de la altura " << endl;
					cin >> h;
					if ((ab>0) && (h>0)) {
						// Fórmula del volumen del prisma
						v = ab*h;
						cout << " Ab = " << ab << "  " << endl;
						cout << " h = " << h << "  " << endl;
						cout << "V = " << v << "  " << endl;
					} else {
						cout << "Usted a ingresado valores incorrectos" << endl;
					}
				} while (v<=0);
				break;
			default:
				cout << " No es opcion válida" << endl;
			}
			break;
		case 9:
			cout << "MENU DE OPCIONES DEL TETRAEDRO" << endl;
			cout << "1- calculo del area del tetraedro" << endl;
			cout << "2- calculo de la altura del tetraedro" << endl;
			cout << "3- Calculo del volumen del tetraedro" << endl;
			cout << "Ingrese una opcion" << endl;
			cin >> op;
			switch (op) {
			case 1:
				cout << " Para calcular el area del tetraedro ingrese el siguiente dato" << endl;
				cout << " Nota: Solo se permite un valor mayor que 0" << endl;
				ar = 0;
				while ((ar<=0)) {
					cout << " Ingrese el valor del arista o lados" << endl;
					cin >> ar;
				}
				a = pow(ar,2)*(sqrtf(3));
				cout << " ar = " << ar << "  " << endl;
				cout << " A = " << a << "  " << endl;
				break;
			case 2:
				cout << " Para calcular la altura del tetraedro ingrese el siguiente dato" << endl;
				cout << " Nota: Solo se permite un valor mayor que 0" << endl;
				ar = 0;
				while ((ar<=0)) {
					cout << " Ingrese el valor del arista o lados" << endl;
					cin >> ar;
				}
				h = ar*(sqrtf(6)/3);
				cout << " ar = " << ar << "  " << endl;
				cout << " h = " << h << " " << endl;
				break;
			case 3:
				cout << " Para calcular el volumen del tetraedro ingrese el siguiente dato" << endl;
				cout << " Nota: Solo se permite un valor mayor que 0" << endl;
				ar = 0;
				while ((ar<=0)) {
					cout << " Ingrese el valor del arista o lado" << endl;
					cin >> ar;
				}
				v = (sqrtf(2)/12)*pow(ar,3);
				cout << " ar = " << ar << "  " << endl;
				cout << " V = " << v << " " << endl;
				// La relación de euler: c + v = a + 2
				// caras + vertices = aristas + 2
				break;
			default:
				cout << " No es opcion válida " << endl;
			}
			break;
		case 10:
			cout << "MENU DE OPCIONES DE LA ESFERA" << endl;
			cout << "1- calculo del volumen de la esfera respecto al del cilindro" << endl;
			cout << "2- calculo del area de una esfera" << endl;
			cout << "3- Calculo del volumen de una esfera" << endl;
			cout << "4-Calculo del area de la zona esférica " << endl;
			cout << "5-Calculo del area del casquete esferico" << endl;
			cout << "6-Calculo del volumen de la zona esferica" << endl;
			cout << "7-Calculo del volumen del casquete esferico" << endl;
			cout << "8-Calculo del area del huso esferico" << endl;
			cout << "9-Calculo del volumen de la cuña esferica" << endl;
			cout << "Ingrese una opcion" << endl;
			cin >> op;
			switch (op) {
			case 1:
				do {
					cout << " Para calcular el volumen de la esfera respecto al cilindro ingrese los siguientes datos" << endl;
					cout << " Ingrese el valor del volumen del cilindro" << endl;
					cin >> vc;
					if ((vc>0)) {
						// Fórmula para el volumen de la eafera respecto al cilindro
						v = (0.6666666667)*vc;
						cout << " Vc = " << vc << "  " << endl;
						cout << " V = " << v << "  " << endl;
					} else {
						cout << "Usted a ingresado valores incorrectos" << endl;
					}
				} while (v<=0);
				break;
			case 2:
				do {
					cout << " Para calcular el area de una esfera ingrese los siguientes datos" << endl;
					cout << " Ingrese el valor del radio" << endl;
					cin >> r;
					if ((r>0)) {
						// Fórmula del area de una esfera
						at = 4*M_PI*(pow(r,2));
						cout << " r = " << r << "  " << endl;
						cout << " At = " << at << "  " << endl;
					} else {
						cout << "Usted a ingresado un valor incorrecto" << endl;
					}
				} while (at<=0);
				break;
			case 3:
				do {
					cout << " Para calcular el volumen de una esfera ingrese los siguientes datos" << endl;
					cout << " Ingrese el valor del radio" << endl;
					cin >> r;
					if ((r>0)) {
						// Fórmula para el volumen de una esfera
						v = (1.333333333)*M_PI*pow(r,3);
						cout << " r = " << r << "  " << endl;
						cout << " V = " << v << " " << endl;
					} else {
						cout << "Usted a ingresado un valor incorrecto" << endl;
					}
				} while (v<=0);
				break;
			case 4:
				do {
					cout << " Para calcular el area de la zona esferica de la esfera ingrese los siguientes datos" << endl;
					cout << " Ingrese el valor del Radio mayor" << endl;
					cin >> rm;
					cout << " Ingrese el valor de la altura" << endl;
					cin >> h;
					if ((rm>0) && (h>0)) {
						// Fórmula para el area de la zona esferica de la esfera
						at = 2*M_PI*rm*h;
						cout << " Rm = " << rm << "  " << endl;
						cout << " h = " << h << "  " << endl;
						cout << " At = " << at << " " << endl;
					} else {
						cout << "Usted a ingresado valores incorrectos" << endl;
					}
				} while (at<=0);
				break;
			case 5:
				do {
					cout << " Para calcular el area del casqueta esferico de la esfera ingrese los siguientes datos" << endl;
					cout << " Ingrese el valor del Radio mayor" << endl;
					cin >> rm;
					cout << " Ingrese el valor de la altura" << endl;
					cin >> h;
					if ((rm>0) && (h>0)) {
						// Fórmula para el area del casquete esferico de la esfera
						at = 2*M_PI*rm*h;
						cout << " Rm = " << rm << "  " << endl;
						cout << " h = " << h << "  " << endl;
						cout << " At = " << at << " " << endl;
					} else {
						cout << "Usted a ingresado valores incorrectos" << endl;
					}
				} while (at<=0);
				break;
			case 6:
				do {
					cout << " Para calcular el volumen de la zona esferica de la esfera ingrese los siguientes datos" << endl;
					cout << " Ingrese el valor del radio" << endl;
					cin >> r;
					cout << " Ingrese el valor de la altura" << endl;
					cin >> h;
					if ((h>0) && (r>0)) {
						// Fórmula para el volumen de la zona esferica de la esfera
						v = ((M_PI*h*(pow(h,2)+3*pow(r,2)+3*pow(r,2))))/6;
						cout << " h = " << h << "  " << endl;
						cout << " r = " << r << "  " << endl;
						cout << " V = " << v << " " << endl;
					} else {
						cout << "Usted a ingresado valores incorrectos" << endl;
					}
				} while (v<=0);
				break;
			case 7:
				do {
					cout << " Para calcular el volumen del casquete esferico de la esfera ingrese los siguientes datos" << endl;
					cout << " Ingrese el valor del radio" << endl;
					cin >> r;
					cout << " Ingrese el valor de la altura" << endl;
					cin >> h;
					if ((h>0) && (r>0)) {
						// Fórmula para el volumen de la zona esferica de la esfera
						v = ((M_PI*pow(h,2)*(3*r-h)))/3;
						cout << " h = " << h << "  " << endl;
						cout << " r = " << r << "  " << endl;
						cout << " V = " << v << " " << endl;
					} else {
						cout << "Usted a ingresado un valor incorrecto" << endl;
					}
				} while (v<=0);
				break;
			case 8:
				do {
					cout << "Para calcular el area del uso esferico ingrese los siguientes datos" << endl;
					cout << " Ingrese el valor del radio" << endl;
					cin >> r;
					cout << " Ingrese el valor del numero de grados" << endl;
					cin >> ng;
					if ((r>0) && (ng>0)) {
						// Fórmula del area de la cuña esferica 
						at = (4*M_PI*pow(r,2)*ng)/360;
						cout << " r = " << r << "  " << endl;
						cout << " ng = " << ng << " " << endl;
						cout << " At = " << at << "  " << endl;
					} else {
						cout << "Usted a ingresado valores incorrectos" << endl;
					}
				} while (at<=0);
				break;
			case 9:
				do {
					cout << "Para calcular del volumen de la cuña esferica ingrese los siguientes datos" << endl;
					cout << " Ingrese el valor del radio" << endl;
					cin >> r;
					cout << " Ingrese el valor del numero de grados" << endl;
					cin >> ng;
					if ((r>0) && (ng>0)) {
						// Fórmula del volumen de la cuña esferica 
						v = (1.333333333)*((M_PI*pow(r,3)*ng)/360);
						cout << " r = " << r << "  " << endl;
						cout << " ng = " << ng << " " << endl;
						cout << " V = " << v << "  " << endl;
					} else {
						cout << "Usted a ingresado valores incorrectos" << endl;
					}
				} while (v<=0);
				break;
			default:
				cout << " No es opcion válida" << endl;
			}
			break;
		case 11:
			cout << "MENU DE OPCIONES DE LA PIRAMIDE" << endl;
			cout << "1- calculo del area lateral de la piramide" << endl;
			cout << "2- calculo del apotema de la piramide" << endl;
			cout << "3- Calculo del area total de la piramide" << endl;
			cout << "4-Calculo del volumen de la piramide" << endl;
			cout << "Ingrese una opcion" << endl;
			cin >> op;
			switch (op) {
			case 1:
				do {
					cout << " Para calcular el area lateral de una piramide ingrese los siguientes datos" << endl;
					cout << " Ingrese el valor del perimetro de la base " << endl;
					cin >> pb;
					cout << " Ingrese el valor del apotema " << endl;
					cin >> ap;
					if ((pb>0) && (ap>0)) {
						// Fórmula del area lateral de una piramide
						al = (pb*ap)/2;
						cout << " Pb = " << pb << "  " << endl;
						cout << " Ap = " << ap << "  " << endl;
						cout << " AL = " << al << " " << endl;
					} else {
						cout << "Usted a ingresado valores incorrectos" << endl;
					}
				} while (al<=0);
				break;
			case 2:
				do {
					cout << " Para calcular el apotema de una piramide ingrese los siguientes datos" << endl;
					cout << " Ingrese el valor del area de la base " << endl;
					cin >> ab;
					cout << " Ingrese el valor de la altura " << endl;
					cin >> h;
					if ((ab>0) && (h>0)) {
						// Fórmula del apotema de una piramide
						ap = sqrtf(pow(h,2)+pow(ab,2));
						cout << " Ab = " << ab << "  " << endl;
						cout << " h = " << h << "  " << endl;
						cout << " Ap = " << ap << " " << endl;
					} else {
						cout << "Usted a ingresado valores incorrectos" << endl;
					}
				} while (ap<=0);
				break;
			case 3:
				do {
					cout << " Para calcular el area total de una piramide ingrese los siguientes datos" << endl;
					cout << " Ingrese el valor del area lateral" << endl;
					cin >> al;
					cout << " Ingrese el valor del area de la base " << endl;
					cin >> ab;
					if ((al>0) && (ab>0)) {
						// Fórmula del area total de una piramide
						at = al+ab;
						cout << " AL = " << al << "  " << endl;
						cout << " Ab = " << ab << "  " << endl;
						cout << " At = " << at << " " << endl;
					} else {
						cout << "Usted a ingresado valores incorrectos" << endl;
					}
				} while (at<=0);
				break;
			case 4:
				do {
					cout << " Para calcular el volumen de una piramide ingrese los siguientes datos" << endl;
					cout << " Ingrese el valor del area de la base" << endl;
					cin >> ab;
					cout << " Ingrese el valor de la altura " << endl;
					cin >> h;
					if ((ab>0) && (h>0)) {
						// Fórmula del volumen de una piramide
						v = (ab*h)/3;
						cout << " Ab = " << ab << "  " << endl;
						cout << " h = " << h << "  " << endl;
						cout << " V = " << v << " " << endl;
					} else {
						cout << "Usted a ingresado un valor incorrecto" << endl;
					}
				} while (v<=0);
				break;
			default:
				cout << " No es opcion válida" << endl;
			}
			break;
		case 12:
			cout << "MENU DE OPCIONES DEL TRONCO DE UN CONO" << endl;
			cout << "1- calculo del area lateral del tronco del cono " << endl;
			cout << "2- calculo del area total del tronco del cono" << endl;
			cout << "3- Calculo del volumen del tronco de un cono" << endl;
			cout << "Ingrese una opcion" << endl;
			cin >> op;
			switch (op) {
			case 1:
				cout << " Para calcular el area lateral del tronco de un cono ingrese los siguientes datos" << endl;
				cout << " Nota: Solo se permiten valores mayores que 0" << endl;
				g = 0;
				while ((g<=0)) {
					cout << " Ingrese el valor de la generatriz" << endl;
					cin >> g;
				}
				r = 0;
				while ((r<=0)) {
					cout << " Ingrese el valor del radio " << endl;
					cin >> r;
				}
				rmy = 0;
				while ((rmy<=0)) {
					cout << " Ingrese el valor del radio mayor " << endl;
					cin >> rmy;
				}
				// Fórmula del área lateral del tronco de un cono
				al = M_PI*g*(rmy+r);
				cout << " g = " << g << "  " << endl;
				cout << " r = " << r << "  " << endl;
				cout << " Rmy = " << rmy << " " << endl;
				cout << "AL = " << al << "  " << endl;
				break;
			case 2:
				cout << "Para calcular el area total del tronco de un cono ingrese los siguientes datos" << endl;
				cout << " Nota: Solo se permiten valores mayores que 0" << endl;
				al = 0;
				while ((al<=0)) {
					cout << " Ingrese el valor del area lateral" << endl;
					cin >> al;
				}
				ab = 0;
				while ((ab<=0)) {
					cout << " Ingrese el valor del area de la base mayor" << endl;
					cin >> ab;
				}
				abm = 0;
				while ((abm<=0)) {
					cout << " Ingrese el valoR de la base menor " << endl;
					cin >> abm;
				}
				// Fórmula del área total del tronco de un cono
				at = al+ab+abm;
				cout << " AL = " << al << "  " << endl;
				cout << " Ab = " << ab << "  " << endl;
				cout << " Abm = " << abm << " " << endl;
				cout << "At = " << at << "  " << endl;
				break;
			case 3:
				cout << "Para calcular el volumen del tronco de un cono ingrese los siguientes datos" << endl;
				cout << " Nota: Solo se permiten valores mayores que 0" << endl;
				h = 0;
				while ((h<=0)) {
					cout << " Ingrese el valor de la altura" << endl;
					cin >> h;
				}
				rmy = 0;
				while ((rmy<=0)) {
					cout << " Ingrese el valor del radio mayor" << endl;
					cin >> rmy;
				}
				rmn = 0;
				while ((rmn<=0)) {
					cout << " Ingrese el valor del radio menor " << endl;
					cin >> rmn;
				}
				// Fórmula del volumen del tronco de un cono
				v = (0.3333333333)*M_PI*h*(pow(rmy,2)+pow(rmn,2)+(rmy*rmn));
				cout << " h = " << h << "  " << endl;
				cout << " Rmy = " << rmy << "  " << endl;
				cout << " rmn = " << rmn << " " << endl;
				cout << " V = " << v << "  " << endl;
				break;
			default:
				cout << " No es opcion válida " << endl;
			}
			break;
		case 13:
			cout << "MENU DE OPCIONES DEL TRONCO DE UNA PIRAMIDE" << endl;
			cout << "1- calculo del area lateral del tronco de la piramide " << endl;
			cout << "2- calculo del area total del tronco de la piramide" << endl;
			cout << "3- Calculo del volumen del tronco de la priramide" << endl;
			cout << "Ingrese una opcion" << endl;
			cin >> op;
			switch (op) {
			case 1:
				cout << "Para calcular el area lateral del tronco de una piramide ingrese los siguientes datos" << endl;
				cout << " Nota: Solo se permiten valores mayores que 0" << endl;
				pb = 0;
				while ((pb<=0)) {
					cout << " Ingrese el valor del perimetro de la base mayor" << endl;
					cin >> pb;
				}
				cout << " Nota: Solo se permiten valores mayores que 0" << endl;
				pbm = 0;
				while ((pbm<=0)) {
					cout << " Ingrese el valor del perimetro de la base menor" << endl;
					cin >> pbm;
				}
				cout << " Nota: Solo se permiten valores mayores que 0" << endl;
				ap = 0;
				while ((ap<=0)) {
					cout << " Ingrese el valor del apotema " << endl;
					cin >> ap;
				}
				// Fórmula del area lateral del tronco de una piramide
				al = ((pb+pbm)/2)*ap;
				cout << " Pb = " << pb << "  " << endl;
				cout << " Pbm = " << pbm << "  " << endl;
				cout << " Ap = " << ap << " " << endl;
				cout << " AL = " << al << "  " << endl;
				break;
			case 2:
				cout << "Para calcular el area total del tronco de una piramide ingrese los siguientes datos" << endl;
				cout << " Nota: Solo se permiten valores mayores que 0" << endl;
				al = 0;
				while ((al<=0)) {
					cout << " Ingrese el valor del area lateral" << endl;
					cin >> al;
				}
				cout << " Nota: Solo se permiten valores mayores que 0" << endl;
				ab = 0;
				while ((ab<=0)) {
					cout << " Ingrese el valor del area de la base mayor" << endl;
					cin >> ab;
				}
				cout << " Nota: Solo se permiten valores mayores que 0" << endl;
				abm = 0;
				while ((abm<=0)) {
					cout << " Ingrese el valor del area de la base menor " << endl;
					cin >> abm;
				}
				// Fórmula del area total del tronco de una piramide
				at = al+ab+abm;
				cout << " AL = " << al << "  " << endl;
				cout << " Ab = " << ab << "  " << endl;
				cout << " Abm = " << abm << " " << endl;
				cout << " At = " << at << "  " << endl;
				break;
			case 3:
				cout << "Para calcular el volumen del tronco de una piramide ingrese los siguientes datos" << endl;
				cout << " Nota: Solo se permiten valores mayores que 0" << endl;
				h = 0;
				while ((h<=0)) {
					cout << " Ingrese el valor de la altura" << endl;
					cin >> h;
				}
				cout << " Nota: Solo se permiten valores mayores que 0" << endl;
				ab = 0;
				while ((ab<=0)) {
					cout << " Ingrese el valor del area de la base mayor" << endl;
					cin >> ab;
				}
				cout << " Nota: Solo se permiten valores mayores que 0" << endl;
				abm = 0;
				while ((abm<=0)) {
					cout << " Ingrese el valor del area de la base menor " << endl;
					cin >> abm;
				}
				// Fórmula del volumen del tronco de una piramide
				v = (0.333333333)*h*(ab+abm+sqrtf(ab*abm));
				cout << " h = " << h << "  " << endl;
				cout << " Ab = " << ab << "  " << endl;
				cout << " Abm = " << abm << " " << endl;
				cout << " V = " << v << "  " << endl;
				break;
			default:
				cout << " No es opcion válida " << endl;
			}
			break;
		case 14:
			cout << "Usted ha finalizado exitosamente" << endl;
			break;
		default:
			cout << " NO ES OPCION VALIDA " << endl;
		}
		cout << "> PRESIONE UNA TECLA PARA CONTINUAR" << endl;
	_getch();
	} while (num!=14);
	return 0;
}

