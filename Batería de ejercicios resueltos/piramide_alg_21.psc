Algoritmo piramide_alg
	Definir i,altura,j como entero
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
