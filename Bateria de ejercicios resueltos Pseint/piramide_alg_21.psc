Algoritmo piramide_alg
	//21. Algoritmo que lea un número entero (altura) y a partir de él, cree una
	//escalera invertida de asteriscos con esa altura.
	Definir i,altura,j como entero
	Escribir "ESTE ALGORITMO NOS MUESTRA UNA ESCALERA INVERTIDA DE *"
	leer altura;
	para i<- altura con paso -1 Hasta 1 Hacer
		
		para j <- 0 con paso 1 hasta (altura - i - 1) Hacer
			Escribir "" Sin Saltar;
		FinPara
		
		para j <- 1 con paso 1 hasta i Hacer
			Escribir "*" Sin Saltar;
		FinPara
		Escribir "";
	FinPara
FinAlgoritmo
