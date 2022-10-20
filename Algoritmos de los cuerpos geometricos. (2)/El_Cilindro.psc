Algoritmo El_Cilindro
	Definir AL,h,r,At,V Como Real
	
	Escribir "Menu de opciones del Cilindro";
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
	Escribir " Muchas gracias por preferirnos "
FinAlgoritmo
