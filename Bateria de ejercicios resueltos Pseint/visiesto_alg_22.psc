Algoritmo visiesto_alg
//22. Algoritmo que, dado un a�o, nos diga si es bisiesto o no. Un a�o es bisiesto
//bajo las siguientes condiciones:
//Un a�o divisible por 4 es bisiesto y no debe ser divisible entre 100.
// Si un a�o es divisible entre 100 y adem�s es divisible entre 400, tambi�n
//resulta bisiesto.
	//NOTA: este ejercicio tiene muchas formas de hacerlo.
		Definir numx Como Entero
		Escribir "ESTE ALGORITMO NOS DICE SI UN A�O ES BISIESTO"
	Escribir "Ingrese el a�o que desea conocer"
	leer numx
	
	si numx mod 4 == 0 Entonces
		Escribir "el a�o es visiesto"
		
	sino
		Escribir "El a�o no es visieto"
	FinSi
	
	Escribir "*********************"
	Escribir "Es un placer servirle"
FinAlgoritmo
