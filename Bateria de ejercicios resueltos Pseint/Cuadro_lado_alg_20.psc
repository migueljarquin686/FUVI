Algoritmo Cuadro_lado_alg
	Definir a,lado Como Entero
	Escribir "ESTE ALGORITMO TE MUESTRA EL LADO SUPERIOR EN INFERIOR DE UN CUADRADO."
	Escribir "*******************************************"
	Escribir "Escribe un numero o lado:"
	Leer lado
	para a = 1 Hasta lado Hacer
		para b = 1 Hasta lado Hacer
			si a > 1 y a < lado y b > 1 y b < lado  Entonces
				Escribir "* " Sin Saltar
			SiNo
				Escribir "* "Sin Saltar
			FinSi
		FinPara
		Escribir " "
	FinPara
	Escribir "Es un placer servirle"
FinAlgoritmo
