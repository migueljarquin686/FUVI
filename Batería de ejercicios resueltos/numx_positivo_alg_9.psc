Algoritmo numx_positivo_alg
	Definir numx Como Real
	
	Repetir
		
		Escribir " Ingrese su numx"
		Leer numx
		
		si numx > 0 Entonces
			escribir"el numero es aceptable: " numx " "
		FinSi
		
		Mientras  Que numx = 0
	
	si (numx >= 1) Entonces
		
		si (numx mod 2 = 0)Entonces
			escribir "Es un numero par"
		FinSi
		
		si (numx mod 2 > 0)Entonces
			escribir"Es un numero impar"
		FinSi
		
	FinSi
	
	Escribir "Es un placer servirle"
FinAlgoritmo
