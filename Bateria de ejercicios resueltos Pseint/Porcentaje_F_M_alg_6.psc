Algoritmo Porcentaje_F_M_alg
	//6. Un colegio desea saber qué porcentaje de niños y qué porcentaje de niñas
	//hay en el curso actual. Diseñar un algoritmo para este propósito.

	Definir jovencitas,jovencitos,suma,porcentajeM,PorcentajeF Como Real
	Escribir "ESTE ALGORITMO TE MUESTRA EL PORCENTAJE DE NIÑOS Y DE NIÑAS QUE HAY EN EL CURSO"
	Escribir "Ingrese el numero de jovencitos"
	Leer jovencitos
	Escribir "Ingrese el numero de jovencitas"
	Leer jovencitas
	
	Si jovencitos >= 0 Entonces
		si jovencitas >= 0 Entonces
			
			suma = jovencitos + jovencitas
			PorcentajeM = (jovencitos*100)/suma
			PorcentajeF = (jovencitas*100)/suma
			
			Escribir "El porcentaje de jovencitos es: " PorcentajeM " "
			Escribir "El porcentaje de jovencitas es: " PorcentajeF " "
			
		SiNo
			Escribir "Los numeros que usted ingreso no son admitidos"
		FinSi
	FinSi
	Escribir "Es un placer servirle"
FinAlgoritmo
