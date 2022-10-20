Algoritmo divisores_alg
	Definir a,b,x, maximo Como Entero
	Escribir "Ingresa sus dos numeros"
	Leer x,z
	
	
	Si x > 0 y z > 0 Entonces
		maximo = 1
		c = 1
		
		Mientras c <= x Hacer
			si x mod c == 0 y z mod c == 0 Entonces
				si x > maximo Entonces
					maximo = c
				FinSi
			FinSi
			c = c + 1
		FinMientras
		Escribir "El máximo comun divisor es: ",maximo
	SiNo
		Escribir "Debes ingresar numeros mayores a cero"
	FinSi
	
FinAlgoritmo
