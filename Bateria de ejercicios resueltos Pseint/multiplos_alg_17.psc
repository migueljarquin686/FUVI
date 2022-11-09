Algoritmo multiplos_alg
//17. Algoritmo que visualice la cuenta de los números que son múltiplos de 2 o
//de 3 que hay entre 1 y 100.
	Definir m,a,b Como Entero
	
	m=1
	a=0
	b=0
	Escribir "ESTE ALGORITMO TE MUESTRA LOS NUMEROS QUE SON MULTIPLOS DE 2 O DE 3 ENTRE 1 Y 100"
	Escribir "*******************************************"
	Escribir "Presione una tecla"
	Esperar Tecla
	mientras m <= 100 Hacer
		si m mod 2 == 0 Entonces
			Escribir "Numero multiplo de 2:", m
			a = a + 1
		FinSi
		si m mod 3 == 0 Entonces
			Escribir "Numero multiplo de 3:", m
			b= b + 1
		FinSi
		m= m + 1
	FinMientras
	Escribir "Los numeros multiplos de 2: ", a
	Escribir "Los numeros multiplos de 3: ",b
	
	Escribir "Es un placer servirle"
FinAlgoritmo
