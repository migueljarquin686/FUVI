Algoritmo factorial_alg
	Definir F,D,J,a,b Como Real
	Escribir "Ingrese un numero a"
	Leer a
	Escribir "Ingrese un numero b"
	Leer b
	
	Si a <= 0 Entonces
		Escribir "Estos valores no se pueden calcular"
	SiNo
		F=1
		Para x=1 hasta a con paso 1 Hacer
			F = f * x
		FinPara
	FinSi
	
	Si b <= 0 Entonces
		Escribir "Estos valores no se pueden calcular"
	SiNo
		D=1
		Para L=1 hasta b con paso 1 Hacer
			D = D*L
		FinPara
	FinSi
	
	SI F>0 Y D>0 Entonces
		J=F/((F-D)*D)
		Escribir "El resultado de la operación con factoriales es :",J
	FinSi
	Escribir "Es un placer servirle"
FinAlgoritmo
