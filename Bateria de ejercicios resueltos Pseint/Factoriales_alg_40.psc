Algoritmo Factoriales_alg_40
	Definir P,S,T,J Como Real
	
	Escribir "ESTE ALGORITMO TE MUESTRA LOS RESULTADOS DE UNA FORMULA QUE CONTIENE FACTORIALES, QUE LO DISFRUTES"
	Escribir "Ingrese el primer numero de la formula"
	Leer P
	Escribir "Ingrese el segundo numero de la formula"
	Leer S
	
	Si P <= 0 Entonces
		Escribir "ERROR VALORES NO PERMITIDOS"
	SiNo
		F=1
		Para x=1 hasta P con paso 1 Hacer
			F = f * x
		FinPara
	FinSi
	
	Si S <= 0 Entonces
		Escribir "ERROR VALORES NO PERMITIDOS"
	SiNo
		D=1
		Para L=1 hasta S con paso 1 Hacer
			D = D*L
		FinPara
	FinSi
	
	Si S <= 0 Entonces
		Escribir "ERROR VALORES NO PERMITIDOS"
	SiNo
		
		T=P-S
		Z=1
		Para W=1 hasta T con paso 1 Hacer
			Z = Z*W
		FinPara
	FinSi
	
	SI F>0 Y D>0 Entonces
		J=F/((z)*D)
		Escribir "El resultado de la operación con factoriales es :",J
	FinSi
	Escribir "Es un placer servirle"
FinAlgoritmo
