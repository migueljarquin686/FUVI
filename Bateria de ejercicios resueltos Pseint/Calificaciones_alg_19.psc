Algoritmo Calificaciones_alg
//19. Calcular las calificaciones de un grupo de alumnos. La nota final de cada
//alumno se calcula seg�n el siguiente criterio: la parte pr�ctica vale el 10%;
//la parte de problemas vale el 50% y la parte te�rica el 40%. El algoritmo
//	leer� el nombre del alumno, las tres notas, escribir� el resultado y volver� a
//pedir los datos del siguiente alumno hasta que el nombre sea una cadena
//vac�a. Las notas deben estar entre 0 y 10, si no lo est�n, no imprimir� las
//notas, mostrar� un mensaje de error y volver� a pedir otro alumno.
	Definir Npractica,Nproblemas,Nteor�a,NotaT Como Real
	Definir nombre Como Cadena
	Escribir "ESTE ALGORITMO TE PERMITE CALCULAR LA NOTA FINAL DE VARIOS ESTUDIANTES, QUE LO DISFRUTES"
	Escribir "***********************************"
	Escribir "�Cuantos alumnos desea calcular? ingrese un numero:"
	Leer num
	
	contador = 0
	Repetir
		Escribir "�Ingrese el nombre del estudiante por favor!"
		Leer nombre
		Escribir "Ingrese nota practica del 0.1 al 1 "
		Leer Npractica
		Escribir "Ingrese nota de ejercicios del 0.1 al 5"
		Leer Nproblemas
		Escribir "Ingrese nota de teor�a del 0.1 al 4"
		Leer Nteor�a
		
		Si (Npractica >0 y Npractica <= 1) y (Nproblemas >0 y Nproblemas <= 5 ) y (Nteor�a > 0 y Nteor�a <= 4) Entonces
			
			NotaT = Npractica + Nproblemas + Nteor�a
			Escribir "Nota practica:" Npractica
			Escribir "Nota de problemas:" Nproblemas
			Escribir "Nota de teor�a:" Nteor�a
			Escribir nombre " Tiene una nota de:" NotaT
		SiNo
			Escribir "Se ha producido un error lo sentimos"
			Escribir "*********************************"
	FinSi
	contador = contador +1
Hasta Que contador = num

Escribir "Es un placer servirle"
FinAlgoritmo
