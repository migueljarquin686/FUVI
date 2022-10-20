Algoritmo El_Cono
	Definir V,Vcilindro,AL,Pb,g,r,h,At,Ab Como Real
	
	Escribir "Menu de opciones del cono";
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
	
	Escribir " Muchas gracias por preferirnos "
FinAlgoritmo
