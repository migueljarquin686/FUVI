Algoritmo La_Esfera
	Definir V,Vc,A,r,Rm,h,ng Como Real
	
	Escribir "Menu de opciones de la esfera, seleccione un numero";
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
					A = 4*PI*(r^2)
					Escribir " r = " r "  "
					Escribir " A = " A "  "
					
				Sino
					Escribir "Usted a ingresado un valor incorrecto"
				FinSi
			Hasta Que A > 0
			
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
					A = 2*PI*Rm*h
					Escribir " Rm = " Rm "  "
					Escribir " h = " h "  "
					Escribir " A = " A " "
					
				Sino
					Escribir "Usted a ingresado valores incorrectos"
				FinSi
			Hasta Que A > 0
			
		5:
			Repetir
				Escribir " Para calcular el area del casqueta esferico de la esfera ingrese los siguientes datos" 
				Escribir " Ingrese el valor del Radio mayor"
				Leer Rm
				Escribir " Ingrese el valor de la altura"
				Leer h
				
				si (Rm > 0) y (h > 0) Entonces
					// Fórmula para el area del casquete esferico de la esfera
					A = 2*PI*Rm*h
					Escribir " Rm = " Rm "  "
					Escribir " h = " h "  "
					Escribir " A = " A " "
					
				Sino
					Escribir "Usted a ingresado valores incorrectos"
				FinSi
			Hasta Que A > 0
			
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
					A = (4*PI*r^2*ng)/360
					Escribir " r = " r "  "
					Escribir " ng = " ng " "
					Escribir " A = " A "  "
					
				Sino
					Escribir "Usted a ingresado valores incorrectos"
				FinSi
			Hasta Que A > 0
			
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
	Escribir " Muchas gracias por preferirnos "
FinAlgoritmo
