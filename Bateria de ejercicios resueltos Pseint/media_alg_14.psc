Algoritmo media_alg_14
//14. Dada una secuencia de números leídos por teclado, que acabe con un -1,
//por ejemplo: 5,3,0,2,4,4,0,0,2,3,6,0,??,-1; Realizar el algoritmo que calcule
//la media aritmética. Suponemos que el usuario no insertará número
//negativos.
	Definir m,c,suma Como Entero
	m = 1
	suma = 0
	c = 0
	Escribir "ESTE PROGRAMA TE CALCULA LA MEDIA ARITMETICA DE UNA SERIE DE NUMEROS INGRESADOS"
	Escribir "Nota: Cuando desee finalizar el programa ingrese menos 1"
	Escribir " "
	Mientras m<>-1 Hacer
		Escribir "Ingrese un numero"
		Leer m
		si m<-1 Entonces
			Escribir "Ingrese numeros positivos por favor"
			Escribir "*************************************"
		SiNo
		si m<>-1 Entonces
			suma = suma+m
			c = c + 1
		FinSi
	FinSi
	FinMientras
	
	si c > 0 Entonces
		Escribir "La media de los numeros es: ",suma/c
		Escribir "******** Es un placer servirle *******"
	FinSi
FinAlgoritmo
