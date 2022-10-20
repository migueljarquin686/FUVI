Algoritmo Media_alg
	
	Definir total,P,suma,n,Media Como Real
	Escribir "Ingresa el total de numeros"
	Leer total
	
	P=1
	suma = 0
	Mientras P <= total Hacer
		Escribir "Ingresa el numero ",P
		Leer n
		si n >= 0 Entonces
		
		Suma = Suma + n
		P = P+1
	FinSi
	
	Fin Mientras
	Media = Suma/total
	Escribir "La media es: ", Media
	
	Escribir "Es un placer servirle"
FinAlgoritmo
