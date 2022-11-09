// Autor Miguel Flores

#include<iostream>
#include<cmath>
#include<cstdlib>
#include<ctime>
#include<stdlib.h>
#include<conio.h>
using namespace std;

void esperar(double t);
#define ARREGLO_MAX 100

int main() {
	int a;
	float contador;
	string contrasena;
	float corriente[ARREGLO_MAX];
	float e;
	double rad;
	float k;
	float gr;
	int i;
	float va;
	double L;
	int l;
	float m;
	float R;
	int m1;
	double ned;
	int n;
	int n1;
	string nomb;
	int op;
	float p;
	double pa;
	float pi;
	float pr;
	float r[ARREGLO_MAX];
	float r1;
	float r2;
	float r3;
	float rd;
	float re;
	float rf;
	int s;
	double total;
	float suma;
	float t;
	float v[ARREGLO_MAX];
	int x1;
	int z1;
	cout << "CARGANDO..." << endl;
	cout << "DESEA RECIBIR INDUCCION AL PROGRAMA INGRESE UN NUMERO" << endl;
	cout << "1=SI << O >> OTRO_NUMERO=NO" << endl;
	cin >> i;
	system("cls");
	if (i==1) {
		cout << "*******************INDUCCION***********************" << endl;
		cout << "HOLA SEA BIENVENIDO " << endl;
		cout << "PARA USAR LOS MENUS DE ESTE PROGRAMA  " << endl;
		cout << "SOLO DEBE ESCRIBIR LOS VALORES NUMERICOS" << endl;
		cout << "QUE SE ENCUENTRAN A LA IZQUIERDA DEL MENU" << endl;
		cout << "QUE SE PRESENTA." << endl;
		cout << " " << endl;
		cout << "ACONTINUACION SE LE PRESENTA EL SIGUIENTE" << endl;
		cout << "EJEMPLO" << endl;
		cout << " " << endl;
		cout << "Siguiente >> Presione una tecla" << endl;
		_getch();
		system("cls");
		cout << "EJEMPLO: " << endl;
		cout << "______MENU GENERAL DE OPCIONES______" << endl;
		cout << "1- TEORIA DE UN ELECTRONICO" << endl;
		cout << "2- RESISTENCIAS EN SERIE" << endl;
		cout << "INGRESE UNA OPCION POR FAVOR:" << endl;
		cout << "2" << endl;
		cout << " " << endl;
		cout << "EN ESTE EJEMPLO SE MUESTRA EL VALOR" << endl;
		cout << "QUE HA SELECCIONADO EL USUARIO Y PARA" << endl;
		cout << "ENTRAR A EL, SELECCIONA EL VALOR Y DA " << endl;
		cout << "UN ENTER." << endl;
		cout << " " << endl;
		cout << "Presione una tecla>" << endl;
		_getch();
		system("cls");
	}
	cout << "*************************************************" << endl;
	cout << "-__________BIEVENIDO AL PROGRAMA FOE __________-" << endl;
	cout << "************************************************" << endl;
	cout << "Ingrese su primer nombre por favor" << endl;
    cin>>nomb;
	system("cls");
	do {
		cout << "______MENU GENERAL DE OPCIONES______" << endl;
		cout << "1- TEORIA DE UN ELECTRONICO" << endl;
		cout << "2- RESISTENCIAS EN SERIE" << endl;
		cout << "3- RESISTENCIAS EN PARALELO" << endl;
		cout << "4- CIRCUITO DELTA A ESTRELLA" << endl;
		cout << "5- CIRCUITO ESTRELLA A DELTA" << endl;
		cout << "6- POTENCIAS DE CIRCUITOS" << endl;
		cout << "7- SIGUIENTE >" << endl;
		cout << "INGRESE UNA OPCION POR FAVOR" << endl;
		cin >> l;
		system("cls");
		switch (l) {
		case 1:
			do {
				cout << "TEORIA DE UN ELECTRONICO" << endl;
				cout << "1- Resistencia" << endl;
				cout << "2- Capacitor" << endl;
				cout << "3- Inductor" << endl;
				cout << "4- Voltaje" << endl;
				cout << "5- Corriente" << endl;
				cout << "6- Diodos" << endl;
				cout << "7- Potencia" << endl;
				cout << "8- Transformador" << endl;
				cout << "9- Salir" << endl;
				cout << "INGRESE UNA OPCION POR FAVOR" << endl;
				cin >> n;
				system("cls");
				switch (n) {
				case 1:
					cout << "Definicion de Resistencia: " << endl;
					cout << "Se le denomina resistencia electrica " << endl;
					cout << "a la oposicion alflujo de la corriente  " << endl;
					cout << "electrica a traves de un conductor." << endl;
					cout << " " << endl;
					cout << "Caracteristicas: " << endl;
					cout << "La resistencia electrica se mide en " << endl;
					cout << "Ohmios y se representa con la letra R." << endl;
					cout << "Esta compuesta de un codigo de colores." << endl;
					break;
				case 2:
					cout << "Definicion de Capacitor: " << endl;
					cout << "Un condensador o capacitor es un " << endl;
					cout << "dispositivo electronico Capaz de" << endl;
					cout << "almacenar energia en carga electrica." << endl;
					cout << " " << endl;
					cout << "Caracteristicas: " << endl;
					cout << "Esta compuesta de dos placas " << endl;
					cout << "conductoras separadas por un aislante" << endl;
					cout << "llamado dielectrico que es polarizado." << endl;
					break;
				case 3:
					cout << "Definicion de Inductor: " << endl;
					cout << "Un inductor o bobina es un componente" << endl;
					cout << "pasivo de un circuito electrico que " << endl;
					cout << "almacena energia como campo magnetico." << endl;
					cout << " " << endl;
					cout << "Caracteristicas: " << endl;
					cout << "Un inductor se caracteriza por su " << endl;
					cout << "inductancia, que es la relacion entre la " << endl;
					cout << "tension y la tasa de cambio de la corriente." << endl;
					break;
				case 4:
					cout << "Definicion de voltaje: " << endl;
					cout << "El voltaje es la diferencia de potencial " << endl;
					cout << "entre dos puntos o el trabajo por unidad " << endl;
					cout << "de carga del campo electrico." << endl;
					cout << " " << endl;
					cout << "Caracteristicas: " << endl;
					cout << "El voltaje generado puede depender de muchos" << endl;
					cout << "factores la velocidad de rotacion la fuerza " << endl;
					cout << "del campo magnetico y la proximidad del sensor." << endl;
					break;
				case 5:
					cout << "Definicion de Corriente:" << endl;
					cout << "Es el flujo de carga electrica a traves de un " << endl;
					cout << "material conductor, debido al desplazamiento de" << endl;
					cout << "los electrones." << endl;
					cout << " " << endl;
					cout << "Caracteristicas: " << endl;
					cout << "Se produce debido a un flujo de electrones." << endl;
					cout << "Los electrones se mueven del polo positivo al" << endl;
					cout << "negativo." << endl;
					break;
				case 6:
					cout << "Definicion de Diodo:" << endl;
					cout << "Un diodo es un componente electronico de dos" << endl;
					cout << "terminales que permite la circulacion de corriente " << endl;
					cout << "electrica a traves de el en un solo sentido." << endl;
					cout << " " << endl;
					cout << "Caracteristicas: " << endl;
					cout << "Los diodos poseen una resistencia muy pequeña" << endl;
					cout << "que se pone a trabajar cuando se comporta como" << endl;
					cout << "un circuito cerrado." << endl;
					break;
				case 7:
					cout << "Definicion de Potencia:" << endl;
					cout << "La potencia electrica es la proporcion por unidad" << endl;
					cout << "de tiempo, o ritmo, con la cual la energia electrica" << endl;
					cout << "es transferida por un circuito electrico." << endl;
					cout << " " << endl;
					cout << "Caracteristicas: " << endl;
					cout << "Determina la cantidad de aparatos que pueden estar" << endl;
					cout << "conectados a la red informacion que es muy util para" << endl;
					cout << "las empresas." << endl;
					break;
				case 8:
					cout << "Definicion de Transformador:" << endl;
					cout << "Se denomina transformador a un elemento electrico que" << endl;
					cout << "permite aumentar o disminuir la tension en un circuito" << endl;
					cout << "electrico de corriente alterna, manteniendo la potencia." << endl;
					cout << " " << endl;
					cout << "Caracteristicas: " << endl;
					cout << "Esta constituido por dos bobinas de material conductor" << endl;
					cout << "sobre un nucleo cerrado de material ferromagnetico, pero" << endl;
					cout << "aisladas entre si electricamente." << endl;
					break;
				case 9:
					cout << "Usted esta saliendo..." << endl;
					break;
				default:
					cout << "EL VALOR INGRESADO NO ES VALIDO" << endl;
				}
				cout << " " << endl;
				cout << "Presione una tecla>" << endl;
				_getch();
				system("cls");
			} while (n!=9);
			break;
		case 2:
			cout << "Ingrese el total de resistencias en serie" << endl;
			cin >> t;
			m = 1;
			suma = 0;
			while (m<=t) {
				cout << "Ingrese una resistencia" << endl;
				cin >> n;
				if (n>0) {
					suma = suma+n;
					m = m+1;
				}
			}
			cout << "El resultado de las " << t << " resistencias series es:" << suma << " Ohm" << endl;
			cout << " " << endl;
			cout << "Presione una tecla>" << endl;
			_getch();
			system("cls");
			break;
		case 3:
	cout << "Ingrese el total de resistencias en paralelo" << endl;
	cin >> t;
	m = 1;
	suma = 0;
	while (m<=t) {
		cout << "Ingrese una resistencia" << endl;
		cin >> k;
		if (k>0) {
			suma=suma+1/k;
			m = m+1;
			
		}
	}
	e=1/suma;
	cout << "El resultado de las " << t << " resistencias paralelas es:" << e << " Ohm" << endl;
			cout << " " << endl;
			cout << "Presione una tecla>" << endl;
			_getch();
			system("cls");
			break;
		case 4:
			cout << "**Circuito Delta a Estrella**" << endl;
			do {
				cout << "Ingrese la resistencia a:" << endl;
				cin >> rd;
			} while (rd<=0);
			do {
				cout << "Ingrese la resistencia b:" << endl;
				cin >> re;
			} while (re<=0);
			do {
				cout << "Ingrese la resistencia c:" << endl;
				cin >> rf;
			} while (rf<=0);
			// Procedimiento
			r1 = (rd*re)/(rd+re+rf);
			r2 = (re*rf)/(rd+re+rf);
			r3 = (rd*rf)/(rd+re+rf);
			cout << "Se obtuvieron los siguientes resultado: " << endl;
			cout << " " << endl;
			cout << "R1= " << r1 << " Ohm" << endl;
			cout << "R2= " << r2 << " Ohm" << endl;
			cout << "R3= " << r3 << " Ohm" << endl;
			cout << " " << endl;
			cout << "Presione una tecla>" << endl;
			_getch();
			system("cls");
			break;
		case 5:
			cout << "**Circuito Estrella a Delta**" << endl;
			do {
				cout << "Ingrese la resistencia R1:" << endl;
				cin >> r1;
			} while (r1<=0);
			do {
				cout << "Ingrese la resistencia R2:" << endl;
				cin >> r2;
			} while (r2<=0);
			do {
				cout << "Ingrese la resistencia R3:" << endl;
				cin >> r3;
			} while (r3<=0);
			// Procedimiento
			rd = ((r1*r2)+(r2*r3)+(r1*r3))/(r1);
			re = ((r1*r2)+(r2*r3)+(r1*r3))/(r2);
			rf = ((r1*r2)+(r2*r3)+(r1*r3))/(r3);
			cout << "Se obtuvieron los siguientes resultado: " << endl;
			cout << " " << endl;
			cout << "Ra= " << rd << " Ohm" << endl;
			cout << "Rb= " << re << " Ohm" << endl;
			cout << "Rc= " << rf << " Ohm" << endl;
			cout << " " << endl;
			cout << "Presione una tecla>" << endl;
			_getch();
			system("cls");
			break;
		case 6:
			do {
				cout << "POTENCIAS DE CIRCUITOS" << endl;
				cout << "1- Potencias Monofasica" << endl;
				cout << "2- Ejercicios para resolver" << endl;
				cout << "3- Salir" << endl;
				cout << "Ingrese una opcion" << endl;
				cin >> s;
				system("cls");
				switch (s) {
				case 1:
					do {
						cout << "1- Potencia Aparente " << endl;
						cout << "2- Calcular potencia activa" << endl;
						cout << "3- Calcular potencia reactiva" << endl;
						cout << "4- Salir" << endl;
						cout << "Ingrese una opcion" << endl;
						cin >> op;
						system("cls");
						switch (op) {
						case 1:
							cout << "***Potencia Aparente***" << endl;
							do {
								cout << "Ingrese el voltaje" << endl;
								cin >> va;
							} while (va<=0);
							do {
								cout << "Ingrese la corriente" << endl;
								cin >> i;
							} while (i<=0);
							p = va*i;
							cout << "La potencia es de: " << p << " WATT" << endl;
							break;
						case 2:
							cout << "***Potencia activa***" << endl;
							do {
								cout << "Ingrese el voltaje" << endl;
								cin >> va;
							} while (va<=0);
							do {
								cout << "Ingrese la corriente" << endl;
								cin >> i;
							} while (i<=0);
							do {
								cout << "Ingrese el angulo" << endl;
								cin >> a;
							} while (a<=0);
							gr = (a*M_PI)/180;
							pa = va*i*(cos(gr));
							cout << "La potencia activa es de: " << pa << " WATT" << endl;
							break;
						case 3:
							cout << "***Potencia Reactiva***" << endl;
							do {
								cout << "Ingrese el voltaje" << endl;
								cin >> va;
							} while (va<=0);
							do {
								cout << "Ingrese la corriente" << endl;
								cin >> i;
							} while (i<=0);
							do {
								cout << "Ingrese el angulo" << endl;
								cin >> a;
							} while (a<=0);
							gr = (a*M_PI)/180;
							pr = va*i*(sin(gr));
							cout << "La potencia Reactiva es de: " << pr << " WATT" << endl;
							break;
						case 4:
							cout << "Usted esta saliendo" << endl;
							break;
						default:
							cout << "El valor ingresado no es valido" << endl;
						}
						cout << " " << endl;
						cout << "Presione una tecla>" << endl;
						_getch();
						system("cls");
					} while (op!=4);
					break;
				case 2:
					z1 = (rand()%3)+1;
					if (z1==1) {
						cout << "CALCULE EL SIGUIENTE CIRCUITO EN BASE A LA POTENCIA" << endl;
						n1 = (rand()%100)+1;
						x1 = (rand()%100)+1;
						cout << "Un circuito Monofasico posee un voltaje de " << n1 << " vol" << endl;
						cout << "y una corriente de " << x1 << " amper,Calcule la potencia " << endl;
						cout << "aparente del circuito." << endl;
						cout << " " << endl;
						cout << "Presione una tecla para ver el procedimiento >>" << endl;
						_getch();
						cout << " " << endl;
						cout << "Formula: P = V * I" << endl;
						cout << "V= " << n1 << endl;
						cout << "I= " << x1 << endl;
						p = n1*x1;
						cout << " " << endl;
						cout << "Resultado:" << endl;
						cout << "Potencia Aparente :" << p << " WATT" << endl;
						cout << " " << endl;
						cout << "Presione una tecla >>" << endl;
						_getch();
						system("cls");
					}
					if (z1==2) {
						cout << "CALCULE EL SIGUIENTE CIRCUITO EN BASE A LA POTENCIA ACTIVA" << endl;
						cout << " " << endl;
						n1 = (rand()%100)+1;
						x1 = (rand()%100)+1;
						m1 = (rand()%100)+1;
						cout << "Un circuito electrico tiene un voltaje de " << n1 << " volt" << endl;
						cout << "Y pasa por el una corriente de " << x1 << " amperios con " << endl;
						cout << "un angulo de " << m1 << " grados, Calcule su potencia activa." << endl;
						cout << " " << endl;
						cout << "Presione una tecla para ver el procedimiento" << endl;
						_getch();
						cout << " " << endl;
						cout << "Formula: PA = V * I * (cos(Angulo))" << endl;
						cout << "V= " << n1 << endl;
						cout << "I= " << x1 << endl;
						cout << "Angulo= " << m1 << endl;
						rad = m1*3.141592654/180;
						pa = n1*x1*cos(rad);
						cout << " " << endl;
						cout << "Resultado:" << endl;
						cout << "Potencia activa :" << pa << " WATT" << endl;
						cout << " " << endl;
						cout << "Presione una tecla" << endl;
						_getch();
						system("cls");
					}
					if (z1==3) {
						cout << "CALCULE EL SIGUIENTE CIRCUITO EN BASE A LA POTENCIA REACTIVA" << endl;
						cout << " " << endl;
						n1 = (rand()%100)+1;
						x1 = (rand()%100)+1;
						m1 = (rand()%100)+1;
						cout << "Un circuito electrico tiene un voltaje de " << n1 << " volt" << endl;
						cout << "Y pasa por el, una corriente de " << x1 << " amperios con " << endl;
						cout << "un angulo de " << m1 << " grados, Calcule su potencia reactiva." << endl;
						cout << " " << endl;
						cout << "Presione una tecla para ver el procedimiento" << endl;
						_getch();
						cout << "Formula: PR = V * I * (sen(Angulo))" << endl;
						cout << "V= " << n1 << endl;
						cout << "I= " << x1 << endl;
						cout << "Ang= " << m1 << endl;
						rad = (m1*3.141592654)/180;
						pr = n1*x1*(sin(rad));
						cout << " " << endl;
						cout << "Resultado:" << endl;
						cout << "Potencia Reactiva :" << pr << " WATT" << endl;
						cout << " " << endl;
						cout << "Presione una tecla" << endl;
						_getch();
						system("cls");
					}
					break;
				case 3:
					cout << "Usted esta saliendo" << endl;
					cout << " " << endl;
					cout << "Presione una tecla>" << endl;
					_getch();
					break;
				default:
					cout << "EL VALOR INGRESADO NO ES VALIDO" << endl;
				}
			} while (s!=3);
			system("cls");
			break;
		case 7:
			cout << "SIGUIENTE..." << endl;
			cout << " " << endl;
			cout << "Presione una tecla>" << endl;
			_getch();
			break;
		default:
			cout << "EL VALOR INGRESADO NO ES VALIDO" << endl;
		}
	} while (l!=7);
	system("cls");
	cout << "______MENU SECUNDARIO DE OPCIONES______" << endl;
	cout << "1- LEY DE OHM " << endl;
	cout << "2- DESARROLLADOR" << endl;
	cout << "3- FINALIZAR" << endl;
	cout << "INGRESE UNA OPCION POR FAVOR" << endl;
	cin >> l;
	system("cls");
	switch (l) {
	case 1:
		cout << "LEY DE OHM" << endl;
		cout << "1- Corriente" << endl;
		cout << "2- Resistencia" << endl;
		cout << "3- Voltaje" << endl;
		cout << "4- Salir" << endl;
		cout << "Ingrese una opcion" << endl;
		cin >> op;
		system("cls");
		switch (op) {
		case 1:
			cout << "La corriente electrica" << endl;
			do {
				cout << "Ingrese la candidad de circuitos a calcular" << endl;
				cin >> a;
			} while (a<=0);
			system("cls");
			for (i=1;i<=a;i++) {
				cout << "ingrese el voltaje " << i << ":" << endl;
				cin >> v[i-1];
				cout << "Ingrese la resistencia " << i << ":" << endl;
				cin >> r[i-1];
				system("cls");
				if ((v[i-1]>0 && r[i-1]>0)) {
					corriente[i-1] = v[i-1]/r[i-1];
				}
			}
			cout << "Resuestas obtenidas" << endl;
			for (i=1;i<=a;i++) {
				if ((corriente[i-1]>0)) {
					cout << "resultado " << (i) << "----" << corriente[i-1] << " Amper" << endl;
				}
			}
			break;
		case 2:
			cout << "La Resistencia" << endl;
			do {
				cout << "Ingrese la candidad de circuitos a calcular" << endl;
				cin >> a;
			} while (a<=0);
			system("cls");
			for (i=1;i<=a;i++) {
				cout << "ingrese el voltaje " << i << ":" << endl;
				cin >> v[i-1];
				cout << "Ingrese la corriente " << i << ":" << endl;
				cin >> corriente[i-1];
				system("cls");
				if ((v[i-1]>0 && corriente[i-1]>0)) {
					r[i-1] = v[i-1]/corriente[i-1];
				}
			}
			cout << "Resuestas obtenidas" << endl;
			for (i=1;i<=a;i++) {
				if ((r[i-1]>0)) {
					cout << "resultado " << (i) << "----" << r[i-1] << " Ohm" << endl;
				}
			}
			break;
		case 3:
			cout << "El voltaje" << endl;
			do {
				cout << "Ingrese la candidad de circuitos a calcular" << endl;
				cin >> a;
			} while (a<=0);
			system("cls");
			for (i=1;i<=a;i++) {
				cout << "ingrese la resistencia " << i << ":" << endl;
				cin >> r[i-1];
				cout << "Ingrese la corriente " << i << ":" << endl;
				cin >> corriente[i-1];
				system("cls");
				if ((r[i-1]>0 && corriente[i-1]>0)) {
					v[i-1] = r[i-1]*corriente[i-1];
				}
			}
			cout << "Resuestas obtenidas" << endl;
			for (i=1;i<=a;i++) {
				if ((v[i-1]>0)) {
					cout << "resultado " << (i) << "----" << v[i-1] << " Volt" << endl;
				}
			}
			break;
		case 4:
			cout << "Usted esta saliendo..." << endl;
			break;
		default:
			cout << "EL VALOR INGRESADO NO ES VALIDO" << endl;
		}
		cout << " " << endl;
		cout << "Presione una tecla>" << endl;
		_getch();
		system("cls");
		break;
	case 2:
		contador = 1;
		while (contador<=3) {
			cout << " <<Contrasena=www.programator" << endl;
			cout << "Ingrese la contrasena por favor:" << endl;
			cin >> contrasena;
			if (contrasena=="www.programator") {
				s = 5;
				while (s>=0) {
					system("cls");
					if (s>9) {
						cout << ":" << s << endl;
					} else {
						cout << ":0" << s << endl;
					}
					esperar(1*1000);
					s = s-1;
				}
				s = 59;
				system("cls");
				cout << "*********INFORMACION DEL DESARROLLADOR**********" << endl;
				cout << "CREADOR DEL PROGRAMA: MIGUEL ANGEL FLORES JARQUIN " << endl;
				cout << "COLABORADOR: DANILO NOGUERA" << endl;
				cout << "FECHA DE LANZAMIENTO: 10 DE NOVIEMBRE DEL 2022" << endl;
				cout << "ESTE PROGRAMA FUE PENSADO PARA FACILITAR LA " << endl;
				cout << "REALIZACION DE EJERCICIOS Y PRUEBAS FUNDAMENTALES" << endl;
				cout << "EN ELECTRONICA." << endl;
				cout << " " << endl;
				cout << "EL NOMBRE DEL PROGRAMA FUE PENSADO EN BASE A LAS" << endl;
				cout << "INICIALES DE FUNDAMENTALS OF ELECTRONICS FOE" << endl;
				cout << "QUE EN ESPANOL SIGNIFICA FUNDAMENTOS DE ELECTRONICA." << endl;
				contador = 4;
			} else {
				if (contador==3) {
					cout << " Lo sentimos usted a fallado sus tres intentos el sistema finalizo" << endl;
				}
				contador = contador+1;
			}
		}
		cout << " " << endl;
		cout << "Presione una tecla>" << endl;
		_getch();
		system("cls");
		break;
	case 3:
		cout << "<< fundamentals of electronics FOE >>" << endl;
		break;
	default:
		cout << "EL VALOR INGRESADO NO ES VALIDO" << endl;
	}
	cout << "<< Le esperamos pronto " << nomb << " >>" << endl;
	return 0;
}


void esperar(double t) {
	clock_t t0 = clock();
	double e = 0;
	do {
		e = 1000*double(clock()-t0)/CLOCKS_PER_SEC;
	} while (e<t);
}

