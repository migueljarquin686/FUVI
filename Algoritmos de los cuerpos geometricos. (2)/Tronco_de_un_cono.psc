Algoritmo Tronco_de_un_cono
	Definir AL,g,r,At,AB,Abm,V,h,Rmy,rmn Como Real
	
	Escribir "Menu de opciones del tronco de un cono";
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
			Escribir "Para calcular el area total del tronco de un conoingrese los siguientes datos" 
			Escribir " Nota: Solo se permiten valores mayores que 0"
			
			AL = 0
			Mientras (AL <= 0) Hacer
				Escribir " Ingrese el valor del area lateral"
				Leer AL
			FinMientras
			
			AB = 0
			Mientras (AB <= 0) Hacer
				Escribir " Ingrese el valor del area de la base mayor"
				Leer AB
			FinMientras
			
			Abm = 0
			Mientras (Abm <= 0) Hacer
				Escribir " Ingrese el valoR de la base menor "
				Leer Abm
			FinMientras
			
			// Fórmula del área total del tronco de un cono
			At = AL+AB+Abm
			Escribir " AL = " AL "  "
			Escribir " AB = " AB "  "
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
	Escribir " Muchas gracias por preferirnos "
FinAlgoritmo
