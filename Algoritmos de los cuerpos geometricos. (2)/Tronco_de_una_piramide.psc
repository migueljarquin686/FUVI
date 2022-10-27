Algoritmo EL_Tronco_de_una_piramide
	Definir AL,PB,Pbm,Ap,At,AB,Abm,V,h Como Real
	
	Escribir "Menu de opciones del tronco de una piramide";
	Escribir "1- calculo del area lateral del tronco de la piramide ";
	Escribir "2- calculo del area total del tronco de la piramide";
	Escribir "3- Calculo del volumen del tronco de la priramide"
	Escribir "Ingrese una opcion";
	Leer op;
	
	Segun op Hacer
		1:
			
			Escribir "Para calcular el area lateral del tronco de una piramide ingrese los siguientes datos" 
			Escribir " Nota: Solo se permiten valores mayores que 0"
			PB = 0
			Mientras (PB <= 0) Hacer
				Escribir " Ingrese el valor del perimetro de la base mayor"
				Leer PB
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
			AL = ((PB+pbm)/2)*Ap
			Escribir " PB = " PB "  "
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
			AB = 0
			Mientras (AB <= 0) Hacer
				Escribir " Ingrese el valor del area de la base mayor"
				Leer AB
			FinMientras
			
			Escribir " Nota: Solo se permiten valores mayores que 0"
			Abm = 0
			Mientras (Abm <= 0) Hacer
				Escribir " Ingrese el valor del area de la base menor "
				Leer Abm
			FinMientras
			
			// Fórmula del area total del tronco de una piramide
			At = AL+AB+Abm
			Escribir " AL = " AL "  "
			Escribir " AB = " AB "  "
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
			AB = 0
			Mientras (AB <= 0) Hacer
				Escribir " Ingrese el valor del area de la base mayor"
				Leer AB
			FinMientras
			
			Escribir " Nota: Solo se permiten valores mayores que 0"
			Abm = 0
			Mientras (Abm <= 0) Hacer
				Escribir " Ingrese el valor del area de la base menor "
				Leer Abm
			FinMientras
			
			// Fórmula del volumen del tronco de una piramide
			V =(1/3)*h*(AB+Abm + raiz(AB*Abm))
			Escribir " h = " h "  "
			Escribir " AB = " AB "  "
			Escribir " Abm = " Abm " "
			Escribir " V = " V "  "
			
		De Otro Modo:
			Escribir " No es opcion válida "
			
	Fin Segun
	
	Escribir " Muchas gracias por preferirnos "
FinAlgoritmo
