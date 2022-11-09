Algoritmo Los_cuerpos_geometricos
	
	Escribir "> PRESIONE UNA TECLA PARA INICIAR"
	Esperar Tecla
	Definir AL,h,At,V,Vcilindro,Pb,g,r,Ab,A,Apent,ar,Ap,D,Area,b,c,Rm,ng,Vc,Abm,Rmy,rmn,Pbm Como Real
	Repetir
		
		Borrar Pantalla
		Escribir "_________MENU DE OPCIONES DE LOS CUERPOS GEOMETRICOS_________";
		Escribir "*************************************************************"
		Escribir "1- EL CILINDRO";
		Escribir "2- EL CONO";
		Escribir "3- EL DODECAEDRO";
		Escribir "4- EL HEXAEDRO";
		Escribir "5- EL ICOSAEDRO";
		Escribir "6- EL OCTAEDRO";
		Escribir "7- EL ORTOEDRO";
		Escribir "8- EL PRISMA PENTAGONAL";
		Escribir "9- EL TETRAEDRO";
		Escribir "10- LA ESFERA";
		Escribir "11- LA PIRAMIDE";
		Escribir "12- TRONCO DE UN CONO";
		Escribir "13- TRONCO DE UNA PIRAMIDE";
		Escribir "14- FINALIZAR"
		Escribir "***INGRESE UNA OPCION POR FAVOR***";
		Leer num;
		Limpiar Pantalla
		Segun num Hacer
			
			1:
				
				
				Escribir "MENU DE OPCIONES DEL CILINDRO";
				Escribir "1- calculo del area lateral del cilindro";
				Escribir "2- calculo del area total del cilindro";
				Escribir "3- Calculo del volumen del cilindro"
				Escribir "Ingrese una opcion";
				Leer op;	
				
				Segun op Hacer
					1:
						Repetir
							
							
							Escribir " Para calcular el area lateral de un cilindro ingrese los siguientes datos" 
							Escribir " Ingrese el valor del radio "
							Leer r
							Escribir " Ingrese el valor de la altura "
							Leer h
							
							si (r > 0) y (h > 0) Entonces
								// Fórmula del area lateral de un cilindro
								AL = 2*PI*r*h
								Escribir " r = " r "  "
								Escribir " h = " h "  "
								Escribir " AL = " AL " "
								
							Sino
								Escribir "Usted a ingresado valores incorrectos"
							FinSi
						Hasta Que AL > 0 
						
					2:
						Repetir
							
							Escribir " Para calcular el area total de un cilindro ingrese los siguientes datos" 
							Escribir " Ingrese el valor del radio "
							Leer r
							Escribir " Ingrese el valor de la altura "
							Leer h
							
							si (h > 0) y (r > 0) Entonces
								// Fórmula del area total de un cilindro
								At = 2*PI*r*(h+r)
								Escribir " r = " r "  "
								Escribir " h = " h "  "
								Escribir " At = " At " "
								
							Sino
								Escribir "Usted a ingresado valores incorrectos"
							FinSi
							
						Hasta Que At > 0
						
					3:
						Repetir
							
							Escribir " Para calcular el volumen de un cilindro ingrese los siguientes datos" 
							Escribir " Ingrese el valor del radio "
							Leer r
							Escribir " Ingrese el valor de la altura "
							Leer h
							
							si (h > 0) y (r > 0) Entonces
								// Fórmula del volumen de un cilindro
								V = PI*r^2*h
								Escribir " r = " r "  "
								Escribir " h = " h "  "
								Escribir " V = " V " "
								
							Sino
								Escribir "Usted a ingresado valores incorrectos"
							FinSi
							
						Hasta Que V > 0
					De Otro Modo:
						Escribir " No es opcion válida"
						
				Fin Segun
			2:
				
				
				Escribir "MENU DE OPCIONES DEL CONO";
				Escribir "1- calculo del volumen del cono respecto al del cilindro";
				Escribir "2- calculo del area lateral del cono, primera formula";
				Escribir "3- Calculo del area lateral del cono, segunda fórmula"
				Escribir "4-Calculo de la generatriz del cono"
				Escribir "5-Calculo del area total del cono, primera formula"
				Escribir "6-Calculo del area total del cono, segunda formula"
				Escribir "7-Calculo del volumen del cono primera formula"
				Escribir "8-Calculo del volumen del cono segunda fórmula"
				Escribir "Ingrese una opcion";
				Leer op;
				
				Segun op Hacer
					
					1:
						Repetir
							
							Escribir " Para calcular el volumen del cono respecto al cilindro ingrese los siguientes datos" 
							Escribir " Ingrese el valor del volumen del cilindro"
							Leer Vcilindro
							
							Si (Vcilindro > 0) Entonces
								// Fórmula para el volumen del cono respecto al cilindro
								V = (1/3)*Vcilindro
								Escribir " Vcilindro = " Vcilindro "  "
								Escribir "El volumen del cono es:"
								Escribir " V = " V "  "
								
							Sino
								Escribir "Usted a ingresado un valor incorrecto"
							FinSi
						Hasta Que V > 0
						
					2:
						Repetir
							
							Escribir " Para calcular el area lateral de un cono ingrese los siguientes datos" 
							Escribir " Ingrese el valor del perimetro de la base"
							Leer Pb
							Escribir " Ingrese el valor de la generatriz "
							Leer g
							
							si (Pb > 0) y (g > 0) Entonces
								// Fórmula del area lateral de un cono
								AL = (Pb*g)/2
								Escribir " Pb = " Pb "  "
								Escribir " g = " g "  "
								Escribir " AL = " AL " "
								
							Sino
								Escribir "Usted a ingresado valores incorrectos"
							FinSi
						Hasta Que AL > 0
						
					3:
						Repetir
							Escribir " Para calcular el area lateral de un cono ingrese los siguientes datos" 
							Escribir " Ingrese el valor del radio de la base"
							Leer r
							Escribir " Ingrese el valor de la generatriz "
							Leer g
							
							si (r > 0) y (g > 0) Entonces
								// Fórmula del area lateral de un cono
								AL = PI*r*g
								Escribir " r = " r "  "
								Escribir " g = " g "  "
								Escribir " AL = " AL " "
								
							Sino
								Escribir "Usted a ingresado valores incorrectos"
							FinSi
						Hasta Que AL > 0
						
					4:
						Repetir
							Escribir " Para calcular la generatriz de un cono ingrese los siguientes datos" 
							Escribir " Ingrese el valor de la altura"
							Leer h
							Escribir " Ingrese el valor del radio "
							Leer r
							
							si (h > 0) y (r > 0) Entonces
								// Fórmula de la generatriz de un cono
								g = raiz(h^2+r^2)
								Escribir " h = " h "  "
								Escribir " r = " r "  "
								Escribir " g = " g " "
								
							Sino
								Escribir "Usted a ingresado valores incorrectos"
							FinSi
						Hasta Que g > 0
						
					5:
						Repetir
							Escribir " Para calcular el area total de un cono ingrese los siguientes datos" 
							Escribir " Ingrese el valor del area lateral"
							Leer AL
							Escribir " Ingrese el valor del radio "
							Leer r
							
							si (AL > 0) y (r > 0) Entonces
								// Fórmula para el area total de un cono
								At = AL+ (PI*r^2)
								Escribir " AL = " AL "  "
								Escribir " r = " r "  "
								Escribir " At = " At " "
								
							Sino
								Escribir "Usted a ingresado valores incorrectos"
							FinSi
						Hasta Que At > 0
						
					6:
						Repetir
							Escribir " Para calcular el area total de un cono ingrese los siguientes datos" 
							Escribir " Ingrese el valor del radio"
							Leer r
							Escribir " Ingrese el valor de la generatriz"
							Leer g
							
							si (r > 0) y (g > 0) Entonces
								// Fórmula para el area total de un cono
								At = PI*r*(g+r)
								Escribir " r = " r "  "
								Escribir " g = " g "  "
								Escribir " At = " At " "
								
							Sino
								Escribir "Usted a ingresado valores incorrectos"
							FinSi
						Hasta Que At > 0
						
					7:
						Repetir
							Escribir " Para calcular el volumen de un cono ingrese los siguientes datos" 
							Escribir " Ingrese el valor del area de la base"
							Leer Ab
							Escribir " Ingrese el valor de la altura"
							Leer h
							
							si (Ab > 0) y (h > 0) Entonces
								// Fórmula para el volumen de un cono
								V = (Ab*h)/3
								Escribir " Ab = " Ab "  "
								Escribir " h = " h "  "
								Escribir " V = " V " "
								
							Sino
								Escribir "Usted a ingresado valores incorrectos"
							FinSi
						Hasta Que V > 0
						
					8:
						Repetir
							Escribir " Para calcular el volumen de un cono ingrese los siguientes datos" 
							Escribir " Ingrese el valor del radio"
							Leer r
							Escribir " Ingrese el valor de la altura"
							Leer h
							
							si (r > 0) y (h > 0) Entonces
								// Fórmula para el volumen de un cono
								V = (PI*r^2*h)/3
								Escribir " r = " r "  "
								Escribir " h = " h "  "
								Escribir " V = " V " "
								
							Sino
								Escribir "Usted a ingresado valores incorrectos"
							FinSi
						Hasta Que V > 0
					De Otro Modo:
						Escribir " No es opcion válida"
						
				Fin Segun
				
			3:
				
				
				Escribir "MENU DE OPCIONES DEL DODECAEDRO";
				Escribir "1- calculo del area del Dodecaedro";
				Escribir "2- calculo del volumen del Dodecaedro";
				Escribir "3- Calculo del area pentagonal del Dodecaedro"
				Escribir "Ingrese una opcion";
				Leer op;
				
				Segun op Hacer
					
					1:
						Escribir " Para calcular el area del Dodecaedro ingrese el siguiente datos" 
						Escribir " Nota: Solo se permite un valor mayor que 0"
						ar = 0
						Mientras (ar <= 0) Hacer
							Escribir " Ingrese el valor del arista o lados"
							Leer ar
						FinMientras
						A = 3*ar^2*raiz(25+(10*raiz(5)))
						Escribir " ar = " ar "  "
						Escribir " A = " A "  "
						
					2:
						Escribir " Para calcular el volumen del Dodecaedro ingrese el siguiente dato" 
						Escribir " Nota: Solo se permite un valor mayor que 0"
						ar = 0
						Mientras (ar <= 0) Hacer
							Escribir " Ingrese el valor del arista o lados"
							Leer ar
						FinMientras
						V = (1/4)*(15+7*raiz(5))*ar^3
						Escribir " ar = " ar "  "
						Escribir " V = " V " "
						
					3:
						Escribir " Para calcular el area pentagonal del dodecaedro ingrese los siguientes datos" 
						Escribir " Nota: Solo se permite un valor mayor que 0"
						ar = 0
						Mientras (ar <= 0) Hacer
							Escribir " Ingrese el valor del arista o lado"
							Leer ar
						FinMientras
						
						Escribir " Nota: Solo se permite un valor mayor que 0"
						Ap = 0
						Mientras (Ap <= 0) Hacer
							Escribir " Ingrese el valor del apotema"
							Leer Ap
						FinMientras
						
						Apen = (5/2)*ar*Ap
						Escribir " ar = " ar "  "
						Escribir " ap = " ap "  "
						Escribir " Apen = " Apen " "
						// La relación de euler: c + v = a + 2
						//  caras + vertices = aristas + 2
					De Otro Modo:
						Escribir " No es opcion válida "
						
				Fin Segun
			4:
				
				
				Escribir "MENU DE OPCIONES DEL HEXAEDRO";
				Escribir "1- calculo del area del hexaedro";
				Escribir "2- calculo de la diagonal del hexaedro";
				Escribir "3- Calculo del volumen del hexaedro"
				Escribir "Ingrese una opcion";
				Leer op;
				
				Segun op Hacer
					
					1:
						Escribir " Para calcular el area del hexaedro ingrese el siguiente dato" 
						Escribir " Nota: Solo se permite un valor mayor que 0"
						ar = 0
						Mientras (ar <= 0) Hacer
							Escribir " Ingrese el valor del arista o lados"
							Leer ar
						FinMientras
						A = 6*ar^2
						Escribir " ar = " ar "  "
						Escribir " A = " A "  "
						
					2:
						Escribir " Para calcular la diagonal del hexaedro ingrese el siguiente dato" 
						Escribir " Nota: Solo se permite un valor mayor que 0"
						ar = 0
						Mientras (ar <= 0) Hacer
							Escribir " Ingrese el valor del arista o lados"
							Leer ar
						FinMientras
						D = ar*(raiz(3))
						Escribir " ar = " ar "  "
						Escribir " D = " D " "
						
					3:
						Escribir " Para calcular el volumen del hexaedro ingrese el siguiente dato" 
						Escribir " Nota: Solo se permite un valor mayor que 0"
						ar = 0
						Mientras (ar <= 0) Hacer
							Escribir " Ingrese el valor del arista o lado"
							Leer ar
						FinMientras
						V = ar^3
						Escribir " ar = " ar "  "
						Escribir " V = " V " "
						// La relación de euler: c + v = a + 2
						//  caras + vertices = aristas + 2
					De Otro Modo:
						Escribir " No es opcion válida "
						
				Fin Segun
			5:
				
				
				Escribir "MENU DE OPCIONES DEL ICOSAEDRO";
				Escribir "1- calculo del area del Icosaedro";
				Escribir "2- Calculo del volumen del Icosaedro"
				Escribir "Ingrese una opcion";
				Leer op;
				
				Segun op Hacer
					
					1:
						Escribir " Para calcular el area del Icosaedro ingrese el siguiente dato" 
						Escribir " Nota: Solo se permite un valor mayor que 0"
						ar = 0
						Mientras (ar <= 0) Hacer
							Escribir " Ingrese el valor del arista o lados"
							Leer ar
						FinMientras
						A = 5*ar^2*raiz(3)
						Escribir " ar = " ar "  "
						Escribir " A = " A "  "
						
						
					2:
						Escribir " Para calcular el volumen del Icosaedro ingrese el siguiente dato" 
						Escribir " Nota: Solo se permite un valor mayor que 0"
						ar = 0
						Mientras (ar <= 0) Hacer
							Escribir " Ingrese el valor del arista o lado"
							Leer ar
						FinMientras
						V = (5/12)*(3+raiz(5))*ar^3
						Escribir " ar = " ar "  "
						Escribir " V = " V " "
						// La relación de euler: c + v = a + 2
						//  caras + vertices = aristas + 2
					De Otro Modo:
						Escribir " No es opcion válida "
						
				Fin Segun
			6:
				
				
				Escribir "MENU DE OPCIONES DEL OCTAEDRO";
				Escribir "1- calculo del area del octaedro";
				Escribir "2- Calculo del volumen del octaedro"
				Escribir "Ingrese una opcion";
				Leer op;
				
				Segun op Hacer
					
					1:
						Escribir " Para calcular el area del octaedro ingrese el siguiente dato" 
						Escribir " Nota: Solo se permite un valor mayor que 0"
						ar = 0
						Mientras (ar <= 0) Hacer
							Escribir " Ingrese el valor del arista o lados"
							Leer ar
						FinMientras
						A = 2*ar^2*raiz(3)
						Escribir " ar = " ar "  "
						Escribir " A = " A "  "
						
						
					2:
						Escribir " Para calcular el volumen del hexaedro ingrese el siguiente dato" 
						Escribir " Nota: Solo se permite un valor mayor que 0"
						ar = 0
						Mientras (ar <= 0) Hacer
							Escribir " Ingrese el valor del arista o lado"
							Leer ar
						FinMientras
						V = (raiz(2)/3)*ar^3
						Escribir " ar = " ar "  "
						Escribir " V = " V " "
						// La relación de euler: c + v = a + 2
						//  caras + vertices = aristas + 2
					De Otro Modo:
						Escribir " No es opcion válida "
						
				Fin Segun
			7:
				
				
				
				Escribir "MENU DE OPCIONES DEL ORTOEDRO";
				Escribir "1- calculo de la diagonal del ortoedro";
				Escribir "2- calculo del volumen del ortoedro";
				Escribir "3- Calculo del area del ortoedro"
				Escribir "Ingrese una opcion";
				Leer op;	
				
				Segun op Hacer
					1:
						Repetir
							Escribir " Para calcular la diagonal del ortoedro ingrese los siguientes datos" 
							Escribir " Ingrese el valor del lado mayor "
							Leer A
							Escribir " Ingrese el valor del lado menor "
							Leer b
							Escribir " ingrese el valor de la altura "
							Leer c	
							
							si (A > 0) y (b > 0) y (c > 0) Entonces
								// Fórmulas de la diagonal del  ortoedro
								D = raiz(A^2+b^2+c^2)
								Escribir " A = " A "  "
								Escribir " b = " b "  "
								Escribir " c = " c " "
								Escribir"Resultado de la diagonal"
								Escribir " D = " D " "
							Sino
								Escribir "Usted a ingresado valores incorrectos"
							FinSi
						Hasta Que D > 0
					2:
						Repetir
							Escribir " Para calcular el volumen del ortoedro ingrese los siguientes datos" 
							Escribir " Ingrese el valor del lado mayor "
							Leer A
							Escribir " Ingrese el valor del lado menor "
							Leer b
							Escribir " ingrese el valor de la altura "
							Leer c	
							si (A > 0) y (b > 0) y (c > 0) Entonces
								// Fórmulas del volumen del ortoedro
								V = A*b*c
								Escribir " A = " A "  "
								Escribir " b = " b "  "
								Escribir " c = " c " "
								Escribir "Resultado del volumen"
								Escribir " V = " V " "
							Sino
								Escribir "Usted a ingresado valores incorrectos"
							FinSi
						Hasta Que V > 0
						
					3:
						Repetir
							Escribir " Para calcular el area ingrese los siguientes datos" 
							Escribir " Ingrese el valor del lado mayor "
							Leer A
							Escribir " Ingrese el valor del lado menor "
							Leer b
							Escribir " ingrese el valor de la altura "
							Leer c	
							si (A > 0) y (b > 0) y (c > 0) Entonces
								// Fórmulas del area del ortoedro
								Area = 2*(A*b+A*c+b*c)
								Escribir " A = " A "  "
								Escribir " b = " b "  "
								Escribir " c = " c " "
								Escribir " Resultado del area "
								Escribir " Area = " Area " "
							Sino
								Escribir "Usted a ingresado valores incorrectos"
							FinSi
						Hasta Que A > 0
						
					De Otro Modo:
						Escribir " No es opcion válida"
						
				Fin Segun
			8:
				
				
				Escribir "MENU DE OPCIONES DEL PRISMA PENTAGONAL";
				Escribir "1- calculo del area lateral del prisma";
				Escribir "2- calculo del area total del prisma";
				Escribir "3- Calculo del volumen del prisma"
				Escribir "Ingrese una opcion";
				Leer op;
				
				Segun op Hacer
					
					1:
						Repetir
							Escribir " Para calcular el area lateral de un prisma pentagonal ingrese los siguientes datos" 
							Escribir " Ingrese el valor del perimetro de la base "
							Leer Pb
							Escribir " Ingrese el valor de la altura "
							Leer h
							
							
							Si (Pb > 0) y ( h > 0)  Entonces
								// Fórmula del área lateral del prisma
								AL = Pb * h
								Escribir " Pb = " Pb "  "
								Escribir " h = " h "  "
								Escribir "AL = " AL "  "
								
							Sino
								Escribir "Usted a ingresado valores incorrectos"
								
							FinSi
						Hasta Que AL > 0 
					2:
						Repetir
							
							Escribir " Para calcular el area total de un prisma pentagonal ingrese los siguientes datos" 
							Escribir " Ingrese el valor del area lateral "
							Leer AL
							Escribir " Ingrese el valor del area base "
							Leer Ab
							
							si (AL > 0) y (	Ab > 0) Entonces
								// Fórmula del área total del prisma
								At = AL + (2*Ab)
								Escribir " AL = " AL "  "
								Escribir " Ab = " Ab "  "
								Escribir "At = " At "  "
							Sino
								Escribir "Usted a ingresado valores incorrectos"
								
							FinSi
							
						Hasta Que At > 0
					3:
						Repetir
							
							Escribir " Para calcular el volumen de un prisma pentagonal ingrese los siguientes datos" 
							Escribir " Ingrese el valor del area de la base "
							Leer Ab
							Escribir " Ingrese el valor de la altura "
							Leer h
							
							si (Ab > 0) y (	h > 0) Entonces
								// Fórmula del volumen del prisma
								V = Ab * h
								Escribir " Ab = " Ab "  "
								Escribir " h = " h "  "
								Escribir "V = " V "  "
								
							Sino
								Escribir "Usted a ingresado valores incorrectos"
							FinSi
							
						Hasta Que V > 0
						
					De Otro Modo:
						Escribir " No es opcion válida"
						
				Fin Segun
			9:
				
				
				Escribir "MENU DE OPCIONES DEL TETRAEDRO";
				Escribir "1- calculo del area del tetraedro";
				Escribir "2- calculo de la altura del tetraedro";
				Escribir "3- Calculo del volumen del tetraedro"
				Escribir "Ingrese una opcion";
				Leer op;
				
				Segun op Hacer
					
					1:
						Escribir " Para calcular el area del tetraedro ingrese el siguiente dato" 
						Escribir " Nota: Solo se permite un valor mayor que 0"
						ar = 0
						Mientras (ar <= 0) Hacer
							Escribir " Ingrese el valor del arista o lados"
							Leer ar
						FinMientras
						A = ar^2*(raiz(3))
						Escribir " ar = " ar "  "
						Escribir " A = " A "  "
						
					2:
						Escribir " Para calcular la altura del tetraedro ingrese el siguiente dato" 
						Escribir " Nota: Solo se permite un valor mayor que 0"
						ar = 0
						Mientras (ar <= 0) Hacer
							Escribir " Ingrese el valor del arista o lados"
							Leer ar
						FinMientras
						h = ar*(raiz(6)/3)
						Escribir " ar = " ar "  "
						Escribir " h = " h " "
						
					3:
						Escribir " Para calcular el volumen del tetraedro ingrese el siguiente dato" 
						Escribir " Nota: Solo se permite un valor mayor que 0"
						ar = 0
						Mientras (ar <= 0) Hacer
							Escribir " Ingrese el valor del arista o lado"
							Leer ar
						FinMientras
						V = (raiz(2)/12)*ar^3
						Escribir " ar = " ar "  "
						Escribir " V = " V " "
						// La relación de euler: c + v = a + 2
						//  caras + vertices = aristas + 2
					De Otro Modo:
						Escribir " No es opcion válida "
						
				Fin Segun
			10:
				
				
				Escribir "MENU DE OPCIONES DE LA ESFERA";
				Escribir "1- calculo del volumen de la esfera respecto al del cilindro";
				Escribir "2- calculo del area de una esfera";
				Escribir "3- Calculo del volumen de una esfera"
				Escribir "4-Calculo del area de la zona esférica "
				Escribir "5-Calculo del area del casquete esferico"
				Escribir "6-Calculo del volumen de la zona esferica"
				Escribir "7-Calculo del volumen del casquete esferico"
				Escribir "8-Calculo del area del huso esferico"
				Escribir "9-Calculo del volumen de la cuña esferica" 
				Escribir "Ingrese una opcion";
				Leer op;
				
				Segun op Hacer
					1:
						Repetir
							Escribir " Para calcular el volumen de la esfera respecto al cilindro ingrese los siguientes datos" 
							Escribir " Ingrese el valor del volumen del cilindro"
							Leer Vc
							
							si (Vc > 0) Entonces
								// Fórmula para el volumen de la eafera respecto al cilindro
								V = (2/3)*Vc
								Escribir " Vc = " Vc "  "
								Escribir " V = " v "  "
								
							Sino
								Escribir "Usted a ingresado valores incorrectos"
							FinSi
						Hasta Que V > 0
						
					2:
						Repetir
							Escribir " Para calcular el area de una esfera ingrese los siguientes datos" 
							Escribir " Ingrese el valor del radio"
							Leer r
							
							si (r > 0) Entonces
								// Fórmula del area de una esfera
								At = 4*PI*(r^2)
								Escribir " r = " r "  "
								Escribir " At = " At "  "
								
							Sino
								Escribir "Usted a ingresado un valor incorrecto"
							FinSi
						Hasta Que At > 0
						
					3:
						Repetir
							Escribir " Para calcular el volumen de una esfera ingrese los siguientes datos" 
							Escribir " Ingrese el valor del radio"
							Leer r
							
							si (r > 0) Entonces
								// Fórmula para el volumen de una esfera
								V = (4/3)*PI*r^3
								Escribir " r = " r "  "
								Escribir " V = " V " "
								
							Sino
								Escribir "Usted a ingresado un valor incorrecto"
							FinSi
						Hasta Que V > 0
						
					4:
						Repetir
							Escribir " Para calcular el area de la zona esferica de la esfera ingrese los siguientes datos" 
							Escribir " Ingrese el valor del Radio mayor"
							Leer Rm
							Escribir " Ingrese el valor de la altura"
							Leer h
							
							si (Rm > 0) y (h > 0) Entonces
								// Fórmula para el area de la zona esferica de la esfera
								At = 2*PI*Rm*h
								Escribir " Rm = " Rm "  "
								Escribir " h = " h "  "
								Escribir " At = " At " "
								
							Sino
								Escribir "Usted a ingresado valores incorrectos"
							FinSi
						Hasta Que At > 0
						
					5:
						Repetir
							Escribir " Para calcular el area del casqueta esferico de la esfera ingrese los siguientes datos" 
							Escribir " Ingrese el valor del Radio mayor"
							Leer Rm
							Escribir " Ingrese el valor de la altura"
							Leer h
							
							si (Rm > 0) y (h > 0) Entonces
								// Fórmula para el area del casquete esferico de la esfera
								At = 2*PI*Rm*h
								Escribir " Rm = " Rm "  "
								Escribir " h = " h "  "
								Escribir " At = " At " "
								
							Sino
								Escribir "Usted a ingresado valores incorrectos"
							FinSi
						Hasta Que At > 0
						
					6:
						Repetir
							Escribir " Para calcular el volumen de la zona esferica de la esfera ingrese los siguientes datos" 
							Escribir " Ingrese el valor del radio"
							Leer r
							Escribir " Ingrese el valor de la altura"
							Leer h
							
							si (h > 0) y (r > 0) Entonces
								// Fórmula para el volumen de la zona esferica de la esfera
								V = ((PI*h*(h^2+3*r^2+3*r^2)))/6
								Escribir " h = " h "  "
								Escribir " r = " r "  "
								Escribir " V = " V " "
								
							Sino
								Escribir "Usted a ingresado valores incorrectos"
							FinSi
						Hasta Que V > 0
						
					7:
						Repetir
							Escribir " Para calcular el volumen del casquete esferico de la esfera ingrese los siguientes datos" 
							Escribir " Ingrese el valor del radio"
							Leer r
							Escribir " Ingrese el valor de la altura"
							Leer h
							
							si (h > 0) y ( r > 0 ) Entonces
								// Fórmula para el volumen de la zona esferica de la esfera
								V = ((PI*h^2*(3*r-h)))/3
								Escribir " h = " h "  "
								Escribir " r = " r "  "
								Escribir " V = " V " "
								
							Sino
								Escribir "Usted a ingresado un valor incorrecto"
							FinSi
						Hasta Que V > 0
						
					8:
						Repetir
							Escribir "Para calcular el area del uso esferico ingrese los siguientes datos" 
							Escribir " Ingrese el valor del radio"
							Leer r
							Escribir " Ingrese el valor del numero de grados"
							Leer ng
							
							si (r > 0) y (ng > 0) Entonces
								// Fórmula del area de la cuña esferica 
								At = (4*PI*r^2*ng)/360
								Escribir " r = " r "  "
								Escribir " ng = " ng " "
								Escribir " At = " At "  "
								
							Sino
								Escribir "Usted a ingresado valores incorrectos"
							FinSi
						Hasta Que At > 0
						
					9:
						Repetir
							Escribir "Para calcular del volumen de la cuña esferica ingrese los siguientes datos" 
							Escribir " Ingrese el valor del radio"
							Leer r
							Escribir " Ingrese el valor del numero de grados"
							Leer ng
							
							si (r > 0) y (ng > 0) Entonces
								// Fórmula del volumen de la cuña esferica 
								V = (4/3)*((PI*r^3*ng)/360)
								Escribir " r = " r "  "
								Escribir " ng = " ng " "
								Escribir " V = " V "  "
							Sino
								Escribir "Usted a ingresado valores incorrectos"
							FinSi
						Hasta Que V > 0
						
					De Otro Modo:
						Escribir " No es opcion válida"
				Fin Segun
			11:
				
				
				Escribir "MENU DE OPCIONES DE LA PIRAMIDE";
				Escribir "1- calculo del area lateral de la piramide";
				Escribir "2- calculo del apotema de la piramide";
				Escribir "3- Calculo del area total de la piramide"
				Escribir "4-Calculo del volumen de la piramide"
				Escribir "Ingrese una opcion";
				Leer op;
				
				Segun op Hacer
					
					1:
						
						Repetir
							
							Escribir " Para calcular el area lateral de una piramide ingrese los siguientes datos" 
							Escribir " Ingrese el valor del perimetro de la base "
							Leer Pb
							Escribir " Ingrese el valor del apotema "
							Leer Ap
							
							Si (Pb > 0) y ( Ap > 0 ) Entonces
								// Fórmula del area lateral de una piramide
								AL = (Pb*Ap)/2
								Escribir " Pb = " Pb "  "
								Escribir " Ap = " Ap "  "
								Escribir " AL = " AL " "
							Sino
								Escribir "Usted a ingresado valores incorrectos"
								
							FinSi
						Hasta Que AL > 0
						
						
					2:
						Repetir
							
							Escribir " Para calcular el apotema de una piramide ingrese los siguientes datos" 
							Escribir " Ingrese el valor del area de la base "
							Leer Ab
							Escribir " Ingrese el valor de la altura "
							Leer h
							
							si (Ab > 0) y (h > 0) Entonces
								// Fórmula del apotema de una piramide
								Ap = raiz(h^2+Ab^2)
								Escribir " Ab = " Ab "  "
								Escribir " h = " h "  "
								Escribir " Ap = " Ap " "
								
							Sino
								Escribir "Usted a ingresado valores incorrectos"
							FinSi
						Hasta Que Ap > 0
						
					3:
						Repetir
							
							Escribir " Para calcular el area total de una piramide ingrese los siguientes datos" 
							Escribir " Ingrese el valor del area lateral"
							Leer AL
							Escribir " Ingrese el valor del area de la base "
							Leer Ab
							
							si (AL > 0) y (Ab > 0) Entonces
								// Fórmula del area total de una piramide
								At = AL+Ab
								Escribir " AL = " AL "  "
								Escribir " Ab = " Ab "  "
								Escribir " At = " At " "
								
							Sino
								Escribir "Usted a ingresado valores incorrectos"
							FinSi
						Hasta Que At > 0
					4:
						Repetir
							
							Escribir " Para calcular el volumen de una piramide ingrese los siguientes datos" 
							Escribir " Ingrese el valor del area de la base"
							Leer Ab
							Escribir " Ingrese el valor de la altura "
							Leer h
							
							si (Ab > 0) y ( h > 0 ) Entonces
								// Fórmula del volumen de una piramide
								V = (Ab*h)/3
								Escribir " Ab = " Ab "  "
								Escribir " h = " h "  "
								Escribir " V = " V " "
								
							Sino
								Escribir "Usted a ingresado un valor incorrecto"
							FinSi
							
						Hasta Que V > 0
						
					De Otro Modo:
						Escribir " No es opcion válida"
						
				Fin Segun
			12:
				
				
				Escribir "MENU DE OPCIONES DEL TRONCO DE UN CONO";
				Escribir "1- calculo del area lateral del tronco del cono ";
				Escribir "2- calculo del area total del tronco del cono";
				Escribir "3- Calculo del volumen del tronco de un cono"
				Escribir "Ingrese una opcion";
				Leer op;
				
				Segun op Hacer
					1:
						Escribir " Para calcular el area lateral del tronco de un cono ingrese los siguientes datos"
						Escribir " Nota: Solo se permiten valores mayores que 0"
						g = 0
						Mientras (g <= 0) Hacer
							Escribir " Ingrese el valor de la generatriz"
							Leer g
						FinMientras
						
						r = 0
						Mientras (r <= 0) Hacer
							Escribir " Ingrese el valor del radio "
							Leer r
						FinMientras
						
						
						Rmy = 0
						Mientras (Rmy <= 0) Hacer
							Escribir " Ingrese el valor del radio mayor "
							Leer Rmy
						FinMientras
						
						
						// Fórmula del área lateral del tronco de un cono
						AL = PI*g*(Rmy+r)
						Escribir " g = " g "  "
						Escribir " r = " r "  "
						Escribir " Rmy = " Rmy " "
						Escribir "AL = " AL "  "
						
						
					2:
						Escribir "Para calcular el area total del tronco de un cono ingrese los siguientes datos" 
						Escribir " Nota: Solo se permiten valores mayores que 0"
						
						AL = 0
						Mientras (AL <= 0) Hacer
							Escribir " Ingrese el valor del area lateral"
							Leer AL
						FinMientras
						
						Ab = 0
						Mientras (Ab <= 0) Hacer
							Escribir " Ingrese el valor del area de la base mayor"
							Leer Ab
						FinMientras
						
						Abm = 0
						Mientras (Abm <= 0) Hacer
							Escribir " Ingrese el valoR de la base menor "
							Leer Abm
						FinMientras
						
						// Fórmula del área total del tronco de un cono
						At = AL+Ab+Abm
						Escribir " AL = " AL "  "
						Escribir " Ab = " Ab "  "
						Escribir " Abm = " Abm " "
						Escribir "At = " At "  "
						
					3:	
						Escribir "Para calcular el volumen del tronco de un cono ingrese los siguientes datos" 
						Escribir " Nota: Solo se permiten valores mayores que 0"
						
						h = 0
						Mientras (h <= 0) Hacer
							Escribir " Ingrese el valor de la altura"
							Leer h
						Fin Mientras
						
						Rmy = 0
						Mientras (Rmy <= 0) Hacer
							Escribir " Ingrese el valor del radio mayor"
							Leer Rmy
						Fin Mientras
						
						rmn = 0
						Mientras (rmn <= 0) Hacer
							Escribir " Ingrese el valor del radio menor "
							Leer rmn
						Fin Mientras
						
						
						// Fórmula del volumen del tronco de un cono
						V = (1/3)*PI*h*(Rmy^2+rmn^2+(Rmy*rmn))
						Escribir " h = " h "  "
						Escribir " Rmy = " Rmy "  "
						Escribir " rmn = " rmn " "
						Escribir " V = " V "  "
						
					De Otro Modo:
						Escribir " No es opcion válida "
						
				Fin Segun
			13:
				
				
				Escribir "MENU DE OPCIONES DEL TRONCO DE UNA PIRAMIDE";
				Escribir "1- calculo del area lateral del tronco de la piramide ";
				Escribir "2- calculo del area total del tronco de la piramide";
				Escribir "3- Calculo del volumen del tronco de la priramide"
				Escribir "Ingrese una opcion";
				Leer op;
				
				Segun op Hacer
					1:
						
						Escribir "Para calcular el area lateral del tronco de una piramide ingrese los siguientes datos" 
						Escribir " Nota: Solo se permiten valores mayores que 0"
						Pb = 0
						Mientras (Pb <= 0) Hacer
							Escribir " Ingrese el valor del perimetro de la base mayor"
							Leer Pb
						FinMientras
						
						Escribir " Nota: Solo se permiten valores mayores que 0"
						Pbm = 0
						Mientras (Pbm <= 0) Hacer
							Escribir " Ingrese el valor del perimetro de la base menor"
							Leer Pbm
						FinMientras
						
						
						Escribir " Nota: Solo se permiten valores mayores que 0"
						Ap = 0
						Mientras (Ap <= 0) Hacer
							Escribir " Ingrese el valor del apotema "
							Leer Ap
						FinMientras
						
						// Fórmula del area lateral del tronco de una piramide
						AL = ((Pb+pbm)/2)*Ap
						Escribir " Pb = " Pb "  "
						Escribir " Pbm = " Pbm "  "
						Escribir " Ap = " Ap " "
						Escribir " AL = " AL "  "
						
					2:
						
						Escribir "Para calcular el area total del tronco de una piramide ingrese los siguientes datos" 
						Escribir " Nota: Solo se permiten valores mayores que 0"
						AL = 0
						Mientras (AL <= 0) Hacer
							Escribir " Ingrese el valor del area lateral"
							Leer AL
						FinMientras
						
						Escribir " Nota: Solo se permiten valores mayores que 0"
						Ab = 0
						Mientras (Ab <= 0) Hacer
							Escribir " Ingrese el valor del area de la base mayor"
							Leer Ab
						FinMientras
						
						Escribir " Nota: Solo se permiten valores mayores que 0"
						Abm = 0
						Mientras (Abm <= 0) Hacer
							Escribir " Ingrese el valor del area de la base menor "
							Leer Abm
						FinMientras
						
						// Fórmula del area total del tronco de una piramide
						At = AL+Ab+Abm
						Escribir " AL = " AL "  "
						Escribir " Ab = " Ab "  "
						Escribir " Abm = " Abm " "
						Escribir " At = " At "  "
						
					3:
						
						Escribir "Para calcular el volumen del tronco de una piramide ingrese los siguientes datos" 
						Escribir " Nota: Solo se permiten valores mayores que 0"
						h = 0
						Mientras (h <= 0) Hacer
							Escribir " Ingrese el valor de la altura"
							Leer h
						FinMientras
						
						Escribir " Nota: Solo se permiten valores mayores que 0"
						Ab = 0
						Mientras (Ab <= 0) Hacer
							Escribir " Ingrese el valor del area de la base mayor"
							Leer Ab
						FinMientras
						
						Escribir " Nota: Solo se permiten valores mayores que 0"
						Abm = 0
						Mientras (Abm <= 0) Hacer
							Escribir " Ingrese el valor del area de la base menor "
							Leer Abm
						FinMientras
						
						// Fórmula del volumen del tronco de una piramide
						V =(1/3)*h*(Ab+Abm + raiz(Ab*Abm))
						Escribir " h = " h "  "
						Escribir " Ab = " Ab "  "
						Escribir " Abm = " Abm " "
						Escribir " V = " V "  "
						
					De Otro Modo:
						Escribir " No es opcion válida "
						
				Fin Segun
			14:
				Escribir "Usted ha finalizado exitosamente"
				
			De Otro Modo:
				Escribir " NO ES OPCION VALIDA "
		FinSegun
		Escribir "<<PRESIONE UNA TECLA PARA CONTINUAR>>"
			Esperar Tecla
		Hasta Que num=14

FinAlgoritmo

