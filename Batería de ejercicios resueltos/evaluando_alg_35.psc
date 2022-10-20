Algoritmo evaluando_alg
	Definir X Como Real
	Escribir "Ingrese el valor de de el numero X"
	Leer X
	
	Si X > 0 Entonces
		
		F= (((X-2)^2)/2)+(((X-4)^4)/4)+(((X-6)^6)/6)
		Escribir "Para X positivo el valor es: ",F
		
	SiNo
		Si X < 0 Entonces
			
		F= (((X+2)^2)/2)+(((X+4)^4)/4)+(((X+6)^6)/6)
		Escribir F
		Escribir "Para X negativo el valor es: ",F
	FinSi
FinSi
Escribir "Es un placer servirle"
FinAlgoritmo
