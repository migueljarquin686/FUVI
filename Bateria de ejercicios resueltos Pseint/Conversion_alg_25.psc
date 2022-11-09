Algoritmo conversion_alg
//25. Crear un algoritmo que convierta de °C a °F o viceversa una temperatura
//ingresada por el usuario. De antemano, se le debe preguntar al usuario de
//qué sistema a qué sistema desea convertir.
	Definir C,F Como Real
	Escribir "ESTE ALGORITMO TE PERMITE REALIZAR CONVERSIONES CON FAHRENHEIT Y CELCIUS."
	Escribir "******************************************"
	Escribir "Menu de opciones de conversión"
	Escribir "1-calculo de grados celcius a grados Fahrenheit"
	Escribir "2-calculo de grados Fahrenheit a grados celcius"
	Escribir "ingrese una opcion:"
	Leer opc
	
	Segun opc Hacer
		
		1:
	Escribir "escribe los grados celcius"
	leer C
	
	F = (C*(9/5)) + 32
	
	Escribir "Los grados Celcius convertidos a Fahrenheit son:",F
	
	2:
	Escribir "escribe los grados Fahrenheit"
	leer F
	
	C = (F-32)*(5/9)
	
	Escribir "Los grados Fahrenheit convertidos a celsius son:",C
De Otro Modo:
	Escribir " No es opcion válida"
FinSegun

Escribir "Es un placer servirle"
FinAlgoritmo
