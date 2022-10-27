Algoritmo La_Piramide
	Definir AL,Pb,Ap,Ab,h,At,V Como Real
	
	Escribir "Menu de opciones de la piramide";
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
	
	Escribir " Muchas gracias por preferirnos "
FinAlgoritmo
