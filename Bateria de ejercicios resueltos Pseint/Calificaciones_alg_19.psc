Algoritmo Calificaciones_alg
//19. Calcular las calificaciones de un grupo de alumnos. La nota final de cada
//alumno se calcula según el siguiente criterio: la parte práctica vale el 10%;
//la parte de problemas vale el 50% y la parte teórica el 40%. El algoritmo
//	leerá el nombre del alumno, las tres notas, escribirá el resultado y volverá a
//pedir los datos del siguiente alumno hasta que el nombre sea una cadena
//vacía. Las notas deben estar entre 0 y 10, si no lo están, no imprimirá las
//notas, mostrará un mensaje de error y volverá a pedir otro alumno.
	Definir Npractica,Nproblemas,Nteoría,NotaT Como Real
	Definir nombre Como Cadena
	Escribir "ESTE ALGORITMO TE PERMITE CALCULAR LA NOTA FINAL DE VARIOS ESTUDIANTES, QUE LO DISFRUTES"
	Escribir "***********************************"
	Escribir "¿Cuantos alumnos desea calcular? ingrese un numero:"
	Leer num
	
	contador = 0
	Repetir
		Escribir "¡Ingrese el nombre del estudiante por favor!"
		Leer nombre
		Escribir "Ingrese nota practica del 0.1 al 1 "
		Leer Npractica
		Escribir "Ingrese nota de ejercicios del 0.1 al 5"
		Leer Nproblemas
		Escribir "Ingrese nota de teoría del 0.1 al 4"
		Leer Nteoría
		
		Si (Npractica >0 y Npractica <= 1) y (Nproblemas >0 y Nproblemas <= 5 ) y (Nteoría > 0 y Nteoría <= 4) Entonces
			
			NotaT = Npractica + Nproblemas + Nteoría
			Escribir "Nota practica:" Npractica
			Escribir "Nota de problemas:" Nproblemas
			Escribir "Nota de teoría:" Nteoría
			Escribir nombre " Tiene una nota de:" NotaT
		SiNo
			Escribir "Se ha producido un error lo sentimos"
			Escribir "*********************************"
	FinSi
	contador = contador +1
Hasta Que contador = num

Escribir "Es un placer servirle"
FinAlgoritmo
