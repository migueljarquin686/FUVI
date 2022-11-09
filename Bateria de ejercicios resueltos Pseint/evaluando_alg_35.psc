Algoritmo evaluando_alg
	//35. Elabore un algoritmo que dado un valor X, calcule:
	Definir X Como Real
	Escribir "ESTE ALGORITMO TE CALCULA EL VALOR DE X RESPECTO A UNA ECUACION YA DADA"
	Escribir "*********************************************"
	Escribir "Ingrese el valor de el numero X"
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
