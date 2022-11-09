Algoritmo numx_alg
	//8. Realizar un algoritmo que, dado un número entero, visualice en pantalla si
	//es par o impar. En el caso de ser 0, debe visualizar "el número no es par ni
	//impar".
	Definir numx Como Real
	Escribir "ESTE ALGORITMO TE DICE SI UN NUMERO ES PAR O IMPAR"
	Escribir " Ingrese su numx"
	Leer numx
	
	si (numx = 0) Entonces
		Escribir " El numero no es par ni impar"
	FinSi
	
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
