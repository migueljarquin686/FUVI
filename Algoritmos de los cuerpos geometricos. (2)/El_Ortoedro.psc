Algoritmo El_Ortoedro
	Definir D, V, Area, a, b, c Como Real
	
	
	Escribir "Menu de opciones del Ortoedro";
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
				Leer a
				Escribir " Ingrese el valor del lado menor "
				Leer b
				Escribir " ingrese el valor de la altura "
				Leer c	
				
				si (a > 0) y (b > 0) y (c > 0) Entonces
					// Fórmulas de la diagonal del  ortoedro
					D = raiz(a^2+b^2+c^2)
					Escribir " a = " a "  "
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
				Leer a
				Escribir " Ingrese el valor del lado menor "
				Leer b
				Escribir " ingrese el valor de la altura "
				Leer c	
				si (a > 0) y (b > 0) y (c > 0) Entonces
					// Fórmulas del volumen del ortoedro
					V = a*b*c
					Escribir " a = " a "  "
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
				Leer a
				Escribir " Ingrese el valor del lado menor "
				Leer b
				Escribir " ingrese el valor de la altura "
				Leer c	
				si (a > 0) y (b > 0) y (c > 0) Entonces
					// Fórmulas del area del ortoedro
					Area = 2*(a*b+a*c+b*c)
					Escribir " a = " a "  "
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
	
	Escribir " Muchas gracias por preferirnos "
FinAlgoritmo
