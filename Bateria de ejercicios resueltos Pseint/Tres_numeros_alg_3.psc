Algoritmo Tres_numeros_alg
	//3. Algoritmo que lea tres números distintos y nos diga cuál de ellos es el
	//mayor.
	Definir numx,numy,numz Como Real
	Escribir "ESTE ALGORITMO NOS DICE CUAL DE TRES NUMEROS ES EL MAYOR"
	Escribir "Ingrese su primer numx"
	Leer numx
	Escribir "Ingrese su segundo numy"
	Leer numy
	Escribir "Ingrese su segundo numz"
	Leer numz
	
	Si numx > numy Entonces
		si numx > numz Entonces
			Escribir "El mumero mayor es:" numx " "
		FinSi
	FinSi
	
	Si numy > numx Entonces
		si numy > numz Entonces
			Escribir "El mumero mayor es:" numy " "
		FinSi
	FinSi
	
	Si numz > numx Entonces
		si numz > numy Entonces
			Escribir "El mumero mayor es:" numz " "
		FinSi
	FinSi
	
	Escribir "Es un placer servirle"
FinAlgoritmo
