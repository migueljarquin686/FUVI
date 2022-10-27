Algoritmo Cuadro_lado_alg
	Definir a,lado Como Entero
	Escribir "Escribe un numero o lado:"
	Leer lado
	para a = 1 Hasta lado Hacer
		para b = 1 Hasta lado Hacer
			si a > 1 y a < lado  Entonces
				Escribir "  " Sin Saltar
			SiNo
				Escribir " * "Sin Saltar
			FinSi
		FinPara
		Escribir ""
	FinPara
	Escribir "Es un placer servirle"
FinAlgoritmo
