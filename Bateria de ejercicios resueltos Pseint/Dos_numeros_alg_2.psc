Algoritmo dos_numeros_variables
	//2. Algoritmo que lea dos números y nos diga cuál de ellos es mayor o bien si
	//son iguales.
	Definir numx,numy Como Real
	Escribir "ESTE ALGORITMO LEE DOS NUMEROS Y NOS DICE CUAL ES EL MAYOR"
	Escribir "******************************************"
	Escribir "Ingrese su primer numx"
	Leer numx
	Escribir "Ingrese su segundo numy"
	Leer numy
	
	si numx < numy  Entonces
		Escribir " El numero mayor es: " numy " "
	FinSi
	
	si (numx > numy ) Entonces
		Escribir " El numero mayor es: " numx " "
	FinSi
	
	si (numx = numy) Entonces
		Escribir " los números son iguales"
	FinSi
	
	Escribir " Es un placer servirle "
FinAlgoritmo
