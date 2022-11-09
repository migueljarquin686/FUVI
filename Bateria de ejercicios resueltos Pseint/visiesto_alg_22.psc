Algoritmo visiesto_alg
//22. Algoritmo que, dado un año, nos diga si es bisiesto o no. Un año es bisiesto
//bajo las siguientes condiciones:
//Un año divisible por 4 es bisiesto y no debe ser divisible entre 100.
// Si un año es divisible entre 100 y además es divisible entre 400, también
//resulta bisiesto.
	//NOTA: este ejercicio tiene muchas formas de hacerlo.
		Definir numx Como Entero
		Escribir "ESTE ALGORITMO NOS DICE SI UN AÑO ES BISIESTO"
	Escribir "Ingrese el año que desea conocer"
	leer numx
	
	si numx mod 4 == 0 Entonces
		Escribir "el año es visiesto"
		
	sino
		Escribir "El año no es visieto"
	FinSi
	
	Escribir "*********************"
	Escribir "Es un placer servirle"
FinAlgoritmo
