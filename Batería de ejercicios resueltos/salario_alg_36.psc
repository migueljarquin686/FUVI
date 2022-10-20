Algoritmo salario_alg
// Desarrolle un algoritmo para leer el nombre de un empleado, el salario
// básico por hora y el número de horas trabajadas durante una semana.
// Calcule el salario neto, teniendo en cuenta que, si el número de horas
// trabajadas durante la semana es mayor de 48 horas, esas horas demás
// se consideran horas extras y tienen un recargo del 35% (incentivo).
// Imprima el nombre del empleado y su salario neto
	
	Escribir "Ingrese el nombre del empleado"
	Leer nombre
	Escribir "Ingrese su salario basico por hora"
	Leer SH
	Escribir "Ingrese el numero de horas trabajadas en todo el día"
	Leer NH
	
	//se procede a calcular el numero de horas de la semana
	NHS=NH*6
	//Se procede a calcular el salario neto del trabajador
	SN=NHS*SH
	
	Si NHS>48 Entonces
		HE=((SN*35)/100)
		ST=SN+HE
		Escribir "Nombre del empleado: ",nombre
		Escribir "Salario Neto************************** ",SN
		Escribir "Incentivo de horas extras************* ",HE
		Escribir "Salario total************************* ",ST
		
	SiNo
		Escribir "Nombre del empleado: ",nombre
		Escribir "Salario Neto************************** ",SN
	FinSi
	Escribir " "
	Escribir "Es un placer servirle"

FinAlgoritmo
