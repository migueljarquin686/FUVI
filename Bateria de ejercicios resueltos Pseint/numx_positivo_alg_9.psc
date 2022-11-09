Algoritmo numx_positivo_alg
	//9. Modificar el algoritmo anterior, de forma que,si se teclea un cero, se vuelva
	//a pedir el número por teclado (así hasta que se teclee un número mayor
	//que cero).
	Definir numx Como Real
	Escribir "ESTE ALGORITMO ESTA BASADO EN EL ALGORITMO 8 CON UNA MODIFICACION"
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
