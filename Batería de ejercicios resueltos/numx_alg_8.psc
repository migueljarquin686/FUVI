Algoritmo numx_alg
	
	Definir numx Como Real
	Escribir " Ingrese su numx"
	Leer numx
	
	si (numx = 0) Entonces
		Escribir " El numero no es par ni impar"
	FinSi
	
	si (numx >= 1) Entonces
		
		si (numx mod 2 = 0)Entonces
			escribir "Escribir es un numero par"
		FinSi
		
		si (numx mod 2 > 0)Entonces
			escribir"Es un numero impar"
		FinSi
	
	FinSi
	
	Escribir "Es un placer servirle"
FinAlgoritmo
