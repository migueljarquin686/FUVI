Algoritmo El_Prisma_Pentagonal
	Definir AL, Pb,h,Ab,At,V Como Real
	
	Escribir "Menu de opciones del prisma";
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
	
	Escribir " Muchas gracias por preferirnos "
FinAlgoritmo
