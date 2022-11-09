Algoritmo sin_titulo
	//El colegio "Mi Casita" desea calcular el monto a pagar por inscripción del
	//nuevo año escolar, para las familias con hijos en el colegio. Para ello se
	//conoce el número de hijos que tiene la familia en el colegio, el monto de
	//matrícula por niño, el monto de la mensualidad del mes de septiembre por
	//niño y el monto de la sociedad de padres. Elabore un algoritmo que calcule
	//el total a pagar por la familia, si la sociedad de padres se cobra una vez por
	//familiar y si se otorga un descuento por la cantidad de hijos en el colegio
	//que viene dado por la siguiente tabla:
	
	Definir hijos Como Real
	Definir familiar Como cadena
	Escribir "ESTE ALGORITMO TE PERMITE CALCULAR EL MONTO A PAGAR POR INSCRIPCION EN EL COLEGIO MI CASITA"
	Escribir "***********************************************"
	Escribir "Ingrese el nombre del familiar o su nombre como tutor"
	Leer familiar
	//nota : Se toma en cuenta que la sociedad de padres cobra 10 $ por familiar.
	//nota : Se toma en cuenta que el colegio MI CASITA cobra 30 $ por niño.
	Escribir "Ingrese el numero de hijos que estudiaran en el colegio MI CASITA"
	Leer hijos
	si hijos = 1 Entonces
		Totaln = 30
		JuntaP = 10
		Total = Totaln+JuntaP
		Escribir "El total a pagar por 1 niño es ************* " Totaln " $"
		Escribir "El total a pagar de la junta de padres es ** " JuntaP " $"
		Escribir " "
		Escribir "Total *************************************** ",Total " $"
		Escribir " "
		Escribir "Es un placer servirle " familiar
	FinSi
	
	si hijos = 2 Entonces
		Totaln=(30-(30*10)/100)*hijos
		JuntaP = 10
		Total = Totaln+JuntaP
		Escribir "El total a pagar por 2 niños es ************ " Totaln," $" 
		Escribir "El total a pagar de la junta de padres es ** " JuntaP " $"
		Escribir " "
		Escribir "Total **************************************** ",Total " $"
		Escribir " "
		Escribir "Es un placer servirle " familiar
	FinSi
	
	si hijos = 3 Entonces
		Totaln=(30-(30*15)/100)*hijos
		JuntaP = 10
		Total = Totaln+JuntaP
		Escribir "El total a pagar por 3 niños es ************ " Totaln," $" 
		Escribir "El total a pagar de la junta de padres es ** " JuntaP " $"
		Escribir " "
		Escribir "Total *************************************** ",Total " $"
		Escribir " "
		Escribir "Es un placer servirle " familiar
	FinSi
	
	si hijos >= 4 Entonces
		Totaln=(30-(30*20)/100)*hijos
		JuntaP = 10
		Total = Totaln+JuntaP
		Escribir "El total a pagar por 4 niños o mas es****** " Totaln," $" 
		Escribir "El total a pagar de la junta de padres es ** " JuntaP " $"
		Escribir " "
		Escribir "Total *************************************** ",Total " $"
		Escribir " "
		Escribir "Es un placer servirle " familiar
	FinSi
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
FinAlgoritmo
