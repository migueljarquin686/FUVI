Algoritmo pares_impares_alg
	//Diseñar un algoritmo que, dados 10 números naturales, indique cuántos de
	//ellos son números pares, nos muestre estos y calcule la media aritmética de
	//los impares.
	
	para x = 1 Hasta 10 con paso 1 hacer 
		Escribir "Ingrese un numero"
		Leer n
		si n mod 2 ==0 Entonces
			pares = pares + 1
			Escribir "el numero es par:" n
			
			
			
			Escribir "**************************"
			
		SiNo
			si n mod 2 ==1 Entonces
				impares = impares + 1
				suma=suma+n
				media = suma/impares
				
			FinSi
		FinSi
	FinPara
	Escribir "Los numeros pares son:" pares
	Escribir "los numeros impares son:" impares
	Escribir"La media de los impares es:", media
	Escribir " "
	Escribir "Es un placer servirle"
FinAlgoritmo
