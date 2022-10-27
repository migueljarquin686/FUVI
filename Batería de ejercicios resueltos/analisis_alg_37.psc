Algoritmo analisis_alg
	Definir n, i Como Entero
	Imprimir "Ingrese un número"
	Leer n
	i <- 0
	mientras (n > 1) 
		si ((n % 2) == 0)
			n <- n / 2
			
		SiNo
			n <- n * 3 + 1
			i <- i + 1
			Escribir i
		finsi	
	FinMientras
	  Esperar tecla
	Escribir "¿Cuándo se detiene este algoritmo?"
	Escribir "R= El algoritmo se detiene cuando el numero procesado es igual a 1"
	Escribir ""
	Escribir "¿Para qué sirve la variable i?"
	Escribir "R= Sirve para contar las veces en que el numero es procesado en la condicion sino"
	Escribir ""
	Escribir "¿Se debe recibir alguna entrada del usuario?"
	Escribir "R= Si cuando esta iniciando le pide un numero n"
	Escribir ""
	Escribir "¿Qué resultado entrega el algoritmo?"
	Escribir "R= Con la variable i impresa entrega una serie de numeros del 1 hasta la cantidad de veces que un numero impar paso por alli, como un contador"
	Escribir ""
	Escribir " Suponga que el usuario ingresa el número 3, ¿Qué resultado entrega el algoritmo?"
	Escribir "R= entrega como resultado un 1 y un 2, lo que significa que va aumentando de 1 en 1 hasta que ya no queden numeros impares y n=1"
	Escribir ""
	Escribir "Es un placer servirle"
FinAlgoritmo
