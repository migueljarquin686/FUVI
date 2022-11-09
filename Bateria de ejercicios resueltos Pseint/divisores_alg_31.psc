Algoritmo divisores_alg
	//31. Dado un número entero n, encuentre sus divisores.
	Definir n,x Como Entero
	Escribir "ESTE ALGORITMO TE MUESTRA LOS DIVISORES DE UN NUMERO INGRESADO"
	Escribir "*********************************************"
	Escribir "Ingresa un numero"
	Leer n
	x = 1
	Mientras  x<= n Hacer
		si n mod x==0 Entonces
			Escribir "El numero ",n," es divisible entre ",x
		FinSi
		x = x + 1
	FinMientras
	Escribir "Es un placer servirle"
FinAlgoritmo
